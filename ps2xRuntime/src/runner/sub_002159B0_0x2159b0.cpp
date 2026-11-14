#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002159B0
// Address: 0x2159b0 - 0x215a60
void sub_002159B0_0x2159b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002159B0_0x2159b0");
#endif

    switch (ctx->pc) {
        case 0x2159d8u: goto label_2159d8;
        case 0x2159ecu: goto label_2159ec;
        case 0x215a00u: goto label_215a00;
        case 0x215a14u: goto label_215a14;
        case 0x215a30u: goto label_215a30;
        default: break;
    }

    ctx->pc = 0x2159b0u;

    // 0x2159b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2159b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2159b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2159b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2159b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2159b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2159bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2159bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2159c0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2159c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2159c4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2159c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2159c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2159c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2159cc: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2159ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2159d0: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x2159D0u;
    SET_GPR_U32(ctx, 31, 0x2159D8u);
    ctx->pc = 0x10CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAF0u, 0x2159D0u, 0x2159D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2159D8u;
label_2159d8:
    // 0x2159d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2159d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159dc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2159dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2159e0: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2159e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2159e4: 0xc041144  jal         func_104510
    ctx->pc = 0x2159E4u;
    SET_GPR_U32(ctx, 31, 0x2159ECu);
    ctx->pc = 0x104510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104510u, 0x2159E4u, 0x2159ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2159ECu;
label_2159ec:
    // 0x2159ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2159ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2159f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159f4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2159f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2159f8: 0xc085704  jal         func_215C10
    ctx->pc = 0x2159F8u;
    SET_GPR_U32(ctx, 31, 0x215A00u);
    ctx->pc = 0x215C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215C10u, 0x2159F8u, 0x215A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215A00u;
label_215a00:
    // 0x215a00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x215a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a04: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x215a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215a08: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x215a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x215a0c: 0xc041144  jal         func_104510
    ctx->pc = 0x215A0Cu;
    SET_GPR_U32(ctx, 31, 0x215A14u);
    ctx->pc = 0x104510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104510u, 0x215A0Cu, 0x215A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215A14u;
label_215a14:
    // 0x215a14: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x215A14u;
    {
        const bool branch_taken_0x215a14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x215a14) {
            ctx->pc = 0x215A3Cu;
            goto label_215a3c;
        }
    }
    ctx->pc = 0x215A1Cu;
    // 0x215a1c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x215a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215a20: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x215a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x215a24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a28: 0xc085698  jal         func_215A60
    ctx->pc = 0x215A28u;
    SET_GPR_U32(ctx, 31, 0x215A30u);
    ctx->pc = 0x215A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A60u, 0x215A28u, 0x215A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215A30u;
label_215a30:
    // 0x215a30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215a34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x215A34u;
    {
        const bool branch_taken_0x215a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215a34) {
            ctx->pc = 0x215A40u;
            goto label_215a40;
        }
    }
    ctx->pc = 0x215A3Cu;
label_215a3c:
    // 0x215a3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x215a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215a40:
    // 0x215a40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x215a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215a44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x215a44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215a48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x215a48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215a4c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x215a4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x215a50: 0x3e00008  jr          $ra
    ctx->pc = 0x215A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215A58u;
    // 0x215a58: 0x0  nop
    ctx->pc = 0x215a58u;
    // NOP
    // 0x215a5c: 0x0  nop
    ctx->pc = 0x215a5cu;
    // NOP
    ctx->pc = 0x215a60u;
}
