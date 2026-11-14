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

// Function: sub_001DB1A0
// Address: 0x1db1a0 - 0x1db2c0
void sub_001DB1A0_0x1db1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB1A0_0x1db1a0");
#endif

    switch (ctx->pc) {
        case 0x1db1c4u: goto label_1db1c4;
        case 0x1db1d8u: goto label_1db1d8;
        case 0x1db1e8u: goto label_1db1e8;
        case 0x1db1f8u: goto label_1db1f8;
        case 0x1db210u: goto label_1db210;
        case 0x1db220u: goto label_1db220;
        case 0x1db234u: goto label_1db234;
        case 0x1db24cu: goto label_1db24c;
        case 0x1db25cu: goto label_1db25c;
        case 0x1db274u: goto label_1db274;
        case 0x1db284u: goto label_1db284;
        case 0x1db298u: goto label_1db298;
        default: break;
    }

    ctx->pc = 0x1db1a0u;

    // 0x1db1a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1db1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1db1a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1db1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1db1a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1db1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1db1ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1db1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1db1b0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1db1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1db1b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1db1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db1b8: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1db1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1db1bc: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DB1BCu;
    SET_GPR_U32(ctx, 31, 0x1DB1C4u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DB1BCu, 0x1DB1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB1C4u;
label_1db1c4:
    // 0x1db1c4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1db1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db1c8: 0x8c650104  lw          $a1, 0x104($v1)
    ctx->pc = 0x1db1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1db1cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1db1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1d0: 0xc08c258  jal         func_230960
    ctx->pc = 0x1DB1D0u;
    SET_GPR_U32(ctx, 31, 0x1DB1D8u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x1DB1D0u, 0x1DB1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB1D8u;
label_1db1d8:
    // 0x1db1d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1db1d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1db1dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1e0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1DB1E0u;
    {
        const bool branch_taken_0x1db1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db1e0) {
            ctx->pc = 0x1DB224u;
            goto label_1db224;
        }
    }
    ctx->pc = 0x1DB1E8u;
label_1db1e8:
    // 0x1db1e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1db1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db1ec: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1db1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1db1f0: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DB1F0u;
    SET_GPR_U32(ctx, 31, 0x1DB1F8u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DB1F0u, 0x1DB1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB1F8u;
label_1db1f8:
    // 0x1db1f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1db1f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1db1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db200: 0x244400cc  addiu       $a0, $v0, 0xCC
    ctx->pc = 0x1db200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
    // 0x1db204: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1db204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db208: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DB208u;
    SET_GPR_U32(ctx, 31, 0x1DB210u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DB208u, 0x1DB210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB210u;
label_1db210:
    // 0x1db210: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1db210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db218: 0xc08c258  jal         func_230960
    ctx->pc = 0x1DB218u;
    SET_GPR_U32(ctx, 31, 0x1DB220u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x1DB218u, 0x1DB220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB220u;
label_1db220:
    // 0x1db220: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1db220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1db224:
    // 0x1db224: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1db224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db228: 0x244400cc  addiu       $a0, $v0, 0xCC
    ctx->pc = 0x1db228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
    // 0x1db22c: 0xc05611c  jal         func_158470
    ctx->pc = 0x1DB22Cu;
    SET_GPR_U32(ctx, 31, 0x1DB234u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1DB22Cu, 0x1DB234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB234u;
label_1db234:
    // 0x1db234: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1db234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1db238: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1DB238u;
    {
        const bool branch_taken_0x1db238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db238) {
            ctx->pc = 0x1DB1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db1e8;
        }
    }
    ctx->pc = 0x1DB240u;
    // 0x1db240: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1db240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db244: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1DB244u;
    {
        const bool branch_taken_0x1db244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db244) {
            ctx->pc = 0x1DB288u;
            goto label_1db288;
        }
    }
    ctx->pc = 0x1DB24Cu;
label_1db24c:
    // 0x1db24c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1db24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db250: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1db250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1db254: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DB254u;
    SET_GPR_U32(ctx, 31, 0x1DB25Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DB254u, 0x1DB25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB25Cu;
label_1db25c:
    // 0x1db25c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1db25cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db260: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1db260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db264: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x1db264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1db268: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1db268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db26c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DB26Cu;
    SET_GPR_U32(ctx, 31, 0x1DB274u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DB26Cu, 0x1DB274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB274u;
label_1db274:
    // 0x1db274: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1db274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db27c: 0xc08c258  jal         func_230960
    ctx->pc = 0x1DB27Cu;
    SET_GPR_U32(ctx, 31, 0x1DB284u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x1DB27Cu, 0x1DB284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB284u;
label_1db284:
    // 0x1db284: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1db284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1db288:
    // 0x1db288: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1db288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db28c: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x1db28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1db290: 0xc05611c  jal         func_158470
    ctx->pc = 0x1DB290u;
    SET_GPR_U32(ctx, 31, 0x1DB298u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1DB290u, 0x1DB298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB298u;
label_1db298:
    // 0x1db298: 0x202182b  sltu        $v1, $s0, $v0
    ctx->pc = 0x1db298u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1db29c: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1DB29Cu;
    {
        const bool branch_taken_0x1db29c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db29c) {
            ctx->pc = 0x1DB24Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db24c;
        }
    }
    ctx->pc = 0x1DB2A4u;
    // 0x1db2a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1db2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db2a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1db2a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db2ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1db2acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db2b0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1db2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1db2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB2BCu;
    // 0x1db2bc: 0x0  nop
    ctx->pc = 0x1db2bcu;
    // NOP
    ctx->pc = 0x1db2c0u;
}
