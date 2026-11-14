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

// Function: sub_001CC7A0
// Address: 0x1cc7a0 - 0x1cc880
void sub_001CC7A0_0x1cc7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC7A0_0x1cc7a0");
#endif

    switch (ctx->pc) {
        case 0x1cc7c4u: goto label_1cc7c4;
        case 0x1cc7d0u: goto label_1cc7d0;
        case 0x1cc7dcu: goto label_1cc7dc;
        case 0x1cc7f4u: goto label_1cc7f4;
        case 0x1cc808u: goto label_1cc808;
        case 0x1cc814u: goto label_1cc814;
        case 0x1cc82cu: goto label_1cc82c;
        case 0x1cc844u: goto label_1cc844;
        case 0x1cc858u: goto label_1cc858;
        default: break;
    }

    ctx->pc = 0x1cc7a0u;

    // 0x1cc7a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cc7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cc7a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cc7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cc7a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cc7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cc7ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cc7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cc7b0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1cc7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1cc7b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1cc7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc7b8: 0x8c4400dc  lw          $a0, 0xDC($v0)
    ctx->pc = 0x1cc7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x1cc7bc: 0xc0739b0  jal         func_1CE6C0
    ctx->pc = 0x1CC7BCu;
    SET_GPR_U32(ctx, 31, 0x1CC7C4u);
    ctx->pc = 0x1CE6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE6C0u, 0x1CC7BCu, 0x1CC7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC7C4u;
label_1cc7c4:
    // 0x1cc7c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cc7c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc7c8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1CC7C8u;
    {
        const bool branch_taken_0x1cc7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc7c8) {
            ctx->pc = 0x1CC848u;
            goto label_1cc848;
        }
    }
    ctx->pc = 0x1CC7D0u;
label_1cc7d0:
    // 0x1cc7d0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1cc7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc7d4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1CC7D4u;
    SET_GPR_U32(ctx, 31, 0x1CC7DCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CC7D4u, 0x1CC7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC7DCu;
label_1cc7dc:
    // 0x1cc7dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cc7dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc7e0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1cc7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc7e4: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x1cc7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1cc7e8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1cc7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1cc7ec: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1CC7ECu;
    SET_GPR_U32(ctx, 31, 0x1CC7F4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CC7ECu, 0x1CC7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC7F4u;
label_1cc7f4:
    // 0x1cc7f4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cc7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cc7f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc7fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cc7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc800: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1CC800u;
    SET_GPR_U32(ctx, 31, 0x1CC808u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1CC800u, 0x1CC808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC808u;
label_1cc808:
    // 0x1cc808: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1cc808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc80c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1CC80Cu;
    SET_GPR_U32(ctx, 31, 0x1CC814u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CC80Cu, 0x1CC814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC814u;
label_1cc814:
    // 0x1cc814: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cc814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc818: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1cc818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc81c: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x1cc81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1cc820: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1cc820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1cc824: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1CC824u;
    SET_GPR_U32(ctx, 31, 0x1CC82Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CC824u, 0x1CC82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC82Cu;
label_1cc82c:
    // 0x1cc82c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cc82cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cc830: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cc830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1cc834: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cc834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cc838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc83c: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1CC83Cu;
    SET_GPR_U32(ctx, 31, 0x1CC844u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1CC83Cu, 0x1CC844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC844u;
label_1cc844:
    // 0x1cc844: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cc844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cc848:
    // 0x1cc848: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1cc848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc84c: 0x8c4400dc  lw          $a0, 0xDC($v0)
    ctx->pc = 0x1cc84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x1cc850: 0xc0739b8  jal         func_1CE6E0
    ctx->pc = 0x1CC850u;
    SET_GPR_U32(ctx, 31, 0x1CC858u);
    ctx->pc = 0x1CE6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE6E0u, 0x1CC850u, 0x1CC858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC858u;
label_1cc858:
    // 0x1cc858: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cc858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cc85c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1cc85cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1cc860: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1CC860u;
    {
        const bool branch_taken_0x1cc860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc860) {
            ctx->pc = 0x1CC7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc7d0;
        }
    }
    ctx->pc = 0x1CC868u;
    // 0x1cc868: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cc868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc86c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cc86cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc870: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cc870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc874: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1cc874u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cc878: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC880u;
}
