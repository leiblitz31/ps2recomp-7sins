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

// Function: sub_0026EEF0
// Address: 0x26eef0 - 0x26efd0
void sub_0026EEF0_0x26eef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026EEF0_0x26eef0");
#endif

    switch (ctx->pc) {
        case 0x26ef18u: goto label_26ef18;
        case 0x26ef30u: goto label_26ef30;
        case 0x26ef40u: goto label_26ef40;
        case 0x26ef54u: goto label_26ef54;
        case 0x26ef64u: goto label_26ef64;
        case 0x26ef70u: goto label_26ef70;
        case 0x26ef80u: goto label_26ef80;
        case 0x26ef90u: goto label_26ef90;
        case 0x26efa0u: goto label_26efa0;
        default: break;
    }

    ctx->pc = 0x26eef0u;

    // 0x26eef0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26eef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26eef4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26eef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26eef8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26eef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26eefc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26eefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26ef00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26ef00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26ef04: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x26ef04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x26ef08: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26ef0c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x26ef0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x26ef10: 0xc0905a0  jal         func_241680
    ctx->pc = 0x26EF10u;
    SET_GPR_U32(ctx, 31, 0x26EF18u);
    ctx->pc = 0x241680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241680u, 0x26EF10u, 0x26EF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF18u;
label_26ef18:
    // 0x26ef18: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26ef18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef1c: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x26EF1Cu;
    {
        const bool branch_taken_0x26ef1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ef1c) {
            ctx->pc = 0x26EFACu;
            goto label_26efac;
        }
    }
    ctx->pc = 0x26EF24u;
    // 0x26ef24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26ef24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef28: 0xc09a82c  jal         func_26A0B0
    ctx->pc = 0x26EF28u;
    SET_GPR_U32(ctx, 31, 0x26EF30u);
    ctx->pc = 0x26A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A0B0u, 0x26EF28u, 0x26EF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF30u;
label_26ef30:
    // 0x26ef30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26ef30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ef34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef38: 0xc04312c  jal         func_10C4B0
    ctx->pc = 0x26EF38u;
    SET_GPR_U32(ctx, 31, 0x26EF40u);
    ctx->pc = 0x10C4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C4B0u, 0x26EF38u, 0x26EF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF40u;
label_26ef40:
    // 0x26ef40: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x26EF40u;
    {
        const bool branch_taken_0x26ef40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ef40) {
            ctx->pc = 0x26EFACu;
            goto label_26efac;
        }
    }
    ctx->pc = 0x26EF48u;
    // 0x26ef48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26ef48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef4c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26EF4Cu;
    {
        const bool branch_taken_0x26ef4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ef4c) {
            ctx->pc = 0x26EF94u;
            goto label_26ef94;
        }
    }
    ctx->pc = 0x26EF54u;
label_26ef54:
    // 0x26ef54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ef54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26ef58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef5c: 0xc042ff0  jal         func_10BFC0
    ctx->pc = 0x26EF5Cu;
    SET_GPR_U32(ctx, 31, 0x26EF64u);
    ctx->pc = 0x10BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BFC0u, 0x26EF5Cu, 0x26EF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF64u;
label_26ef64:
    // 0x26ef64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26ef64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef68: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x26EF68u;
    SET_GPR_U32(ctx, 31, 0x26EF70u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x26EF68u, 0x26EF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF70u;
label_26ef70:
    // 0x26ef70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26ef70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26ef74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef78: 0xc09a714  jal         func_269C50
    ctx->pc = 0x26EF78u;
    SET_GPR_U32(ctx, 31, 0x26EF80u);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x26EF78u, 0x26EF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF80u;
label_26ef80:
    // 0x26ef80: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x26ef80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26ef84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26ef84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef88: 0xc09b194  jal         func_26C650
    ctx->pc = 0x26EF88u;
    SET_GPR_U32(ctx, 31, 0x26EF90u);
    ctx->pc = 0x26C650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C650u, 0x26EF88u, 0x26EF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF90u;
label_26ef90:
    // 0x26ef90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26ef90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_26ef94:
    // 0x26ef94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ef94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef98: 0xc043104  jal         func_10C410
    ctx->pc = 0x26EF98u;
    SET_GPR_U32(ctx, 31, 0x26EFA0u);
    ctx->pc = 0x10C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C410u, 0x26EF98u, 0x26EFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EFA0u;
label_26efa0:
    // 0x26efa0: 0x202182b  sltu        $v1, $s0, $v0
    ctx->pc = 0x26efa0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26efa4: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x26EFA4u;
    {
        const bool branch_taken_0x26efa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26efa4) {
            ctx->pc = 0x26EF54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26ef54;
        }
    }
    ctx->pc = 0x26EFACu;
label_26efac:
    // 0x26efac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26efacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26efb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26efb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26efb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26efb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26efb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26efb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26efbc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x26efbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26efc0: 0x3e00008  jr          $ra
    ctx->pc = 0x26EFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EFC8u;
    // 0x26efc8: 0x0  nop
    ctx->pc = 0x26efc8u;
    // NOP
    // 0x26efcc: 0x0  nop
    ctx->pc = 0x26efccu;
    // NOP
    ctx->pc = 0x26efd0u;
}
