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

// Function: sub_00148B90
// Address: 0x148b90 - 0x149230
void sub_00148B90_0x148b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148B90_0x148b90");
#endif

    switch (ctx->pc) {
        case 0x148bd0u: goto label_148bd0;
        case 0x148c04u: goto label_148c04;
        case 0x148c1cu: goto label_148c1c;
        case 0x148c2cu: goto label_148c2c;
        case 0x148c38u: goto label_148c38;
        case 0x148c48u: goto label_148c48;
        case 0x148c58u: goto label_148c58;
        case 0x148c64u: goto label_148c64;
        case 0x148c70u: goto label_148c70;
        case 0x148c9cu: goto label_148c9c;
        case 0x148cc8u: goto label_148cc8;
        case 0x148ce0u: goto label_148ce0;
        case 0x148cf0u: goto label_148cf0;
        case 0x148d04u: goto label_148d04;
        case 0x148d14u: goto label_148d14;
        case 0x148d44u: goto label_148d44;
        case 0x148d7cu: goto label_148d7c;
        case 0x148d88u: goto label_148d88;
        case 0x148d9cu: goto label_148d9c;
        case 0x148dc8u: goto label_148dc8;
        case 0x148df8u: goto label_148df8;
        case 0x148e0cu: goto label_148e0c;
        case 0x148e18u: goto label_148e18;
        case 0x148e44u: goto label_148e44;
        case 0x148e5cu: goto label_148e5c;
        case 0x148e6cu: goto label_148e6c;
        case 0x148e80u: goto label_148e80;
        case 0x148e90u: goto label_148e90;
        case 0x148f40u: goto label_148f40;
        case 0x148f58u: goto label_148f58;
        case 0x148fc4u: goto label_148fc4;
        case 0x148fd0u: goto label_148fd0;
        case 0x148fe4u: goto label_148fe4;
        case 0x149010u: goto label_149010;
        case 0x149054u: goto label_149054;
        case 0x149060u: goto label_149060;
        case 0x149074u: goto label_149074;
        case 0x1490a0u: goto label_1490a0;
        case 0x1490e0u: goto label_1490e0;
        case 0x1490f8u: goto label_1490f8;
        case 0x149130u: goto label_149130;
        case 0x149148u: goto label_149148;
        case 0x149164u: goto label_149164;
        default: break;
    }

    ctx->pc = 0x148b90u;

    // 0x148b90: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x148b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x148b94: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x148b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x148b98: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x148b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x148b9c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x148b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x148ba0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x148ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x148ba4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x148ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x148ba8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x148ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x148bac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x148bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x148bb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x148bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x148bb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x148bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x148bb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x148bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x148bbc: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x148bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x148bc0: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x148bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x148bc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x148bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148bc8: 0xc08d95c  jal         func_236570
    ctx->pc = 0x148BC8u;
    SET_GPR_U32(ctx, 31, 0x148BD0u);
    ctx->pc = 0x236570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236570u, 0x148BC8u, 0x148BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148BD0u;
label_148bd0:
    // 0x148bd0: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x148bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x148bd4: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x148bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x148bd8: 0x14600188  bnez        $v1, . + 4 + (0x188 << 2)
    ctx->pc = 0x148BD8u;
    {
        const bool branch_taken_0x148bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x148bd8) {
            ctx->pc = 0x1491FCu;
            goto label_1491fc;
        }
    }
    ctx->pc = 0x148BE0u;
    // 0x148be0: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x148be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x148be4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x148be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148be8: 0x10600184  beqz        $v1, . + 4 + (0x184 << 2)
    ctx->pc = 0x148BE8u;
    {
        const bool branch_taken_0x148be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x148be8) {
            ctx->pc = 0x1491FCu;
            goto label_1491fc;
        }
    }
    ctx->pc = 0x148BF0u;
    // 0x148bf0: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x148bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x148bf4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x148bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148bf8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x148bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x148bfc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x148BFCu;
    SET_GPR_U32(ctx, 31, 0x148C04u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x148BFCu, 0x148C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C04u;
label_148c04:
    // 0x148c04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x148c04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c08: 0x1240017c  beqz        $s2, . + 4 + (0x17C << 2)
    ctx->pc = 0x148C08u;
    {
        const bool branch_taken_0x148c08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x148c08) {
            ctx->pc = 0x1491FCu;
            goto label_1491fc;
        }
    }
    ctx->pc = 0x148C10u;
    // 0x148c10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x148c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c14: 0xc096880  jal         func_25A200
    ctx->pc = 0x148C14u;
    SET_GPR_U32(ctx, 31, 0x148C1Cu);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x148C14u, 0x148C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C1Cu;
label_148c1c:
    // 0x148c1c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x148c1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x148c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c24: 0xc090864  jal         func_242190
    ctx->pc = 0x148C24u;
    SET_GPR_U32(ctx, 31, 0x148C2Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x148C24u, 0x148C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C2Cu;
label_148c2c:
    // 0x148c2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x148c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c30: 0xc090590  jal         func_241640
    ctx->pc = 0x148C30u;
    SET_GPR_U32(ctx, 31, 0x148C38u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x148C30u, 0x148C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C38u;
label_148c38:
    // 0x148c38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x148c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c3c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x148c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x148c40: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x148C40u;
    SET_GPR_U32(ctx, 31, 0x148C48u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x148C40u, 0x148C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C48u;
label_148c48:
    // 0x148c48: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x148c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x148c4c: 0x8fa40104  lw          $a0, 0x104($sp)
    ctx->pc = 0x148c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x148c50: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x148C50u;
    SET_GPR_U32(ctx, 31, 0x148C58u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x148C50u, 0x148C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C58u;
label_148c58:
    // 0x148c58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x148c58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c5c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x148C5Cu;
    {
        const bool branch_taken_0x148c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148c5c) {
            ctx->pc = 0x148C90u;
            goto label_148c90;
        }
    }
    ctx->pc = 0x148C64u;
label_148c64:
    // 0x148c64: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x148c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x148c68: 0xc09138c  jal         func_244E30
    ctx->pc = 0x148C68u;
    SET_GPR_U32(ctx, 31, 0x148C70u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x148C68u, 0x148C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C70u;
label_148c70:
    // 0x148c70: 0x3c03309e  lui         $v1, 0x309E
    ctx->pc = 0x148c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12446 << 16));
    // 0x148c74: 0x3463286a  ori         $v1, $v1, 0x286A
    ctx->pc = 0x148c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10346);
    // 0x148c78: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x148C78u;
    {
        const bool branch_taken_0x148c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x148c78) {
            ctx->pc = 0x148C8Cu;
            goto label_148c8c;
        }
    }
    ctx->pc = 0x148C80u;
    // 0x148c80: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x148c80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x148c84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x148C84u;
    {
        const bool branch_taken_0x148c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148c84) {
            ctx->pc = 0x148CA4u;
            goto label_148ca4;
        }
    }
    ctx->pc = 0x148C8Cu;
label_148c8c:
    // 0x148c8c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x148c8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_148c90:
    // 0x148c90: 0x8fa40104  lw          $a0, 0x104($sp)
    ctx->pc = 0x148c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x148c94: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x148C94u;
    SET_GPR_U32(ctx, 31, 0x148C9Cu);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x148C94u, 0x148C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C9Cu;
label_148c9c:
    // 0x148c9c: 0x1622fff1  bne         $s1, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x148C9Cu;
    {
        const bool branch_taken_0x148c9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x148c9c) {
            ctx->pc = 0x148C64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148c64;
        }
    }
    ctx->pc = 0x148CA4u;
label_148ca4:
    // 0x148ca4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x148ca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148ca8: 0x0  nop
    ctx->pc = 0x148ca8u;
    // NOP
    // 0x148cac: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x148cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x148cb0: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x148CB0u;
    {
        const bool branch_taken_0x148cb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x148cb0) {
            ctx->pc = 0x148D2Cu;
            goto label_148d2c;
        }
    }
    ctx->pc = 0x148CB8u;
    // 0x148cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148cbc: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x148cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x148cc0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x148CC0u;
    SET_GPR_U32(ctx, 31, 0x148CC8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x148CC0u, 0x148CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148CC8u;
label_148cc8:
    // 0x148cc8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x148cc8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ccc: 0x12c00017  beqz        $s6, . + 4 + (0x17 << 2)
    ctx->pc = 0x148CCCu;
    {
        const bool branch_taken_0x148ccc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x148ccc) {
            ctx->pc = 0x148D2Cu;
            goto label_148d2c;
        }
    }
    ctx->pc = 0x148CD4u;
    // 0x148cd4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x148cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148cd8: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x148CD8u;
    SET_GPR_U32(ctx, 31, 0x148CE0u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x148CD8u, 0x148CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148CE0u;
label_148ce0:
    // 0x148ce0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x148ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ce4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x148ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x148ce8: 0xc040a90  jal         func_102A40
    ctx->pc = 0x148CE8u;
    SET_GPR_U32(ctx, 31, 0x148CF0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x148CE8u, 0x148CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148CF0u;
label_148cf0:
    // 0x148cf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x148cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148cf4: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x148cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x148cf8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x148cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148cfc: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x148CFCu;
    SET_GPR_U32(ctx, 31, 0x148D04u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x148CFCu, 0x148D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D04u;
label_148d04:
    // 0x148d04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x148d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d08: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x148d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x148d0c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x148D0Cu;
    SET_GPR_U32(ctx, 31, 0x148D14u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x148D0Cu, 0x148D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D14u;
label_148d14:
    // 0x148d14: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x148d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148d18: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x148d18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x148d1c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x148d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148d20: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x148d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148d24: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x148d24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x148d28: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x148d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_148d2c:
    // 0x148d2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x148d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148d30: 0xa3a3010f  sb          $v1, 0x10F($sp)
    ctx->pc = 0x148d30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 271), (uint8_t)GPR_U32(ctx, 3));
    // 0x148d34: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x148d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x148d38: 0x8c73003c  lw          $s3, 0x3C($v1)
    ctx->pc = 0x148d38u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x148d3c: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x148D3Cu;
    {
        const bool branch_taken_0x148d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148d3c) {
            ctx->pc = 0x14917Cu;
            goto label_14917c;
        }
    }
    ctx->pc = 0x148D44u;
label_148d44:
    // 0x148d44: 0x2e61000d  sltiu       $at, $s3, 0xD
    ctx->pc = 0x148d44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x148d48: 0x1020010a  beqz        $at, . + 4 + (0x10A << 2)
    ctx->pc = 0x148D48u;
    {
        const bool branch_taken_0x148d48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x148d48) {
            ctx->pc = 0x149174u;
            goto label_149174;
        }
    }
    ctx->pc = 0x148D50u;
    // 0x148d50: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x148d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x148d54: 0x248482c0  addiu       $a0, $a0, -0x7D40
    ctx->pc = 0x148d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935232));
    // 0x148d58: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x148d58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x148d5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x148d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x148d60: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x148d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148d64: 0x600008  jr          $v1
    ctx->pc = 0x148D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x148D6Cu: goto label_148d6c;
            case 0x148DDCu: goto label_148ddc;
            case 0x148E30u: goto label_148e30;
            case 0x148EC4u: goto label_148ec4;
            case 0x148EECu: goto label_148eec;
            case 0x148F14u: goto label_148f14;
            case 0x148F6Cu: goto label_148f6c;
            case 0x148F94u: goto label_148f94;
            case 0x149024u: goto label_149024;
            case 0x1490B4u: goto label_1490b4;
            case 0x149104u: goto label_149104;
            case 0x149174u: goto label_149174;
            case 0x149178u: goto label_149178;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148D64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x148D6Cu;
label_148d6c:
    // 0x148d6c: 0x12000102  beqz        $s0, . + 4 + (0x102 << 2)
    ctx->pc = 0x148D6Cu;
    {
        const bool branch_taken_0x148d6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x148d6c) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x148D74u;
    // 0x148d74: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x148D74u;
    SET_GPR_U32(ctx, 31, 0x148D7Cu);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x148D74u, 0x148D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D7Cu;
label_148d7c:
    // 0x148d7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x148d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d80: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x148D80u;
    SET_GPR_U32(ctx, 31, 0x148D88u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x148D80u, 0x148D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D88u;
label_148d88:
    // 0x148d88: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x148d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x148d8c: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x148d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x148d90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x148d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d94: 0xc0b4aac  jal         func_2D2AB0
    ctx->pc = 0x148D94u;
    SET_GPR_U32(ctx, 31, 0x148D9Cu);
    ctx->pc = 0x2D2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2AB0u, 0x148D94u, 0x148D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D9Cu;
label_148d9c:
    // 0x148d9c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x148d9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x148da0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x148da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148da4: 0x148300f4  bne         $a0, $v1, . + 4 + (0xF4 << 2)
    ctx->pc = 0x148DA4u;
    {
        const bool branch_taken_0x148da4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x148da4) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x148DACu;
    // 0x148dac: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x148dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x148db0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x148db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148db4: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x148db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x148db8: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x148db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x148dbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x148dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148dc0: 0xc0b5b14  jal         func_2D6C50
    ctx->pc = 0x148DC0u;
    SET_GPR_U32(ctx, 31, 0x148DC8u);
    ctx->pc = 0x2D6C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6C50u, 0x148DC0u, 0x148DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148DC8u;
label_148dc8:
    // 0x148dc8: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x148dc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x148dcc: 0x106200f7  beq         $v1, $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x148DCCu;
    {
        const bool branch_taken_0x148dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x148dcc) {
            ctx->pc = 0x1491ACu;
            goto label_1491ac;
        }
    }
    ctx->pc = 0x148DD4u;
    // 0x148dd4: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x148DD4u;
    {
        const bool branch_taken_0x148dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148dd4) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x148DDCu;
label_148ddc:
    // 0x148ddc: 0x128000e6  beqz        $s4, . + 4 + (0xE6 << 2)
    ctx->pc = 0x148DDCu;
    {
        const bool branch_taken_0x148ddc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x148ddc) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x148DE4u;
    // 0x148de4: 0x161400e4  bne         $s0, $s4, . + 4 + (0xE4 << 2)
    ctx->pc = 0x148DE4u;
    {
        const bool branch_taken_0x148de4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        if (branch_taken_0x148de4) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x148DECu;
    // 0x148dec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x148decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148df0: 0xc0968bc  jal         func_25A2F0
    ctx->pc = 0x148DF0u;
    SET_GPR_U32(ctx, 31, 0x148DF8u);
    ctx->pc = 0x25A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2F0u, 0x148DF0u, 0x148DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148DF8u;
label_148df8:
    // 0x148df8: 0x104000df  beqz        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x148DF8u;
    {
        const bool branch_taken_0x148df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148df8) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x148E00u;
    // 0x148e00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x148e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148e04: 0xc0968bc  jal         func_25A2F0
    ctx->pc = 0x148E04u;
    SET_GPR_U32(ctx, 31, 0x148E0Cu);
    ctx->pc = 0x25A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2F0u, 0x148E04u, 0x148E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148E0Cu;
label_148e0c:
    // 0x148e0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x148e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148e10: 0xc09138c  jal         func_244E30
    ctx->pc = 0x148E10u;
    SET_GPR_U32(ctx, 31, 0x148E18u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x148E10u, 0x148E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148E18u;
label_148e18:
    // 0x148e18: 0x3c03309e  lui         $v1, 0x309E
    ctx->pc = 0x148e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12446 << 16));
    // 0x148e1c: 0x3463285a  ori         $v1, $v1, 0x285A
    ctx->pc = 0x148e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10330);
    // 0x148e20: 0x104300e2  beq         $v0, $v1, . + 4 + (0xE2 << 2)
    ctx->pc = 0x148E20u;
    {
        const bool branch_taken_0x148e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x148e20) {
            ctx->pc = 0x1491ACu;
            goto label_1491ac;
        }
    }
    ctx->pc = 0x148E28u;
    // 0x148e28: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x148E28u;
    {
        const bool branch_taken_0x148e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148e28) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x148E30u;
label_148e30:
    // 0x148e30: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x148e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x148e34: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x148e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148e38: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x148e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x148e3c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x148E3Cu;
    SET_GPR_U32(ctx, 31, 0x148E44u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x148E3Cu, 0x148E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148E44u;
label_148e44:
    // 0x148e44: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x148e44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148e48: 0x12a000cb  beqz        $s5, . + 4 + (0xCB << 2)
    ctx->pc = 0x148E48u;
    {
        const bool branch_taken_0x148e48 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x148e48) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x148E50u;
    // 0x148e50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x148e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148e54: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x148E54u;
    SET_GPR_U32(ctx, 31, 0x148E5Cu);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x148E54u, 0x148E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148E5Cu;
label_148e5c:
    // 0x148e5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x148e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148e60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x148e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148e64: 0xc040a90  jal         func_102A40
    ctx->pc = 0x148E64u;
    SET_GPR_U32(ctx, 31, 0x148E6Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x148E64u, 0x148E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148E6Cu;
label_148e6c:
    // 0x148e6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x148e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148e70: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x148e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x148e74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x148e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148e78: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x148E78u;
    SET_GPR_U32(ctx, 31, 0x148E80u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x148E78u, 0x148E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148E80u;
label_148e80:
    // 0x148e80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x148e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148e84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x148e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148e88: 0xc040a90  jal         func_102A40
    ctx->pc = 0x148E88u;
    SET_GPR_U32(ctx, 31, 0x148E90u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x148E88u, 0x148E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148E90u;
label_148e90:
    // 0x148e90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x148e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148e94: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x148e94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x148e98: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x148e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148e9c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x148e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148ea0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x148ea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x148ea4: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x148ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x148ea8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x148ea8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x148eac: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x148eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148eb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x148eb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148eb4: 0x450100bd  bc1t        . + 4 + (0xBD << 2)
    ctx->pc = 0x148EB4u;
    {
        const bool branch_taken_0x148eb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x148eb4) {
            ctx->pc = 0x1491ACu;
            goto label_1491ac;
        }
    }
    ctx->pc = 0x148EBCu;
    // 0x148ebc: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x148EBCu;
    {
        const bool branch_taken_0x148ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148ebc) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x148EC4u;
label_148ec4:
    // 0x148ec4: 0x120000ac  beqz        $s0, . + 4 + (0xAC << 2)
    ctx->pc = 0x148EC4u;
    {
        const bool branch_taken_0x148ec4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x148ec4) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x148ECCu;
    // 0x148ecc: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x148eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x148ed0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x148ed0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x148ed4: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x148ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148ed8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x148ed8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148edc: 0x450100b3  bc1t        . + 4 + (0xB3 << 2)
    ctx->pc = 0x148EDCu;
    {
        const bool branch_taken_0x148edc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x148edc) {
            ctx->pc = 0x1491ACu;
            goto label_1491ac;
        }
    }
    ctx->pc = 0x148EE4u;
    // 0x148ee4: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x148EE4u;
    {
        const bool branch_taken_0x148ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148ee4) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x148EECu;
label_148eec:
    // 0x148eec: 0x120000a2  beqz        $s0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x148EECu;
    {
        const bool branch_taken_0x148eec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x148eec) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x148EF4u;
    // 0x148ef4: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x148ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x148ef8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x148ef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x148efc: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x148efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148f00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x148f00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148f04: 0x450100a9  bc1t        . + 4 + (0xA9 << 2)
    ctx->pc = 0x148F04u;
    {
        const bool branch_taken_0x148f04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x148f04) {
            ctx->pc = 0x1491ACu;
            goto label_1491ac;
        }
    }
    ctx->pc = 0x148F0Cu;
    // 0x148f0c: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x148F0Cu;
    {
        const bool branch_taken_0x148f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148f0c) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x148F14u;
label_148f14:
    // 0x148f14: 0x12000098  beqz        $s0, . + 4 + (0x98 << 2)
    ctx->pc = 0x148F14u;
    {
        const bool branch_taken_0x148f14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x148f14) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x148F1Cu;
    // 0x148f1c: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x148f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x148f20: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x148f20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x148f24: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x148f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148f28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x148f28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148f2c: 0x45000092  bc1f        . + 4 + (0x92 << 2)
    ctx->pc = 0x148F2Cu;
    {
        const bool branch_taken_0x148f2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148f2c) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x148F34u;
    // 0x148f34: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x148f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x148f38: 0xc041b40  jal         func_106D00
    ctx->pc = 0x148F38u;
    SET_GPR_U32(ctx, 31, 0x148F40u);
    ctx->pc = 0x106D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D00u, 0x148F38u, 0x148F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148F40u;
label_148f40:
    // 0x148f40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x148f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148f44: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x148f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x148f48: 0x24a52d30  addiu       $a1, $a1, 0x2D30
    ctx->pc = 0x148f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11568));
    // 0x148f4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x148f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148f50: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x148F50u;
    SET_GPR_U32(ctx, 31, 0x148F58u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x148F50u, 0x148F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148F58u;
label_148f58:
    // 0x148f58: 0x2182a  slt         $v1, $zero, $v0
    ctx->pc = 0x148f58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x148f5c: 0x14600093  bnez        $v1, . + 4 + (0x93 << 2)
    ctx->pc = 0x148F5Cu;
    {
        const bool branch_taken_0x148f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x148f5c) {
            ctx->pc = 0x1491ACu;
            goto label_1491ac;
        }
    }
    ctx->pc = 0x148F64u;
    // 0x148f64: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x148F64u;
    {
        const bool branch_taken_0x148f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148f64) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x148F6Cu;
label_148f6c:
    // 0x148f6c: 0x12000082  beqz        $s0, . + 4 + (0x82 << 2)
    ctx->pc = 0x148F6Cu;
    {
        const bool branch_taken_0x148f6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x148f6c) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x148F74u;
    // 0x148f74: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x148f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x148f78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x148f78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x148f7c: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x148f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148f80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x148f80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148f84: 0x45010089  bc1t        . + 4 + (0x89 << 2)
    ctx->pc = 0x148F84u;
    {
        const bool branch_taken_0x148f84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x148f84) {
            ctx->pc = 0x1491ACu;
            goto label_1491ac;
        }
    }
    ctx->pc = 0x148F8Cu;
    // 0x148f8c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x148F8Cu;
    {
        const bool branch_taken_0x148f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148f8c) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x148F94u;
label_148f94:
    // 0x148f94: 0x12000078  beqz        $s0, . + 4 + (0x78 << 2)
    ctx->pc = 0x148F94u;
    {
        const bool branch_taken_0x148f94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x148f94) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x148F9Cu;
    // 0x148f9c: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x148f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x148fa0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x148fa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x148fa4: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x148fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148fa8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x148fa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148fac: 0x45000072  bc1f        . + 4 + (0x72 << 2)
    ctx->pc = 0x148FACu;
    {
        const bool branch_taken_0x148fac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148fac) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x148FB4u;
    // 0x148fb4: 0x16800070  bnez        $s4, . + 4 + (0x70 << 2)
    ctx->pc = 0x148FB4u;
    {
        const bool branch_taken_0x148fb4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x148fb4) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x148FBCu;
    // 0x148fbc: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x148FBCu;
    SET_GPR_U32(ctx, 31, 0x148FC4u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x148FBCu, 0x148FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148FC4u;
label_148fc4:
    // 0x148fc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x148fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148fc8: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x148FC8u;
    SET_GPR_U32(ctx, 31, 0x148FD0u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x148FC8u, 0x148FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148FD0u;
label_148fd0:
    // 0x148fd0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x148fd0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148fd4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x148fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148fd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x148fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148fdc: 0xc0b4aac  jal         func_2D2AB0
    ctx->pc = 0x148FDCu;
    SET_GPR_U32(ctx, 31, 0x148FE4u);
    ctx->pc = 0x2D2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2AB0u, 0x148FDCu, 0x148FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148FE4u;
label_148fe4:
    // 0x148fe4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x148fe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x148fe8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x148fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148fec: 0x14830062  bne         $a0, $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x148FECu;
    {
        const bool branch_taken_0x148fec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x148fec) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x148FF4u;
    // 0x148ff4: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x148ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x148ff8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x148ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148ffc: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x148ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x149000: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x149000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149004: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x149004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149008: 0xc0b5b14  jal         func_2D6C50
    ctx->pc = 0x149008u;
    SET_GPR_U32(ctx, 31, 0x149010u);
    ctx->pc = 0x2D6C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6C50u, 0x149008u, 0x149010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149010u;
label_149010:
    // 0x149010: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x149010u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x149014: 0x10620065  beq         $v1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x149014u;
    {
        const bool branch_taken_0x149014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x149014) {
            ctx->pc = 0x1491ACu;
            goto label_1491ac;
        }
    }
    ctx->pc = 0x14901Cu;
    // 0x14901c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x14901Cu;
    {
        const bool branch_taken_0x14901c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14901c) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x149024u;
label_149024:
    // 0x149024: 0x12000054  beqz        $s0, . + 4 + (0x54 << 2)
    ctx->pc = 0x149024u;
    {
        const bool branch_taken_0x149024 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x149024) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x14902Cu;
    // 0x14902c: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x14902cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x149030: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x149030u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149034: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x149034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149038: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x149038u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14903c: 0x4500004e  bc1f        . + 4 + (0x4E << 2)
    ctx->pc = 0x14903Cu;
    {
        const bool branch_taken_0x14903c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14903c) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x149044u;
    // 0x149044: 0x1680004c  bnez        $s4, . + 4 + (0x4C << 2)
    ctx->pc = 0x149044u;
    {
        const bool branch_taken_0x149044 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x149044) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x14904Cu;
    // 0x14904c: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x14904Cu;
    SET_GPR_U32(ctx, 31, 0x149054u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x14904Cu, 0x149054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149054u;
label_149054:
    // 0x149054: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x149054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149058: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x149058u;
    SET_GPR_U32(ctx, 31, 0x149060u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x149058u, 0x149060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149060u;
label_149060:
    // 0x149060: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x149060u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149064: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x149064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149068: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x149068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14906c: 0xc0b4aac  jal         func_2D2AB0
    ctx->pc = 0x14906Cu;
    SET_GPR_U32(ctx, 31, 0x149074u);
    ctx->pc = 0x2D2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2AB0u, 0x14906Cu, 0x149074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149074u;
label_149074:
    // 0x149074: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x149074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x149078: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x149078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14907c: 0x1483004b  bne         $a0, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x14907Cu;
    {
        const bool branch_taken_0x14907c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14907c) {
            ctx->pc = 0x1491ACu;
            goto label_1491ac;
        }
    }
    ctx->pc = 0x149084u;
    // 0x149084: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x149084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x149088: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x149088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14908c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x14908cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x149090: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x149090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149094: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x149094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149098: 0xc0b5b14  jal         func_2D6C50
    ctx->pc = 0x149098u;
    SET_GPR_U32(ctx, 31, 0x1490A0u);
    ctx->pc = 0x2D6C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6C50u, 0x149098u, 0x1490A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1490A0u;
label_1490a0:
    // 0x1490a0: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x1490a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1490a4: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1490A4u;
    {
        const bool branch_taken_0x1490a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1490a4) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x1490ACu;
    // 0x1490ac: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1490ACu;
    {
        const bool branch_taken_0x1490ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1490ac) {
            ctx->pc = 0x1491ACu;
            goto label_1491ac;
        }
    }
    ctx->pc = 0x1490B4u;
label_1490b4:
    // 0x1490b4: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1490B4u;
    {
        const bool branch_taken_0x1490b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1490b4) {
            ctx->pc = 0x149104u;
            goto label_149104;
        }
    }
    ctx->pc = 0x1490BCu;
    // 0x1490bc: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x1490bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x1490c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1490c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1490c4: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x1490c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1490c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1490c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1490cc: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1490CCu;
    {
        const bool branch_taken_0x1490cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1490cc) {
            ctx->pc = 0x149104u;
            goto label_149104;
        }
    }
    ctx->pc = 0x1490D4u;
    // 0x1490d4: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1490d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x1490d8: 0xc041b40  jal         func_106D00
    ctx->pc = 0x1490D8u;
    SET_GPR_U32(ctx, 31, 0x1490E0u);
    ctx->pc = 0x106D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D00u, 0x1490D8u, 0x1490E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1490E0u;
label_1490e0:
    // 0x1490e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1490e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1490e4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1490e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1490e8: 0x24a52d40  addiu       $a1, $a1, 0x2D40
    ctx->pc = 0x1490e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11584));
    // 0x1490ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1490ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1490f0: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x1490F0u;
    SET_GPR_U32(ctx, 31, 0x1490F8u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x1490F0u, 0x1490F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1490F8u;
label_1490f8:
    // 0x1490f8: 0x2182a  slt         $v1, $zero, $v0
    ctx->pc = 0x1490f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1490fc: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1490FCu;
    {
        const bool branch_taken_0x1490fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1490fc) {
            ctx->pc = 0x1491ACu;
            goto label_1491ac;
        }
    }
    ctx->pc = 0x149104u;
label_149104:
    // 0x149104: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x149104u;
    {
        const bool branch_taken_0x149104 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x149104) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x14910Cu;
    // 0x14910c: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x14910cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x149110: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x149110u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149114: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x149114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149118: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x149118u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14911c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x14911Cu;
    {
        const bool branch_taken_0x14911c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14911c) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x149124u;
    // 0x149124: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x149124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x149128: 0xc041b40  jal         func_106D00
    ctx->pc = 0x149128u;
    SET_GPR_U32(ctx, 31, 0x149130u);
    ctx->pc = 0x106D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D00u, 0x149128u, 0x149130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149130u;
label_149130:
    // 0x149130: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x149130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149134: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x149134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x149138: 0x24a52d40  addiu       $a1, $a1, 0x2D40
    ctx->pc = 0x149138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11584));
    // 0x14913c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14913cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149140: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x149140u;
    SET_GPR_U32(ctx, 31, 0x149148u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x149140u, 0x149148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149148u;
label_149148:
    // 0x149148: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x149148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x14914c: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x14914cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x149150: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x149150u;
    {
        const bool branch_taken_0x149150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149150) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x149158u;
    // 0x149158: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x149158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14915c: 0xc096e88  jal         func_25BA20
    ctx->pc = 0x14915Cu;
    SET_GPR_U32(ctx, 31, 0x149164u);
    ctx->pc = 0x25BA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BA20u, 0x14915Cu, 0x149164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149164u;
label_149164:
    // 0x149164: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x149164u;
    {
        const bool branch_taken_0x149164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149164) {
            ctx->pc = 0x1491ACu;
            goto label_1491ac;
        }
    }
    ctx->pc = 0x14916Cu;
    // 0x14916c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14916Cu;
    {
        const bool branch_taken_0x14916c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14916c) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x149174u;
label_149174:
    // 0x149174: 0xa3a0010f  sb          $zero, 0x10F($sp)
    ctx->pc = 0x149174u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 271), (uint8_t)GPR_U32(ctx, 0));
label_149178:
    // 0x149178: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x149178u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_14917c:
    // 0x14917c: 0x93a3010f  lbu         $v1, 0x10F($sp)
    ctx->pc = 0x14917cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 271)));
    // 0x149180: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x149180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x149184: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x149184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149188: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x149188u;
    {
        const bool branch_taken_0x149188 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x149188) {
            ctx->pc = 0x1491A4u;
            goto label_1491a4;
        }
    }
    ctx->pc = 0x149190u;
    // 0x149190: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x149190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x149194: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x149194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x149198: 0x263082a  slt         $at, $s3, $v1
    ctx->pc = 0x149198u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14919c: 0x1020fee9  beqz        $at, . + 4 + (-0x117 << 2)
    ctx->pc = 0x14919Cu;
    {
        const bool branch_taken_0x14919c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14919c) {
            ctx->pc = 0x148D44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148d44;
        }
    }
    ctx->pc = 0x1491A4u;
label_1491a4:
    // 0x1491a4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1491A4u;
    {
        const bool branch_taken_0x1491a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1491a4) {
            ctx->pc = 0x1491FCu;
            goto label_1491fc;
        }
    }
    ctx->pc = 0x1491ACu;
label_1491ac:
    // 0x1491ac: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1491acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1491b0: 0xac730034  sw          $s3, 0x34($v1)
    ctx->pc = 0x1491b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 19));
    // 0x1491b4: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1491b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1491b8: 0xa0600048  sb          $zero, 0x48($v1)
    ctx->pc = 0x1491b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1491bc: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1491bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1491c0: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x1491c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1491c4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1491c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1491c8: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1491c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1491cc: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x1491ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
    // 0x1491d0: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1491d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1491d4: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x1491d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1491d8: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1491d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1491dc: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x1491dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1491e0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1491e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1491e4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1491E4u;
    {
        const bool branch_taken_0x1491e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1491e4) {
            ctx->pc = 0x1491FCu;
            goto label_1491fc;
        }
    }
    ctx->pc = 0x1491ECu;
    // 0x1491ec: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1491ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1491f0: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x1491f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1491f4: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1491f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1491f8: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x1491f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
label_1491fc:
    // 0x1491fc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1491fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x149200: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x149200u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x149204: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x149204u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x149208: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x149208u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14920c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14920cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x149210: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x149210u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x149214: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x149214u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149218: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x149218u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14921c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14921cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149220: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x149220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149224: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x149224u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x149228: 0x3e00008  jr          $ra
    ctx->pc = 0x149228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149230u;
}
