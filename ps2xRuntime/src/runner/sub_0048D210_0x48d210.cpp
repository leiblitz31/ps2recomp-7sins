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

// Function: sub_0048D210
// Address: 0x48d210 - 0x48d2b0
void sub_0048D210_0x48d210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048D210_0x48d210");
#endif

    switch (ctx->pc) {
        case 0x48d238u: goto label_48d238;
        case 0x48d244u: goto label_48d244;
        case 0x48d25cu: goto label_48d25c;
        case 0x48d288u: goto label_48d288;
        default: break;
    }

    ctx->pc = 0x48d210u;

    // 0x48d210: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x48d210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x48d214: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48d214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x48d218: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48d218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48d21c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48d21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48d220: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x48d220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x48d224: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x48d224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x48d228: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x48d228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48d22c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x48d22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48d230: 0xc123200  jal         func_48C800
    ctx->pc = 0x48D230u;
    SET_GPR_U32(ctx, 31, 0x48D238u);
    ctx->pc = 0x48C800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C800u, 0x48D230u, 0x48D238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D238u;
label_48d238:
    // 0x48d238: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48d238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d23c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x48D23Cu;
    {
        const bool branch_taken_0x48d23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d23c) {
            ctx->pc = 0x48D278u;
            goto label_48d278;
        }
    }
    ctx->pc = 0x48D244u;
label_48d244:
    // 0x48d244: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x48d244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48d248: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x48d248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48d24c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x48D24Cu;
    {
        const bool branch_taken_0x48d24c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x48d24c) {
            ctx->pc = 0x48D268u;
            goto label_48d268;
        }
    }
    ctx->pc = 0x48D254u;
    // 0x48d254: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x48D254u;
    SET_GPR_U32(ctx, 31, 0x48D25Cu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x48D254u, 0x48D25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D25Cu;
label_48d25c:
    // 0x48d25c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x48d25cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d260: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48D260u;
    {
        const bool branch_taken_0x48d260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d260) {
            ctx->pc = 0x48D26Cu;
            goto label_48d26c;
        }
    }
    ctx->pc = 0x48D268u;
label_48d268:
    // 0x48d268: 0x8fb10040  lw          $s1, 0x40($sp)
    ctx->pc = 0x48d268u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_48d26c:
    // 0x48d26c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x48d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x48d270: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x48d270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x48d274: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x48d274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_48d278:
    // 0x48d278: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x48d278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48d27c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x48d27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48d280: 0xc1231f8  jal         func_48C7E0
    ctx->pc = 0x48D280u;
    SET_GPR_U32(ctx, 31, 0x48D288u);
    ctx->pc = 0x48C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C7E0u, 0x48D280u, 0x48D288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D288u;
label_48d288:
    // 0x48d288: 0x1602ffee  bne         $s0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x48D288u;
    {
        const bool branch_taken_0x48d288 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x48d288) {
            ctx->pc = 0x48D244u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48d244;
        }
    }
    ctx->pc = 0x48D290u;
    // 0x48d290: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48d290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48d294: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48d294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48d298: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48d298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48d29c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48d29cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48d2a0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x48d2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x48d2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x48D2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48D2ACu;
    // 0x48d2ac: 0x0  nop
    ctx->pc = 0x48d2acu;
    // NOP
    ctx->pc = 0x48d2b0u;
}
