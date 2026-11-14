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

// Function: sub_00493670
// Address: 0x493670 - 0x493710
void sub_00493670_0x493670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00493670_0x493670");
#endif

    switch (ctx->pc) {
        case 0x49369cu: goto label_49369c;
        case 0x4936c0u: goto label_4936c0;
        case 0x4936d4u: goto label_4936d4;
        case 0x4936e8u: goto label_4936e8;
        default: break;
    }

    ctx->pc = 0x493670u;

    // 0x493670: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x493670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x493674: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x493674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x493678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x493678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49367c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49367cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x493680: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x493680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x493684: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x493684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493688: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x493688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x49368c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x49368cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x493690: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x493690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x493694: 0xc10493e  jal         func_4124F8
    ctx->pc = 0x493694u;
    SET_GPR_U32(ctx, 31, 0x49369Cu);
    ctx->pc = 0x4124F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4124F8u, 0x493694u, 0x49369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49369Cu;
label_49369c:
    // 0x49369c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49369cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4936a0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4936A0u;
    {
        const bool branch_taken_0x4936a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4936a0) {
            ctx->pc = 0x4936E8u;
            goto label_4936e8;
        }
    }
    ctx->pc = 0x4936A8u;
    // 0x4936a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4936a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4936ac: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x4936acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4936b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4936b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4936b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4936b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4936b8: 0xc103322  jal         func_40CC88
    ctx->pc = 0x4936B8u;
    SET_GPR_U32(ctx, 31, 0x4936C0u);
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x4936B8u, 0x4936C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4936C0u;
label_4936c0:
    // 0x4936c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4936C0u;
    {
        const bool branch_taken_0x4936c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4936c0) {
            ctx->pc = 0x4936D8u;
            goto label_4936d8;
        }
    }
    ctx->pc = 0x4936C8u;
    // 0x4936c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4936c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4936cc: 0xc0e237c  jal         func_388DF0
    ctx->pc = 0x4936CCu;
    SET_GPR_U32(ctx, 31, 0x4936D4u);
    ctx->pc = 0x388DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388DF0u, 0x4936CCu, 0x4936D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4936D4u;
label_4936d4:
    // 0x4936d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4936d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4936d8:
    // 0x4936d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4936d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4936dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4936dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4936e0: 0xc10496a  jal         func_4125A8
    ctx->pc = 0x4936E0u;
    SET_GPR_U32(ctx, 31, 0x4936E8u);
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x4936E0u, 0x4936E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4936E8u;
label_4936e8:
    // 0x4936e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4936e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4936ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4936ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4936f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4936f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4936f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4936f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4936f8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4936f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4936fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4936FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4936FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x493704u;
    // 0x493704: 0x0  nop
    ctx->pc = 0x493704u;
    // NOP
    // 0x493708: 0x0  nop
    ctx->pc = 0x493708u;
    // NOP
    // 0x49370c: 0x0  nop
    ctx->pc = 0x49370cu;
    // NOP
    ctx->pc = 0x493710u;
}
