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

// Function: sub_002345F0
// Address: 0x2345f0 - 0x2346b0
void sub_002345F0_0x2345f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002345F0_0x2345f0");
#endif

    switch (ctx->pc) {
        case 0x234628u: goto label_234628;
        case 0x234638u: goto label_234638;
        case 0x234650u: goto label_234650;
        case 0x234664u: goto label_234664;
        case 0x234674u: goto label_234674;
        case 0x23468cu: goto label_23468c;
        default: break;
    }

    ctx->pc = 0x2345f0u;

    // 0x2345f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2345f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2345f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2345f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2345f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2345f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2345fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2345fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x234600: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x234600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x234604: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x234604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x234608: 0x24635400  addiu       $v1, $v1, 0x5400
    ctx->pc = 0x234608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21504));
    // 0x23460c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x23460cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x234610: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x234610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x234614: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x234614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x234618: 0xaf82bb98  sw          $v0, -0x4468($gp)
    ctx->pc = 0x234618u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949784), GPR_U32(ctx, 2));
    // 0x23461c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x23461cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x234620: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x234620u;
    SET_GPR_U32(ctx, 31, 0x234628u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x234620u, 0x234628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234628u;
label_234628:
    // 0x234628: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x234628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x23462c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23462cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234630: 0xc0400e0  jal         func_100380
    ctx->pc = 0x234630u;
    SET_GPR_U32(ctx, 31, 0x234638u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x234630u, 0x234638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234638u;
label_234638:
    // 0x234638: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x234638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23463c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23463Cu;
    {
        const bool branch_taken_0x23463c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23463c) {
            ctx->pc = 0x234654u;
            goto label_234654;
        }
    }
    ctx->pc = 0x234644u;
    // 0x234644: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x234644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234648: 0xc08d1ac  jal         func_2346B0
    ctx->pc = 0x234648u;
    SET_GPR_U32(ctx, 31, 0x234650u);
    ctx->pc = 0x2346B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2346B0u, 0x234648u, 0x234650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234650u;
label_234650:
    // 0x234650: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x234650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234654:
    // 0x234654: 0xaf91bba4  sw          $s1, -0x445C($gp)
    ctx->pc = 0x234654u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949796), GPR_U32(ctx, 17));
    // 0x234658: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x234658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x23465c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x23465Cu;
    SET_GPR_U32(ctx, 31, 0x234664u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x23465Cu, 0x234664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234664u;
label_234664:
    // 0x234664: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x234664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x234668: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x234668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23466c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x23466Cu;
    SET_GPR_U32(ctx, 31, 0x234674u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x23466Cu, 0x234674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234674u;
label_234674:
    // 0x234674: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234678: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x234678u;
    {
        const bool branch_taken_0x234678 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x234678) {
            ctx->pc = 0x234690u;
            goto label_234690;
        }
    }
    ctx->pc = 0x234680u;
    // 0x234680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234684: 0xc08d1ac  jal         func_2346B0
    ctx->pc = 0x234684u;
    SET_GPR_U32(ctx, 31, 0x23468Cu);
    ctx->pc = 0x2346B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2346B0u, 0x234684u, 0x23468Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23468Cu;
label_23468c:
    // 0x23468c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23468cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234690:
    // 0x234690: 0xaf90bba8  sw          $s0, -0x4458($gp)
    ctx->pc = 0x234690u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949800), GPR_U32(ctx, 16));
    // 0x234694: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x234694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x234698: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x234698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23469c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23469cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2346a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2346a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2346a4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2346a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2346a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2346A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2346A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2346B0u;
}
