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

// Function: sub_003E4FD8
// Address: 0x3e4fd8 - 0x3e5148
void sub_003E4FD8_0x3e4fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E4FD8_0x3e4fd8");
#endif

    switch (ctx->pc) {
        case 0x3e500cu: goto label_3e500c;
        case 0x3e5028u: goto label_3e5028;
        case 0x3e5074u: goto label_3e5074;
        case 0x3e508cu: goto label_3e508c;
        case 0x3e50a4u: goto label_3e50a4;
        case 0x3e50b8u: goto label_3e50b8;
        case 0x3e50c8u: goto label_3e50c8;
        case 0x3e50d8u: goto label_3e50d8;
        case 0x3e50e8u: goto label_3e50e8;
        case 0x3e50fcu: goto label_3e50fc;
        default: break;
    }

    ctx->pc = 0x3e4fd8u;

    // 0x3e4fd8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3e4fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3e4fdc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3e4fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3e4fe0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e4fe0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4fe4: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x3e4fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x3e4fe8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e4fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3e4fec: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x3e4fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x3e4ff0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3e4ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3e4ff4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3e4ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3e4ff8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3e4ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3e4ffc: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3e4ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x3e5000: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e5000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e5004: 0xc0ff3be  jal         func_3FCEF8
    ctx->pc = 0x3E5004u;
    SET_GPR_U32(ctx, 31, 0x3E500Cu);
    ctx->pc = 0x3E5008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5004u;
    // 0x3e5008: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FCEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FCEF8u, 0x3E5004u, 0x3E500Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E500Cu;
label_3e500c:
    // 0x3e500c: 0xde740180  ld          $s4, 0x180($s3)
    ctx->pc = 0x3e500cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 19), 384)));
    // 0x3e5010: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3e5010u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5014: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3e5014u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5018: 0x1ac0003f  blez        $s6, . + 4 + (0x3F << 2)
    ctx->pc = 0x3E5018u;
    {
        const bool branch_taken_0x3e5018 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x3E501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5018u;
        // 0x3e501c: 0xfe740188  sd          $s4, 0x188($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 392), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5018) {
            ctx->pc = 0x3E5118u;
            goto label_3e5118;
        }
    }
    ctx->pc = 0x3E5020u;
    // 0x3e5020: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x3e5020u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e5024: 0x0  nop
    ctx->pc = 0x3e5024u;
    // NOP
label_3e5028:
    // 0x3e5028: 0x12800037  beqz        $s4, . + 4 + (0x37 << 2)
    ctx->pc = 0x3E5028u;
    {
        const bool branch_taken_0x3e5028 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5028u;
        // 0x3e502c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5028) {
            ctx->pc = 0x3E5108u;
            goto label_3e5108;
        }
    }
    ctx->pc = 0x3E5030u;
    // 0x3e5030: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x3e5030u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5034: 0x32830003  andi        $v1, $s4, 0x3
    ctx->pc = 0x3e5034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)3);
    // 0x3e5038: 0x1a800015  blez        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x3E5038u;
    {
        const bool branch_taken_0x3e5038 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x3E503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5038u;
        // 0x3e503c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5038) {
            ctx->pc = 0x3E5090u;
            goto label_3e5090;
        }
    }
    ctx->pc = 0x3E5040u;
    // 0x3e5040: 0x5060001d  beql        $v1, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E5040u;
    {
        const bool branch_taken_0x3e5040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5040) {
            ctx->pc = 0x3E5044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5040u;
            // 0x3e5044: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E50B8u;
            goto label_3e50b8;
        }
    }
    ctx->pc = 0x3E5048u;
    // 0x3e5048: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3e5048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3e504c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3E504Cu;
    {
        const bool branch_taken_0x3e504c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e504c) {
            ctx->pc = 0x3E5050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E504Cu;
            // 0x3e5050: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5094u;
            goto label_3e5094;
        }
    }
    ctx->pc = 0x3E5054u;
    // 0x3e5054: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e5054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e5058: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E5058u;
    {
        const bool branch_taken_0x3e5058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5058) {
            ctx->pc = 0x3E505Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5058u;
            // 0x3e505c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E507Cu;
            goto label_3e507c;
        }
    }
    ctx->pc = 0x3E5060u;
    // 0x3e5060: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3e5060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3e5064: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e5064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5068: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e5068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e506c: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E506Cu;
    SET_GPR_U32(ctx, 31, 0x3E5074u);
    ctx->pc = 0x3E5070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E506Cu;
    // 0x3e5070: 0x26500004  addiu       $s0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E506Cu, 0x3E5074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5074u;
label_3e5074:
    // 0x3e5074: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3e5074u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e5078: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3e5078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e507c:
    // 0x3e507c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e507cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5080: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e5080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5084: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E5084u;
    SET_GPR_U32(ctx, 31, 0x3E508Cu);
    ctx->pc = 0x3E5088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5084u;
    // 0x3e5088: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E5084u, 0x3E508Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E508Cu;
label_3e508c:
    // 0x3e508c: 0x66310001  daddiu      $s1, $s1, 0x1
    ctx->pc = 0x3e508cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)1);
label_3e5090:
    // 0x3e5090: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3e5090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e5094:
    // 0x3e5094: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e5094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5098: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e5098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e509c: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E509Cu;
    SET_GPR_U32(ctx, 31, 0x3E50A4u);
    ctx->pc = 0x3E50A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E509Cu;
    // 0x3e50a0: 0x66310001  daddiu      $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E509Cu, 0x3E50A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E50A4u;
label_3e50a4:
    // 0x3e50a4: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x3e50a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x3e50a8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3E50A8u;
    {
        const bool branch_taken_0x3e50a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E50ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E50A8u;
        // 0x3e50ac: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e50a8) {
            ctx->pc = 0x3E5108u;
            goto label_3e5108;
        }
    }
    ctx->pc = 0x3E50B0u;
    // 0x3e50b0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3e50b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3e50b4: 0x0  nop
    ctx->pc = 0x3e50b4u;
    // NOP
label_3e50b8:
    // 0x3e50b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e50b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e50bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e50bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e50c0: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E50C0u;
    SET_GPR_U32(ctx, 31, 0x3E50C8u);
    ctx->pc = 0x3E50C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E50C0u;
    // 0x3e50c4: 0x66310004  daddiu      $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E50C0u, 0x3E50C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E50C8u;
label_3e50c8:
    // 0x3e50c8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3e50c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3e50cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e50ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e50d0: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E50D0u;
    SET_GPR_U32(ctx, 31, 0x3E50D8u);
    ctx->pc = 0x3E50D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E50D0u;
    // 0x3e50d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E50D0u, 0x3E50D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E50D8u;
label_3e50d8:
    // 0x3e50d8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3e50d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3e50dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e50dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e50e0: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E50E0u;
    SET_GPR_U32(ctx, 31, 0x3E50E8u);
    ctx->pc = 0x3E50E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E50E0u;
    // 0x3e50e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E50E0u, 0x3E50E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E50E8u;
label_3e50e8:
    // 0x3e50e8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3e50e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3e50ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e50ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e50f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e50f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e50f4: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E50F4u;
    SET_GPR_U32(ctx, 31, 0x3E50FCu);
    ctx->pc = 0x3E50F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E50F4u;
    // 0x3e50f8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E50F4u, 0x3E50FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E50FCu;
label_3e50fc:
    // 0x3e50fc: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x3e50fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x3e5100: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3E5100u;
    {
        const bool branch_taken_0x3e5100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5100) {
            ctx->pc = 0x3E5104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5100u;
            // 0x3e5104: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E50B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e50b8;
        }
    }
    ctx->pc = 0x3E5108u;
label_3e5108:
    // 0x3e5108: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x3e5108u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e510c: 0x76102a  slt         $v0, $v1, $s6
    ctx->pc = 0x3e510cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x3e5110: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x3E5110u;
    {
        const bool branch_taken_0x3e5110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E5114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5110u;
        // 0x3e5114: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5110) {
            ctx->pc = 0x3E5028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5028;
        }
    }
    ctx->pc = 0x3E5118u;
label_3e5118:
    // 0x3e5118: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3e5118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3e511c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3e511cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3e5120: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3e5120u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3e5124: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3e5124u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e5128: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e5128u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e512c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3e512cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e5130: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x3e5130u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e5134: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x3e5134u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e5138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e5138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e513c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E513Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E5140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E513Cu;
        // 0x3e5140: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E513Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E5144u;
    // 0x3e5144: 0x0  nop
    ctx->pc = 0x3e5144u;
    // NOP
    ctx->pc = 0x3e5148u;
}
