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

// Function: sub_0045A1F0
// Address: 0x45a1f0 - 0x45a2a0
void sub_0045A1F0_0x45a1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045A1F0_0x45a1f0");
#endif

    switch (ctx->pc) {
        case 0x45a220u: goto label_45a220;
        case 0x45a254u: goto label_45a254;
        case 0x45a274u: goto label_45a274;
        default: break;
    }

    ctx->pc = 0x45a1f0u;

    // 0x45a1f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x45a1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x45a1f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45a1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x45a1f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45a1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45a1fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45a1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45a200: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x45a200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x45a204: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x45a204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x45a208: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x45a208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x45a20c: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x45a20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x45a210: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x45a210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45a214: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x45a214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45a218: 0xc116b30  jal         func_45ACC0
    ctx->pc = 0x45A218u;
    SET_GPR_U32(ctx, 31, 0x45A220u);
    ctx->pc = 0x45ACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45ACC0u, 0x45A218u, 0x45A220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A220u;
label_45a220:
    // 0x45a220: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45a220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45a224: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45a224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45a228: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45A228u;
    {
        const bool branch_taken_0x45a228 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x45a228) {
            ctx->pc = 0x45A23Cu;
            goto label_45a23c;
        }
    }
    ctx->pc = 0x45A230u;
    // 0x45a230: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45a230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45a234: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x45A234u;
    {
        const bool branch_taken_0x45a234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a234) {
            ctx->pc = 0x45A280u;
            goto label_45a280;
        }
    }
    ctx->pc = 0x45A23Cu;
label_45a23c:
    // 0x45a23c: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x45a23cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45a240: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x45a240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45a244: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x45a244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45a248: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x45a248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45a24c: 0xc116864  jal         func_45A190
    ctx->pc = 0x45A24Cu;
    SET_GPR_U32(ctx, 31, 0x45A254u);
    ctx->pc = 0x45A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A190u, 0x45A24Cu, 0x45A254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A254u;
label_45a254:
    // 0x45a254: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45a254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45a258: 0xac510130  sw          $s1, 0x130($v0)
    ctx->pc = 0x45a258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 17));
    // 0x45a25c: 0x8fb10050  lw          $s1, 0x50($sp)
    ctx->pc = 0x45a25cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45a260: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x45a260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45a264: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x45a264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45a268: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x45a268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45a26c: 0xc116864  jal         func_45A190
    ctx->pc = 0x45A26Cu;
    SET_GPR_U32(ctx, 31, 0x45A274u);
    ctx->pc = 0x45A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A190u, 0x45A26Cu, 0x45A274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A274u;
label_45a274:
    // 0x45a274: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45a274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45a278: 0xac510128  sw          $s1, 0x128($v0)
    ctx->pc = 0x45a278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 17));
    // 0x45a27c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45a27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45a280:
    // 0x45a280: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45a280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45a284: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45a284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45a288: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45a288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45a28c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x45a28cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x45a290: 0x3e00008  jr          $ra
    ctx->pc = 0x45A290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45A290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45A298u;
    // 0x45a298: 0x0  nop
    ctx->pc = 0x45a298u;
    // NOP
    // 0x45a29c: 0x0  nop
    ctx->pc = 0x45a29cu;
    // NOP
    ctx->pc = 0x45a2a0u;
}
