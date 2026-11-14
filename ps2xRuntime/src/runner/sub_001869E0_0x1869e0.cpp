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

// Function: sub_001869E0
// Address: 0x1869e0 - 0x186fc0
void sub_001869E0_0x1869e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001869E0_0x1869e0");
#endif

    switch (ctx->pc) {
        case 0x186a20u: goto label_186a20;
        case 0x186a34u: goto label_186a34;
        case 0x186a40u: goto label_186a40;
        case 0x186a4cu: goto label_186a4c;
        case 0x186a5cu: goto label_186a5c;
        case 0x186a6cu: goto label_186a6c;
        case 0x186a90u: goto label_186a90;
        case 0x186aa0u: goto label_186aa0;
        case 0x186ac8u: goto label_186ac8;
        case 0x186ad8u: goto label_186ad8;
        case 0x186b00u: goto label_186b00;
        case 0x186b14u: goto label_186b14;
        case 0x186b28u: goto label_186b28;
        case 0x186b34u: goto label_186b34;
        case 0x186b50u: goto label_186b50;
        case 0x186b64u: goto label_186b64;
        case 0x186cb0u: goto label_186cb0;
        case 0x186cc4u: goto label_186cc4;
        case 0x186cd8u: goto label_186cd8;
        case 0x186ce8u: goto label_186ce8;
        case 0x186d14u: goto label_186d14;
        case 0x186d28u: goto label_186d28;
        case 0x186d3cu: goto label_186d3c;
        case 0x186d54u: goto label_186d54;
        case 0x186d68u: goto label_186d68;
        case 0x186dacu: goto label_186dac;
        case 0x186dc0u: goto label_186dc0;
        case 0x186dd4u: goto label_186dd4;
        case 0x186de4u: goto label_186de4;
        case 0x186e10u: goto label_186e10;
        case 0x186e20u: goto label_186e20;
        case 0x186e28u: goto label_186e28;
        case 0x186e40u: goto label_186e40;
        case 0x186f4cu: goto label_186f4c;
        case 0x186f6cu: goto label_186f6c;
        case 0x186f88u: goto label_186f88;
        default: break;
    }

    ctx->pc = 0x1869e0u;

    // 0x1869e0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1869e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1869e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1869e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1869e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1869e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1869ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1869ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1869f0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1869f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1869f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1869f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1869f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1869f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1869fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1869fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x186a00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x186a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x186a04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x186a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x186a08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186a0c: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x186a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x186a10: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x186a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x186a14: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x186a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x186a18: 0xc0514a8  jal         func_1452A0
    ctx->pc = 0x186A18u;
    SET_GPR_U32(ctx, 31, 0x186A20u);
    ctx->pc = 0x1452A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452A0u, 0x186A18u, 0x186A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186A20u;
label_186a20:
    // 0x186a20: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x186a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x186a24: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x186a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x186a28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x186a28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186a2c: 0xc061bf0  jal         func_186FC0
    ctx->pc = 0x186A2Cu;
    SET_GPR_U32(ctx, 31, 0x186A34u);
    ctx->pc = 0x186FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186FC0u, 0x186A2Cu, 0x186A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186A34u;
label_186a34:
    // 0x186a34: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x186a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x186a38: 0xc043000  jal         func_10C000
    ctx->pc = 0x186A38u;
    SET_GPR_U32(ctx, 31, 0x186A40u);
    ctx->pc = 0x10C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C000u, 0x186A38u, 0x186A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186A40u;
label_186a40:
    // 0x186a40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x186a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186a44: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x186A44u;
    {
        const bool branch_taken_0x186a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186a44) {
            ctx->pc = 0x186F60u;
            goto label_186f60;
        }
    }
    ctx->pc = 0x186A4Cu;
label_186a4c:
    // 0x186a4c: 0xafb000cc  sw          $s0, 0xCC($sp)
    ctx->pc = 0x186a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 16));
    // 0x186a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186a54: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x186A54u;
    SET_GPR_U32(ctx, 31, 0x186A5Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x186A54u, 0x186A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186A5Cu;
label_186a5c:
    // 0x186a5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x186a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186a60: 0x27859140  addiu       $a1, $gp, -0x6EC0
    ctx->pc = 0x186a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938944));
    // 0x186a64: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x186A64u;
    SET_GPR_U32(ctx, 31, 0x186A6Cu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x186A64u, 0x186A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186A6Cu;
label_186a6c:
    // 0x186a6c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x186A6Cu;
    {
        const bool branch_taken_0x186a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186a6c) {
            ctx->pc = 0x186A84u;
            goto label_186a84;
        }
    }
    ctx->pc = 0x186A74u;
    // 0x186a74: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x186a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x186a78: 0xac4000d0  sw          $zero, 0xD0($v0)
    ctx->pc = 0x186a78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 0));
    // 0x186a7c: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x186A7Cu;
    {
        const bool branch_taken_0x186a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186a7c) {
            ctx->pc = 0x186F5Cu;
            goto label_186f5c;
        }
    }
    ctx->pc = 0x186A84u;
label_186a84:
    // 0x186a84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186a88: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x186A88u;
    SET_GPR_U32(ctx, 31, 0x186A90u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x186A88u, 0x186A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186A90u;
label_186a90:
    // 0x186a90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x186a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186a94: 0x27859148  addiu       $a1, $gp, -0x6EB8
    ctx->pc = 0x186a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938952));
    // 0x186a98: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x186A98u;
    SET_GPR_U32(ctx, 31, 0x186AA0u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x186A98u, 0x186AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186AA0u;
label_186aa0:
    // 0x186aa0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x186AA0u;
    {
        const bool branch_taken_0x186aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186aa0) {
            ctx->pc = 0x186ABCu;
            goto label_186abc;
        }
    }
    ctx->pc = 0x186AA8u;
    // 0x186aa8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x186aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x186aac: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x186aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x186ab0: 0xac4300d0  sw          $v1, 0xD0($v0)
    ctx->pc = 0x186ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 3));
    // 0x186ab4: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x186AB4u;
    {
        const bool branch_taken_0x186ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186ab4) {
            ctx->pc = 0x186F5Cu;
            goto label_186f5c;
        }
    }
    ctx->pc = 0x186ABCu;
label_186abc:
    // 0x186abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ac0: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x186AC0u;
    SET_GPR_U32(ctx, 31, 0x186AC8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x186AC0u, 0x186AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186AC8u;
label_186ac8:
    // 0x186ac8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x186ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186acc: 0x27859150  addiu       $a1, $gp, -0x6EB0
    ctx->pc = 0x186accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938960));
    // 0x186ad0: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x186AD0u;
    SET_GPR_U32(ctx, 31, 0x186AD8u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x186AD0u, 0x186AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186AD8u;
label_186ad8:
    // 0x186ad8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x186AD8u;
    {
        const bool branch_taken_0x186ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186ad8) {
            ctx->pc = 0x186AF4u;
            goto label_186af4;
        }
    }
    ctx->pc = 0x186AE0u;
    // 0x186ae0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x186ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186ae4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x186ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x186ae8: 0xac4300d0  sw          $v1, 0xD0($v0)
    ctx->pc = 0x186ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 3));
    // 0x186aec: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x186AECu;
    {
        const bool branch_taken_0x186aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186aec) {
            ctx->pc = 0x186F5Cu;
            goto label_186f5c;
        }
    }
    ctx->pc = 0x186AF4u;
label_186af4:
    // 0x186af4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186af8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x186AF8u;
    SET_GPR_U32(ctx, 31, 0x186B00u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x186AF8u, 0x186B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186B00u;
label_186b00:
    // 0x186b00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x186b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186b04: 0x27859158  addiu       $a1, $gp, -0x6EA8
    ctx->pc = 0x186b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938968));
    // 0x186b08: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x186b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x186b0c: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x186B0Cu;
    SET_GPR_U32(ctx, 31, 0x186B14u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x186B0Cu, 0x186B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186B14u;
label_186b14:
    // 0x186b14: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x186B14u;
    {
        const bool branch_taken_0x186b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186b14) {
            ctx->pc = 0x186CA4u;
            goto label_186ca4;
        }
    }
    ctx->pc = 0x186B1Cu;
    // 0x186b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186b20: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x186B20u;
    SET_GPR_U32(ctx, 31, 0x186B28u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x186B20u, 0x186B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186B28u;
label_186b28:
    // 0x186b28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x186b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186b2c: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x186B2Cu;
    SET_GPR_U32(ctx, 31, 0x186B34u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x186B2Cu, 0x186B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186B34u;
label_186b34:
    // 0x186b34: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x186b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x186b38: 0x14430108  bne         $v0, $v1, . + 4 + (0x108 << 2)
    ctx->pc = 0x186B38u;
    {
        const bool branch_taken_0x186b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x186b38) {
            ctx->pc = 0x186F5Cu;
            goto label_186f5c;
        }
    }
    ctx->pc = 0x186B40u;
    // 0x186b40: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x186b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x186b44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186b48: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x186B48u;
    SET_GPR_U32(ctx, 31, 0x186B50u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x186B48u, 0x186B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186B50u;
label_186b50:
    // 0x186b50: 0x24440006  addiu       $a0, $v0, 0x6
    ctx->pc = 0x186b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x186b54: 0x27859160  addiu       $a1, $gp, -0x6EA0
    ctx->pc = 0x186b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938976));
    // 0x186b58: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x186b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x186b5c: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x186B5Cu;
    SET_GPR_U32(ctx, 31, 0x186B64u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x186B5Cu, 0x186B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186B64u;
label_186b64:
    // 0x186b64: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x186b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x186b68: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x186b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x186b6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x186b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x186b70: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x186B70u;
    {
        const bool branch_taken_0x186b70 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x186b70) {
            ctx->pc = 0x186B8Cu;
            goto label_186b8c;
        }
    }
    ctx->pc = 0x186B78u;
    // 0x186b78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186b7c: 0x0  nop
    ctx->pc = 0x186b7cu;
    // NOP
    // 0x186b80: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x186b80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x186b84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x186B84u;
    {
        const bool branch_taken_0x186b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186b84) {
            ctx->pc = 0x186BA8u;
            goto label_186ba8;
        }
    }
    ctx->pc = 0x186B8Cu;
label_186b8c:
    // 0x186b8c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x186b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x186b90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x186b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x186b94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x186b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x186b98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186b98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186b9c: 0x0  nop
    ctx->pc = 0x186b9cu;
    // NOP
    // 0x186ba0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x186ba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x186ba4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x186ba4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_186ba8:
    // 0x186ba8: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x186ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x186bac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186bb0: 0x0  nop
    ctx->pc = 0x186bb0u;
    // NOP
    // 0x186bb4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x186bb4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x186bb8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x186bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x186bbc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x186bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x186bc0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x186bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x186bc4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x186bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x186bc8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x186BC8u;
    {
        const bool branch_taken_0x186bc8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x186bc8) {
            ctx->pc = 0x186BE4u;
            goto label_186be4;
        }
    }
    ctx->pc = 0x186BD0u;
    // 0x186bd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186bd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186bd4: 0x0  nop
    ctx->pc = 0x186bd4u;
    // NOP
    // 0x186bd8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x186bd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x186bdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x186BDCu;
    {
        const bool branch_taken_0x186bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186bdc) {
            ctx->pc = 0x186C00u;
            goto label_186c00;
        }
    }
    ctx->pc = 0x186BE4u;
label_186be4:
    // 0x186be4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x186be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x186be8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x186be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x186bec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x186becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x186bf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186bf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186bf4: 0x0  nop
    ctx->pc = 0x186bf4u;
    // NOP
    // 0x186bf8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x186bf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x186bfc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x186bfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_186c00:
    // 0x186c00: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x186c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x186c04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186c08: 0x0  nop
    ctx->pc = 0x186c08u;
    // NOP
    // 0x186c0c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x186c0cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x186c10: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x186c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x186c14: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x186c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x186c18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x186c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x186c1c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x186C1Cu;
    {
        const bool branch_taken_0x186c1c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x186c1c) {
            ctx->pc = 0x186C38u;
            goto label_186c38;
        }
    }
    ctx->pc = 0x186C24u;
    // 0x186c24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186c28: 0x0  nop
    ctx->pc = 0x186c28u;
    // NOP
    // 0x186c2c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x186c2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x186c30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x186C30u;
    {
        const bool branch_taken_0x186c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186c30) {
            ctx->pc = 0x186C54u;
            goto label_186c54;
        }
    }
    ctx->pc = 0x186C38u;
label_186c38:
    // 0x186c38: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x186c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x186c3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x186c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x186c40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x186c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x186c44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186c44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186c48: 0x0  nop
    ctx->pc = 0x186c48u;
    // NOP
    // 0x186c4c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x186c4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x186c50: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x186c50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_186c54:
    // 0x186c54: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x186c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x186c58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186c5c: 0x0  nop
    ctx->pc = 0x186c5cu;
    // NOP
    // 0x186c60: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x186c60u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x186c64: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x186c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x186c68: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x186c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186c6c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x186c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x186c70: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x186c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
    // 0x186c74: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x186c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186c78: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x186c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x186c7c: 0xe44000c4  swc1        $f0, 0xC4($v0)
    ctx->pc = 0x186c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 196), bits); }
    // 0x186c80: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x186c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186c84: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x186c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x186c88: 0xe44000c8  swc1        $f0, 0xC8($v0)
    ctx->pc = 0x186c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 200), bits); }
    // 0x186c8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x186c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x186c90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186c94: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x186c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x186c98: 0xe44000cc  swc1        $f0, 0xCC($v0)
    ctx->pc = 0x186c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 204), bits); }
    // 0x186c9c: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x186C9Cu;
    {
        const bool branch_taken_0x186c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186c9c) {
            ctx->pc = 0x186F5Cu;
            goto label_186f5c;
        }
    }
    ctx->pc = 0x186CA4u;
label_186ca4:
    // 0x186ca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ca8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x186CA8u;
    SET_GPR_U32(ctx, 31, 0x186CB0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x186CA8u, 0x186CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186CB0u;
label_186cb0:
    // 0x186cb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x186cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186cb4: 0x27859168  addiu       $a1, $gp, -0x6E98
    ctx->pc = 0x186cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938984));
    // 0x186cb8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x186cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x186cbc: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x186CBCu;
    SET_GPR_U32(ctx, 31, 0x186CC4u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x186CBCu, 0x186CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186CC4u;
label_186cc4:
    // 0x186cc4: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x186CC4u;
    {
        const bool branch_taken_0x186cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186cc4) {
            ctx->pc = 0x186D1Cu;
            goto label_186d1c;
        }
    }
    ctx->pc = 0x186CCCu;
    // 0x186ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186cd0: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x186CD0u;
    SET_GPR_U32(ctx, 31, 0x186CD8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x186CD0u, 0x186CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186CD8u;
label_186cd8:
    // 0x186cd8: 0x24560005  addiu       $s6, $v0, 0x5
    ctx->pc = 0x186cd8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x186cdc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x186cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ce0: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x186CE0u;
    SET_GPR_U32(ctx, 31, 0x186CE8u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x186CE0u, 0x186CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186CE8u;
label_186ce8:
    // 0x186ce8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x186ce8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186cec: 0x12a0009b  beqz        $s5, . + 4 + (0x9B << 2)
    ctx->pc = 0x186CECu;
    {
        const bool branch_taken_0x186cec = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x186cec) {
            ctx->pc = 0x186F5Cu;
            goto label_186f5c;
        }
    }
    ctx->pc = 0x186CF4u;
    // 0x186cf4: 0x2ea1001f  sltiu       $at, $s5, 0x1F
    ctx->pc = 0x186cf4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x186cf8: 0x10200098  beqz        $at, . + 4 + (0x98 << 2)
    ctx->pc = 0x186CF8u;
    {
        const bool branch_taken_0x186cf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x186cf8) {
            ctx->pc = 0x186F5Cu;
            goto label_186f5c;
        }
    }
    ctx->pc = 0x186D00u;
    // 0x186d00: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x186d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x186d04: 0x2444009c  addiu       $a0, $v0, 0x9C
    ctx->pc = 0x186d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 156));
    // 0x186d08: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x186d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186d0c: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x186D0Cu;
    SET_GPR_U32(ctx, 31, 0x186D14u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x186D0Cu, 0x186D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186D14u;
label_186d14:
    // 0x186d14: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x186D14u;
    {
        const bool branch_taken_0x186d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186d14) {
            ctx->pc = 0x186F5Cu;
            goto label_186f5c;
        }
    }
    ctx->pc = 0x186D1Cu;
label_186d1c:
    // 0x186d1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186d20: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x186D20u;
    SET_GPR_U32(ctx, 31, 0x186D28u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x186D20u, 0x186D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186D28u;
label_186d28:
    // 0x186d28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x186d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186d2c: 0x27859170  addiu       $a1, $gp, -0x6E90
    ctx->pc = 0x186d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938992));
    // 0x186d30: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x186d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x186d34: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x186D34u;
    SET_GPR_U32(ctx, 31, 0x186D3Cu);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x186D34u, 0x186D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186D3Cu;
label_186d3c:
    // 0x186d3c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x186D3Cu;
    {
        const bool branch_taken_0x186d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186d3c) {
            ctx->pc = 0x186DA0u;
            goto label_186da0;
        }
    }
    ctx->pc = 0x186D44u;
    // 0x186d44: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x186d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x186d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186d4c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x186D4Cu;
    SET_GPR_U32(ctx, 31, 0x186D54u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x186D4Cu, 0x186D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186D54u;
label_186d54:
    // 0x186d54: 0x24440005  addiu       $a0, $v0, 0x5
    ctx->pc = 0x186d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x186d58: 0x27859178  addiu       $a1, $gp, -0x6E88
    ctx->pc = 0x186d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939000));
    // 0x186d5c: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x186d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x186d60: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x186D60u;
    SET_GPR_U32(ctx, 31, 0x186D68u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x186D60u, 0x186D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186D68u;
label_186d68:
    // 0x186d68: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x186d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x186d6c: 0x440007b  bltz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x186D6Cu;
    {
        const bool branch_taken_0x186d6c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x186d6c) {
            ctx->pc = 0x186F5Cu;
            goto label_186f5c;
        }
    }
    ctx->pc = 0x186D74u;
    // 0x186d74: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x186d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x186d78: 0x28410029  slti        $at, $v0, 0x29
    ctx->pc = 0x186d78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x186d7c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x186D7Cu;
    {
        const bool branch_taken_0x186d7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x186d7c) {
            ctx->pc = 0x186D8Cu;
            goto label_186d8c;
        }
    }
    ctx->pc = 0x186D84u;
    // 0x186d84: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x186d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x186d88: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x186d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_186d8c:
    // 0x186d8c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x186d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x186d90: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x186d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x186d94: 0xac4300bc  sw          $v1, 0xBC($v0)
    ctx->pc = 0x186d94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 3));
    // 0x186d98: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x186D98u;
    {
        const bool branch_taken_0x186d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186d98) {
            ctx->pc = 0x186F5Cu;
            goto label_186f5c;
        }
    }
    ctx->pc = 0x186DA0u;
label_186da0:
    // 0x186da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186da4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x186DA4u;
    SET_GPR_U32(ctx, 31, 0x186DACu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x186DA4u, 0x186DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186DACu;
label_186dac:
    // 0x186dac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x186dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186db0: 0x27859180  addiu       $a1, $gp, -0x6E80
    ctx->pc = 0x186db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939008));
    // 0x186db4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x186db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x186db8: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x186DB8u;
    SET_GPR_U32(ctx, 31, 0x186DC0u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x186DB8u, 0x186DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186DC0u;
label_186dc0:
    // 0x186dc0: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x186DC0u;
    {
        const bool branch_taken_0x186dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186dc0) {
            ctx->pc = 0x186F5Cu;
            goto label_186f5c;
        }
    }
    ctx->pc = 0x186DC8u;
    // 0x186dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186dcc: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x186DCCu;
    SET_GPR_U32(ctx, 31, 0x186DD4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x186DCCu, 0x186DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186DD4u;
label_186dd4:
    // 0x186dd4: 0x24540004  addiu       $s4, $v0, 0x4
    ctx->pc = 0x186dd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x186dd8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x186dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ddc: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x186DDCu;
    SET_GPR_U32(ctx, 31, 0x186DE4u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x186DDCu, 0x186DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186DE4u;
label_186de4:
    // 0x186de4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x186de4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186de8: 0x1260005c  beqz        $s3, . + 4 + (0x5C << 2)
    ctx->pc = 0x186DE8u;
    {
        const bool branch_taken_0x186de8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x186de8) {
            ctx->pc = 0x186F5Cu;
            goto label_186f5c;
        }
    }
    ctx->pc = 0x186DF0u;
    // 0x186df0: 0x2e61001f  sltiu       $at, $s3, 0x1F
    ctx->pc = 0x186df0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x186df4: 0x10200059  beqz        $at, . + 4 + (0x59 << 2)
    ctx->pc = 0x186DF4u;
    {
        const bool branch_taken_0x186df4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x186df4) {
            ctx->pc = 0x186F5Cu;
            goto label_186f5c;
        }
    }
    ctx->pc = 0x186DFCu;
    // 0x186dfc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x186dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x186e00: 0x244400d4  addiu       $a0, $v0, 0xD4
    ctx->pc = 0x186e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 212));
    // 0x186e04: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x186e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186e08: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x186E08u;
    SET_GPR_U32(ctx, 31, 0x186E10u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x186E08u, 0x186E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186E10u;
label_186e10:
    // 0x186e10: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x186e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x186e14: 0x24845160  addiu       $a0, $a0, 0x5160
    ctx->pc = 0x186e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20832));
    // 0x186e18: 0xc107156  jal         func_41C558
    ctx->pc = 0x186E18u;
    SET_GPR_U32(ctx, 31, 0x186E20u);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x186E18u, 0x186E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186E20u;
label_186e20:
    // 0x186e20: 0xc1080e4  jal         func_420390
    ctx->pc = 0x186E20u;
    SET_GPR_U32(ctx, 31, 0x186E28u);
    ctx->pc = 0x420390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420390u, 0x186E20u, 0x186E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186E28u;
label_186e28:
    // 0x186e28: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x186e28u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186e2c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x186e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x186e30: 0x244400d4  addiu       $a0, $v0, 0xD4
    ctx->pc = 0x186e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 212));
    // 0x186e34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x186e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186e38: 0xc107fa4  jal         func_41FE90
    ctx->pc = 0x186E38u;
    SET_GPR_U32(ctx, 31, 0x186E40u);
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x186E38u, 0x186E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186E40u;
label_186e40:
    // 0x186e40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x186e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186e44: 0x12200043  beqz        $s1, . + 4 + (0x43 << 2)
    ctx->pc = 0x186E44u;
    {
        const bool branch_taken_0x186e44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x186e44) {
            ctx->pc = 0x186F54u;
            goto label_186f54;
        }
    }
    ctx->pc = 0x186E4Cu;
    // 0x186e4c: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x186e4cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186e50: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x186e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x186e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186e58: 0x0  nop
    ctx->pc = 0x186e58u;
    // NOP
    // 0x186e5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x186e5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x186e60: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x186e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x186e64: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x186e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x186e68: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x186e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x186e6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186e70: 0x0  nop
    ctx->pc = 0x186e70u;
    // NOP
    // 0x186e74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x186e74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x186e78: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x186e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x186e7c: 0xe44000f8  swc1        $f0, 0xF8($v0)
    ctx->pc = 0x186e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 248), bits); }
    // 0x186e80: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x186e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x186e84: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x186e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x186e88: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x186E88u;
    {
        const bool branch_taken_0x186e88 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x186e88) {
            ctx->pc = 0x186EA4u;
            goto label_186ea4;
        }
    }
    ctx->pc = 0x186E90u;
    // 0x186e90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186e94: 0x0  nop
    ctx->pc = 0x186e94u;
    // NOP
    // 0x186e98: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x186e98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x186e9c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x186E9Cu;
    {
        const bool branch_taken_0x186e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186e9c) {
            ctx->pc = 0x186EC0u;
            goto label_186ec0;
        }
    }
    ctx->pc = 0x186EA4u;
label_186ea4:
    // 0x186ea4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x186ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x186ea8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x186ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x186eac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x186eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x186eb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186eb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186eb4: 0x0  nop
    ctx->pc = 0x186eb4u;
    // NOP
    // 0x186eb8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x186eb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x186ebc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x186ebcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_186ec0:
    // 0x186ec0: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x186ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x186ec4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186ec8: 0x0  nop
    ctx->pc = 0x186ec8u;
    // NOP
    // 0x186ecc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x186eccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x186ed0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x186ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x186ed4: 0xc44000f4  lwc1        $f0, 0xF4($v0)
    ctx->pc = 0x186ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186ed8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x186ed8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x186edc: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x186edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x186ee0: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x186ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x186ee4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x186ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x186ee8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x186EE8u;
    {
        const bool branch_taken_0x186ee8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x186ee8) {
            ctx->pc = 0x186F04u;
            goto label_186f04;
        }
    }
    ctx->pc = 0x186EF0u;
    // 0x186ef0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186ef4: 0x0  nop
    ctx->pc = 0x186ef4u;
    // NOP
    // 0x186ef8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x186ef8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x186efc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x186EFCu;
    {
        const bool branch_taken_0x186efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186efc) {
            ctx->pc = 0x186F20u;
            goto label_186f20;
        }
    }
    ctx->pc = 0x186F04u;
label_186f04:
    // 0x186f04: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x186f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x186f08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x186f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x186f0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x186f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x186f10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186f14: 0x0  nop
    ctx->pc = 0x186f14u;
    // NOP
    // 0x186f18: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x186f18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x186f1c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x186f1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_186f20:
    // 0x186f20: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x186f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x186f24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186f28: 0x0  nop
    ctx->pc = 0x186f28u;
    // NOP
    // 0x186f2c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x186f2cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x186f30: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x186f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x186f34: 0xc44000f8  lwc1        $f0, 0xF8($v0)
    ctx->pc = 0x186f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186f38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x186f38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x186f3c: 0xe44000f8  swc1        $f0, 0xF8($v0)
    ctx->pc = 0x186f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 248), bits); }
    // 0x186f40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x186f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186f44: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x186F44u;
    SET_GPR_U32(ctx, 31, 0x186F4Cu);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x186F44u, 0x186F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186F4Cu;
label_186f4c:
    // 0x186f4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x186F4Cu;
    {
        const bool branch_taken_0x186f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186f4c) {
            ctx->pc = 0x186F5Cu;
            goto label_186f5c;
        }
    }
    ctx->pc = 0x186F54u;
label_186f54:
    // 0x186f54: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x186f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x186f58: 0xa04000d4  sb          $zero, 0xD4($v0)
    ctx->pc = 0x186f58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 212), (uint8_t)GPR_U32(ctx, 0));
label_186f5c:
    // 0x186f5c: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x186f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_186f60:
    // 0x186f60: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x186f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x186f64: 0xc0430fc  jal         func_10C3F0
    ctx->pc = 0x186F64u;
    SET_GPR_U32(ctx, 31, 0x186F6Cu);
    ctx->pc = 0x10C3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C3F0u, 0x186F64u, 0x186F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186F6Cu;
label_186f6c:
    // 0x186f6c: 0x1602feb7  bne         $s0, $v0, . + 4 + (-0x149 << 2)
    ctx->pc = 0x186F6Cu;
    {
        const bool branch_taken_0x186f6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x186f6c) {
            ctx->pc = 0x186A4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186a4c;
        }
    }
    ctx->pc = 0x186F74u;
    // 0x186f74: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x186f74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186f78: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x186f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x186f7c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x186f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x186f80: 0xc051428  jal         func_1450A0
    ctx->pc = 0x186F80u;
    SET_GPR_U32(ctx, 31, 0x186F88u);
    ctx->pc = 0x1450A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1450A0u, 0x186F80u, 0x186F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186F88u;
label_186f88:
    // 0x186f88: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x186f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186f8c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x186f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x186f90: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x186f90u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x186f94: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x186f94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x186f98: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x186f98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x186f9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x186f9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x186fa0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x186fa0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x186fa4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x186fa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186fa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x186fa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186fac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186facu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186fb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186fb4: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x186fb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x186fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x186FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186FC0u;
}
