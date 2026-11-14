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

// Function: sub_002891F0
// Address: 0x2891f0 - 0x2892e0
void sub_002891F0_0x2891f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002891F0_0x2891f0");
#endif

    switch (ctx->pc) {
        case 0x289214u: goto label_289214;
        case 0x289220u: goto label_289220;
        case 0x289254u: goto label_289254;
        case 0x28927cu: goto label_28927c;
        case 0x289294u: goto label_289294;
        case 0x2892acu: goto label_2892ac;
        default: break;
    }

    ctx->pc = 0x2891f0u;

    // 0x2891f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2891f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2891f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2891f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2891f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2891f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2891fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2891fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x289200: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x289200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x289204: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x289204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x289208: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x289208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28920c: 0xc0a36d4  jal         func_28DB50
    ctx->pc = 0x28920Cu;
    SET_GPR_U32(ctx, 31, 0x289214u);
    ctx->pc = 0x28DB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB50u, 0x28920Cu, 0x289214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289214u;
label_289214:
    // 0x289214: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x289214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289218: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x289218u;
    {
        const bool branch_taken_0x289218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289218) {
            ctx->pc = 0x2892C0u;
            goto label_2892c0;
        }
    }
    ctx->pc = 0x289220u;
label_289220:
    // 0x289220: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x289220u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x289224: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x289224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x289228: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x289228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28922c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x28922cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x289230: 0x10030022  beq         $zero, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x289230u;
    {
        const bool branch_taken_0x289230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x289230) {
            ctx->pc = 0x2892BCu;
            goto label_2892bc;
        }
    }
    ctx->pc = 0x289238u;
    // 0x289238: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x289238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x28923c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x28923cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x289240: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x289240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x289244: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x289244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x289248: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x289248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28924c: 0xc1066de  jal         func_419B78
    ctx->pc = 0x28924Cu;
    SET_GPR_U32(ctx, 31, 0x289254u);
    ctx->pc = 0x419B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B78u, 0x28924Cu, 0x289254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289254u;
label_289254:
    // 0x289254: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x289254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x289258: 0x10020008  beq         $zero, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x289258u;
    {
        const bool branch_taken_0x289258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x289258) {
            ctx->pc = 0x28927Cu;
            goto label_28927c;
        }
    }
    ctx->pc = 0x289260u;
    // 0x289260: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x289260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x289264: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x289264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x289268: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x289268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28926c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x28926cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x289270: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x289270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x289274: 0xc0e6ee0  jal         func_39BB80
    ctx->pc = 0x289274u;
    SET_GPR_U32(ctx, 31, 0x28927Cu);
    ctx->pc = 0x39BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB80u, 0x289274u, 0x28927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28927Cu;
label_28927c:
    // 0x28927c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x28927cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x289280: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x289280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x289284: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x289284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x289288: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x289288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28928c: 0xc11e00c  jal         func_478030
    ctx->pc = 0x28928Cu;
    SET_GPR_U32(ctx, 31, 0x289294u);
    ctx->pc = 0x478030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478030u, 0x28928Cu, 0x289294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289294u;
label_289294:
    // 0x289294: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x289294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x289298: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x289298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28929c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28929cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2892a0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2892a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2892a4: 0xc0e20da  jal         func_388368
    ctx->pc = 0x2892A4u;
    SET_GPR_U32(ctx, 31, 0x2892ACu);
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x2892A4u, 0x2892ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2892ACu;
label_2892ac:
    // 0x2892ac: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2892acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2892b0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2892b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2892b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2892b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2892b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2892b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2892bc:
    // 0x2892bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2892bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2892c0:
    // 0x2892c0: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x2892c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2892c4: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2892C4u;
    {
        const bool branch_taken_0x2892c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2892c4) {
            ctx->pc = 0x289220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_289220;
        }
    }
    ctx->pc = 0x2892CCu;
    // 0x2892cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2892ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2892d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2892d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2892d4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2892d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2892d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2892D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2892D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2892E0u;
}
