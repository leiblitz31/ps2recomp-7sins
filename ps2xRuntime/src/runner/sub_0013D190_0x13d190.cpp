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

// Function: sub_0013D190
// Address: 0x13d190 - 0x13d340
void sub_0013D190_0x13d190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D190_0x13d190");
#endif

    switch (ctx->pc) {
        case 0x13d1ccu: goto label_13d1cc;
        case 0x13d1f0u: goto label_13d1f0;
        case 0x13d21cu: goto label_13d21c;
        case 0x13d234u: goto label_13d234;
        case 0x13d240u: goto label_13d240;
        case 0x13d254u: goto label_13d254;
        case 0x13d260u: goto label_13d260;
        case 0x13d274u: goto label_13d274;
        case 0x13d290u: goto label_13d290;
        case 0x13d2a4u: goto label_13d2a4;
        case 0x13d2bcu: goto label_13d2bc;
        case 0x13d2d4u: goto label_13d2d4;
        case 0x13d304u: goto label_13d304;
        case 0x13d314u: goto label_13d314;
        default: break;
    }

    ctx->pc = 0x13d190u;

    // 0x13d190: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x13d190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x13d194: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x13d194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x13d198: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13d198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x13d19c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13d19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13d1a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13d1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13d1a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13d1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13d1a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13d1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13d1ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13d1b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13d1b4: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x13d1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x13d1b8: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x13d1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x13d1bc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x13d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13d1c0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x13d1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13d1c4: 0xc04e50c  jal         func_139430
    ctx->pc = 0x13D1C4u;
    SET_GPR_U32(ctx, 31, 0x13D1CCu);
    ctx->pc = 0x139430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139430u, 0x13D1C4u, 0x13D1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D1CCu;
label_13d1cc:
    // 0x13d1cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13d1ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d1d0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x13d1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13d1d4: 0x263082b  sltu        $at, $s3, $v1
    ctx->pc = 0x13d1d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13d1d8: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
    ctx->pc = 0x13D1D8u;
    {
        const bool branch_taken_0x13d1d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d1d8) {
            ctx->pc = 0x13D314u;
            goto label_13d314;
        }
    }
    ctx->pc = 0x13D1E0u;
    // 0x13d1e0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x13d1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13d1e4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x13d1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13d1e8: 0xc04efd8  jal         func_13BF60
    ctx->pc = 0x13D1E8u;
    SET_GPR_U32(ctx, 31, 0x13D1F0u);
    ctx->pc = 0x13BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BF60u, 0x13D1E8u, 0x13D1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D1F0u;
label_13d1f0:
    // 0x13d1f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13d1f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d1f4: 0x272082b  sltu        $at, $s3, $s2
    ctx->pc = 0x13d1f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x13d1f8: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
    ctx->pc = 0x13D1F8u;
    {
        const bool branch_taken_0x13d1f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d1f8) {
            ctx->pc = 0x13D314u;
            goto label_13d314;
        }
    }
    ctx->pc = 0x13D200u;
    // 0x13d200: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x13d200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x13d204: 0x27b5009c  addiu       $s5, $sp, 0x9C
    ctx->pc = 0x13d204u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x13d208: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x13d208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13d20c: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x13d20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x13d210: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x13d210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13d214: 0xc04f590  jal         func_13D640
    ctx->pc = 0x13D214u;
    SET_GPR_U32(ctx, 31, 0x13D21Cu);
    ctx->pc = 0x13D640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D640u, 0x13D214u, 0x13D21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D21Cu;
label_13d21c:
    // 0x13d21c: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x13d21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x13d220: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13d220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d224: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x13d224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d228: 0x27a70098  addiu       $a3, $sp, 0x98
    ctx->pc = 0x13d228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x13d22c: 0xc04f550  jal         func_13D540
    ctx->pc = 0x13D22Cu;
    SET_GPR_U32(ctx, 31, 0x13D234u);
    ctx->pc = 0x13D540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D540u, 0x13D22Cu, 0x13D234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D234u;
label_13d234:
    // 0x13d234: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13d234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d238: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x13D238u;
    {
        const bool branch_taken_0x13d238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d238) {
            ctx->pc = 0x13D2E4u;
            goto label_13d2e4;
        }
    }
    ctx->pc = 0x13D240u;
label_13d240:
    // 0x13d240: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x13d240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13d244: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x13d244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13d248: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13d248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d24c: 0xc04e51c  jal         func_139470
    ctx->pc = 0x13D24Cu;
    SET_GPR_U32(ctx, 31, 0x13D254u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x13D24Cu, 0x13D254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D254u;
label_13d254:
    // 0x13d254: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x13d254u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d258: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x13D258u;
    {
        const bool branch_taken_0x13d258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d258) {
            ctx->pc = 0x13D2D8u;
            goto label_13d2d8;
        }
    }
    ctx->pc = 0x13D260u;
label_13d260:
    // 0x13d260: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x13d260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13d264: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x13d264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x13d268: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x13d268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d26c: 0xc04f53c  jal         func_13D4F0
    ctx->pc = 0x13D26Cu;
    SET_GPR_U32(ctx, 31, 0x13D274u);
    ctx->pc = 0x13D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D4F0u, 0x13D26Cu, 0x13D274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D274u;
label_13d274:
    // 0x13d274: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x13d274u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d278: 0x8e160000  lw          $s6, 0x0($s0)
    ctx->pc = 0x13d278u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13d27c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x13d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13d280: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x13d280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13d284: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13d284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d288: 0xc04e51c  jal         func_139470
    ctx->pc = 0x13D288u;
    SET_GPR_U32(ctx, 31, 0x13D290u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x13D288u, 0x13D290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D290u;
label_13d290:
    // 0x13d290: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x13d290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x13d294: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x13d294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x13d298: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13d298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d29c: 0xc04e51c  jal         func_139470
    ctx->pc = 0x13D29Cu;
    SET_GPR_U32(ctx, 31, 0x13D2A4u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x13D29Cu, 0x13D2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D2A4u;
label_13d2a4:
    // 0x13d2a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d2a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x13d2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x13d2ac: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x13d2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x13d2b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13d2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d2b4: 0xc04e51c  jal         func_139470
    ctx->pc = 0x13D2B4u;
    SET_GPR_U32(ctx, 31, 0x13D2BCu);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x13D2B4u, 0x13D2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D2BCu;
label_13d2bc:
    // 0x13d2bc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x13d2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x13d2c0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x13d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13d2c4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x13d2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13d2c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13d2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d2cc: 0xc04e51c  jal         func_139470
    ctx->pc = 0x13D2CCu;
    SET_GPR_U32(ctx, 31, 0x13D2D4u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x13D2CCu, 0x13D2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D2D4u;
label_13d2d4:
    // 0x13d2d4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x13d2d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13d2d8:
    // 0x13d2d8: 0x1600ffe1  bnez        $s0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x13D2D8u;
    {
        const bool branch_taken_0x13d2d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d2d8) {
            ctx->pc = 0x13D260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d260;
        }
    }
    ctx->pc = 0x13D2E0u;
    // 0x13d2e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13d2e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_13d2e4:
    // 0x13d2e4: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x13d2e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x13d2e8: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x13D2E8u;
    {
        const bool branch_taken_0x13d2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d2e8) {
            ctx->pc = 0x13D240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d240;
        }
    }
    ctx->pc = 0x13D2F0u;
    // 0x13d2f0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x13d2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13d2f4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x13d2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13d2f8: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x13d2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x13d2fc: 0xc04f4d0  jal         func_13D340
    ctx->pc = 0x13D2FCu;
    SET_GPR_U32(ctx, 31, 0x13D304u);
    ctx->pc = 0x13D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D340u, 0x13D2FCu, 0x13D304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D304u;
label_13d304:
    // 0x13d304: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x13d304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x13d308: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13d308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13d30c: 0xc04dfd4  jal         func_137F50
    ctx->pc = 0x13D30Cu;
    SET_GPR_U32(ctx, 31, 0x13D314u);
    ctx->pc = 0x137F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F50u, 0x13D30Cu, 0x13D314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D314u;
label_13d314:
    // 0x13d314: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x13d314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13d318: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13d318u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13d31c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13d31cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13d320: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13d320u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d324: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13d324u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d328: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13d328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d32c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d32cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d330: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d334: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x13d334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x13d338: 0x3e00008  jr          $ra
    ctx->pc = 0x13D338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D340u;
}
