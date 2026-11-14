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

// Function: sub_0049DF60
// Address: 0x49df60 - 0x49e188
void sub_0049DF60_0x49df60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049DF60_0x49df60");
#endif

    switch (ctx->pc) {
        case 0x49df9cu: goto label_49df9c;
        case 0x49dfb8u: goto label_49dfb8;
        case 0x49e008u: goto label_49e008;
        case 0x49e024u: goto label_49e024;
        case 0x49e038u: goto label_49e038;
        case 0x49e040u: goto label_49e040;
        case 0x49e054u: goto label_49e054;
        case 0x49e06cu: goto label_49e06c;
        case 0x49e080u: goto label_49e080;
        case 0x49e0b4u: goto label_49e0b4;
        case 0x49e0c4u: goto label_49e0c4;
        case 0x49e0d8u: goto label_49e0d8;
        case 0x49e10cu: goto label_49e10c;
        case 0x49e114u: goto label_49e114;
        case 0x49e128u: goto label_49e128;
        case 0x49e13cu: goto label_49e13c;
        case 0x49e144u: goto label_49e144;
        case 0x49e158u: goto label_49e158;
        default: break;
    }

    ctx->pc = 0x49df60u;

    // 0x49df60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x49df60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x49df64: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x49df64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x49df68: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x49df68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x49df6c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x49df6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49df70: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x49df70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x49df74: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x49df74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49df78: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x49df78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x49df7c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x49df7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49df80: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x49df80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x49df84: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x49df84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49df88: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x49df88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x49df8c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x49df8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x49df90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49df90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49df94: 0xc127d08  jal         func_49F420
    ctx->pc = 0x49DF94u;
    SET_GPR_U32(ctx, 31, 0x49DF9Cu);
    ctx->pc = 0x49DF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DF94u;
    // 0x49df98: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F420u, 0x49DF94u, 0x49DF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DF9Cu;
label_49df9c:
    // 0x49df9c: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x49DF9Cu;
    {
        const bool branch_taken_0x49df9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x49DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DF9Cu;
        // 0x49dfa0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49df9c) {
            ctx->pc = 0x49DFC4u;
            goto label_49dfc4;
        }
    }
    ctx->pc = 0x49DFA4u;
    // 0x49dfa4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x49dfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x49dfa8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x49dfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x49dfac: 0x24848340  addiu       $a0, $a0, -0x7CC0
    ctx->pc = 0x49dfacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935360));
    // 0x49dfb0: 0xc12a936  jal         func_4AA4D8
    ctx->pc = 0x49DFB0u;
    SET_GPR_U32(ctx, 31, 0x49DFB8u);
    ctx->pc = 0x49DFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DFB0u;
    // 0x49dfb4: 0x34a50803  ori         $a1, $a1, 0x803 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2051);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA4D8u, 0x49DFB0u, 0x49DFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DFB8u;
label_49dfb8:
    // 0x49dfb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49dfb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49dfbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x49DFBCu;
    {
        const bool branch_taken_0x49dfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DFBCu;
        // 0x49dfc0: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dfbc) {
            ctx->pc = 0x49DFCCu;
            goto label_49dfcc;
        }
    }
    ctx->pc = 0x49DFC4u;
label_49dfc4:
    // 0x49dfc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49dfc8: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x49dfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_49dfcc:
    // 0x49dfcc: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x49DFCCu;
    {
        const bool branch_taken_0x49dfcc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x49dfcc) {
            ctx->pc = 0x49DFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49DFCCu;
            // 0x49dfd0: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49DFDCu;
            goto label_49dfdc;
        }
    }
    ctx->pc = 0x49DFD4u;
    // 0x49dfd4: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x49DFD4u;
    {
        const bool branch_taken_0x49dfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DFD4u;
        // 0x49dfd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dfd4) {
            ctx->pc = 0x49E15Cu;
            goto label_49e15c;
        }
    }
    ctx->pc = 0x49DFDCu;
label_49dfdc:
    // 0x49dfdc: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x49DFDCu;
    {
        const bool branch_taken_0x49dfdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DFDCu;
        // 0x49dfe0: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dfdc) {
            ctx->pc = 0x49E05Cu;
            goto label_49e05c;
        }
    }
    ctx->pc = 0x49DFE4u;
    // 0x49dfe4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x49dfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x49dfe8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x49dfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x49dfec: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x49DFECu;
    {
        const bool branch_taken_0x49dfec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DFECu;
        // 0x49dff0: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dfec) {
            ctx->pc = 0x49E014u;
            goto label_49e014;
        }
    }
    ctx->pc = 0x49DFF4u;
    // 0x49dff4: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x49dff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x49dff8: 0x12400046  beqz        $s2, . + 4 + (0x46 << 2)
    ctx->pc = 0x49DFF8u;
    {
        const bool branch_taken_0x49dff8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DFF8u;
        // 0x49dffc: 0x3c160066  lui         $s6, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dff8) {
            ctx->pc = 0x49E114u;
            goto label_49e114;
        }
    }
    ctx->pc = 0x49E000u;
    // 0x49e000: 0xc127d08  jal         func_49F420
    ctx->pc = 0x49E000u;
    SET_GPR_U32(ctx, 31, 0x49E008u);
    ctx->pc = 0x49E004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E000u;
    // 0x49e004: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F420u, 0x49E000u, 0x49E008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E008u;
label_49e008:
    // 0x49e008: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x49e008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x49e00c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x49E00Cu;
    {
        const bool branch_taken_0x49e00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E00Cu;
        // 0x49e010: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e00c) {
            ctx->pc = 0x49E114u;
            goto label_49e114;
        }
    }
    ctx->pc = 0x49E014u;
label_49e014:
    // 0x49e014: 0x1240003f  beqz        $s2, . + 4 + (0x3F << 2)
    ctx->pc = 0x49E014u;
    {
        const bool branch_taken_0x49e014 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E014u;
        // 0x49e018: 0x3c160066  lui         $s6, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e014) {
            ctx->pc = 0x49E114u;
            goto label_49e114;
        }
    }
    ctx->pc = 0x49E01Cu;
    // 0x49e01c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x49E01Cu;
    {
        const bool branch_taken_0x49e01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E01Cu;
        // 0x49e020: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e01c) {
            ctx->pc = 0x49E114u;
            goto label_49e114;
        }
    }
    ctx->pc = 0x49E024u;
label_49e024:
    // 0x49e024: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x49e024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x49e028: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x49e028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x49e02c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x49e02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49e030: 0xc12a936  jal         func_4AA4D8
    ctx->pc = 0x49E030u;
    SET_GPR_U32(ctx, 31, 0x49E038u);
    ctx->pc = 0x49E034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E030u;
    // 0x49e034: 0x34a50803  ori         $a1, $a1, 0x803 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2051);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA4D8u, 0x49E030u, 0x49E038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E038u;
label_49e038:
    // 0x49e038: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x49E038u;
    {
        const bool branch_taken_0x49e038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E038u;
        // 0x49e03c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e038) {
            ctx->pc = 0x49E0A4u;
            goto label_49e0a4;
        }
    }
    ctx->pc = 0x49E040u;
label_49e040:
    // 0x49e040: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x49e040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x49e044: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x49e044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x49e048: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x49e048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49e04c: 0xc12a936  jal         func_4AA4D8
    ctx->pc = 0x49E04Cu;
    SET_GPR_U32(ctx, 31, 0x49E054u);
    ctx->pc = 0x49E050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E04Cu;
    // 0x49e050: 0x34a50803  ori         $a1, $a1, 0x803 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2051);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA4D8u, 0x49E04Cu, 0x49E054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E054u;
label_49e054:
    // 0x49e054: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x49E054u;
    {
        const bool branch_taken_0x49e054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E054u;
        // 0x49e058: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e054) {
            ctx->pc = 0x49E0FCu;
            goto label_49e0fc;
        }
    }
    ctx->pc = 0x49E05Cu;
label_49e05c:
    // 0x49e05c: 0x12800015  beqz        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x49E05Cu;
    {
        const bool branch_taken_0x49e05c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E05Cu;
        // 0x49e060: 0x3c160066  lui         $s6, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e05c) {
            ctx->pc = 0x49E0B4u;
            goto label_49e0b4;
        }
    }
    ctx->pc = 0x49E064u;
    // 0x49e064: 0xc127d08  jal         func_49F420
    ctx->pc = 0x49E064u;
    SET_GPR_U32(ctx, 31, 0x49E06Cu);
    ctx->pc = 0x49E068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E064u;
    // 0x49e068: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F420u, 0x49E064u, 0x49E06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E06Cu;
label_49e06c:
    // 0x49e06c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x49e06cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e070: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x49e070u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e074: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x49e074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x49e078: 0x24475ae8  addiu       $a3, $v0, 0x5AE8
    ctx->pc = 0x49e078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 23272));
    // 0x49e07c: 0x24e50004  addiu       $a1, $a3, 0x4
    ctx->pc = 0x49e07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_49e080:
    // 0x49e080: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49e080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49e084: 0x1046ffe7  beq         $v0, $a2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x49E084u;
    {
        const bool branch_taken_0x49e084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x49E088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E084u;
        // 0x49e088: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e084) {
            ctx->pc = 0x49E024u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e024;
        }
    }
    ctx->pc = 0x49E08Cu;
    // 0x49e08c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x49e08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x49e090: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x49e090u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x49e094: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49E094u;
    {
        const bool branch_taken_0x49e094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E094u;
        // 0x49e098: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e094) {
            ctx->pc = 0x49E080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e080;
        }
    }
    ctx->pc = 0x49E09Cu;
    // 0x49e09c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49e09cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e0a0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x49e0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_49e0a4:
    // 0x49e0a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49E0A4u;
    {
        const bool branch_taken_0x49e0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49e0a4) {
            ctx->pc = 0x49E0B4u;
            goto label_49e0b4;
        }
    }
    ctx->pc = 0x49E0ACu;
    // 0x49e0ac: 0xc127bbc  jal         func_49EEF0
    ctx->pc = 0x49E0ACu;
    SET_GPR_U32(ctx, 31, 0x49E0B4u);
    ctx->pc = 0x49E0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E0ACu;
    // 0x49e0b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EEF0u, 0x49E0ACu, 0x49E0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E0B4u;
label_49e0b4:
    // 0x49e0b4: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x49E0B4u;
    {
        const bool branch_taken_0x49e0b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e0b4) {
            ctx->pc = 0x49E114u;
            goto label_49e114;
        }
    }
    ctx->pc = 0x49E0BCu;
    // 0x49e0bc: 0xc127d08  jal         func_49F420
    ctx->pc = 0x49E0BCu;
    SET_GPR_U32(ctx, 31, 0x49E0C4u);
    ctx->pc = 0x49E0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E0BCu;
    // 0x49e0c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F420u, 0x49E0BCu, 0x49E0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E0C4u;
label_49e0c4:
    // 0x49e0c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x49e0c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e0c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x49e0c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e0cc: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x49e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x49e0d0: 0x24475ae8  addiu       $a3, $v0, 0x5AE8
    ctx->pc = 0x49e0d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 23272));
    // 0x49e0d4: 0x24e50004  addiu       $a1, $a3, 0x4
    ctx->pc = 0x49e0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_49e0d8:
    // 0x49e0d8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49e0dc: 0x1046ffd8  beq         $v0, $a2, . + 4 + (-0x28 << 2)
    ctx->pc = 0x49E0DCu;
    {
        const bool branch_taken_0x49e0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x49E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E0DCu;
        // 0x49e0e0: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e0dc) {
            ctx->pc = 0x49E040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e040;
        }
    }
    ctx->pc = 0x49E0E4u;
    // 0x49e0e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x49e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x49e0e8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x49e0e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x49e0ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49E0ECu;
    {
        const bool branch_taken_0x49e0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E0ECu;
        // 0x49e0f0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e0ec) {
            ctx->pc = 0x49E0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e0d8;
        }
    }
    ctx->pc = 0x49E0F4u;
    // 0x49e0f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49e0f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e0f8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x49e0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_49e0fc:
    // 0x49e0fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49E0FCu;
    {
        const bool branch_taken_0x49e0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49e0fc) {
            ctx->pc = 0x49E114u;
            goto label_49e114;
        }
    }
    ctx->pc = 0x49E104u;
    // 0x49e104: 0xc127bae  jal         func_49EEB8
    ctx->pc = 0x49E104u;
    SET_GPR_U32(ctx, 31, 0x49E10Cu);
    ctx->pc = 0x49E108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E104u;
    // 0x49e108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EEB8u, 0x49E104u, 0x49E10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E10Cu;
label_49e10c:
    // 0x49e10c: 0xc127bbc  jal         func_49EEF0
    ctx->pc = 0x49E10Cu;
    SET_GPR_U32(ctx, 31, 0x49E114u);
    ctx->pc = 0x49E110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E10Cu;
    // 0x49e110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EEF0u, 0x49E10Cu, 0x49E114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E114u;
label_49e114:
    // 0x49e114: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x49E114u;
    {
        const bool branch_taken_0x49e114 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E114u;
        // 0x49e118: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e114) {
            ctx->pc = 0x49E128u;
            goto label_49e128;
        }
    }
    ctx->pc = 0x49E11Cu;
    // 0x49e11c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x49e11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x49e120: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x49E120u;
    SET_GPR_U32(ctx, 31, 0x49E128u);
    ctx->pc = 0x49E124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E120u;
    // 0x49e124: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x49E120u, 0x49E128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E128u;
label_49e128:
    // 0x49e128: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x49E128u;
    {
        const bool branch_taken_0x49e128 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E128u;
        // 0x49e12c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e128) {
            ctx->pc = 0x49E13Cu;
            goto label_49e13c;
        }
    }
    ctx->pc = 0x49E130u;
    // 0x49e130: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x49e130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x49e134: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x49E134u;
    SET_GPR_U32(ctx, 31, 0x49E13Cu);
    ctx->pc = 0x49E138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E134u;
    // 0x49e138: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x49E134u, 0x49E13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E13Cu;
label_49e13c:
    // 0x49e13c: 0xc12a4ce  jal         func_4A9338
    ctx->pc = 0x49E13Cu;
    SET_GPR_U32(ctx, 31, 0x49E144u);
    ctx->pc = 0x49E140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E13Cu;
    // 0x49e140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9338u, 0x49E13Cu, 0x49E144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E144u;
label_49e144:
    // 0x49e144: 0xae130014  sw          $s3, 0x14($s0)
    ctx->pc = 0x49e144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
    // 0x49e148: 0x26c48330  addiu       $a0, $s6, -0x7CD0
    ctx->pc = 0x49e148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935344));
    // 0x49e14c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x49e14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x49e150: 0xc127bfe  jal         func_49EFF8
    ctx->pc = 0x49E150u;
    SET_GPR_U32(ctx, 31, 0x49E158u);
    ctx->pc = 0x49E154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E150u;
    // 0x49e154: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFF8u, 0x49E150u, 0x49E158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E158u;
label_49e158:
    // 0x49e158: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49e158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49e15c:
    // 0x49e15c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x49e15cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x49e160: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x49e160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x49e164: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x49e164u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x49e168: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x49e168u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49e16c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x49e16cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49e170: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x49e170u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49e174: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x49e174u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49e178: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49e178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49e17c: 0x3e00008  jr          $ra
    ctx->pc = 0x49E17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E17Cu;
        // 0x49e180: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49E17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49E184u;
    // 0x49e184: 0x0  nop
    ctx->pc = 0x49e184u;
    // NOP
    ctx->pc = 0x49e188u;
}
