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

// Function: sub_003BA038
// Address: 0x3ba038 - 0x3ba288
void sub_003BA038_0x3ba038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BA038_0x3ba038");
#endif

    switch (ctx->pc) {
        case 0x3ba064u: goto label_3ba064;
        case 0x3ba084u: goto label_3ba084;
        case 0x3ba090u: goto label_3ba090;
        case 0x3ba0d0u: goto label_3ba0d0;
        case 0x3ba0e8u: goto label_3ba0e8;
        case 0x3ba10cu: goto label_3ba10c;
        case 0x3ba124u: goto label_3ba124;
        case 0x3ba148u: goto label_3ba148;
        case 0x3ba160u: goto label_3ba160;
        case 0x3ba178u: goto label_3ba178;
        case 0x3ba18cu: goto label_3ba18c;
        case 0x3ba1a4u: goto label_3ba1a4;
        case 0x3ba1c0u: goto label_3ba1c0;
        case 0x3ba1d8u: goto label_3ba1d8;
        case 0x3ba1f4u: goto label_3ba1f4;
        case 0x3ba20cu: goto label_3ba20c;
        case 0x3ba228u: goto label_3ba228;
        case 0x3ba240u: goto label_3ba240;
        default: break;
    }

    ctx->pc = 0x3ba038u;

    // 0x3ba038: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3ba038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3ba03c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3ba03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3ba040: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3ba040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3ba044: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ba044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba048: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3ba048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x3ba04c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3ba04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3ba050: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ba050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3ba054: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3ba054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3ba058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ba058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ba05c: 0xc0ed30a  jal         func_3B4C28
    ctx->pc = 0x3BA05Cu;
    SET_GPR_U32(ctx, 31, 0x3BA064u);
    ctx->pc = 0x3BA060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA05Cu;
    // 0x3ba060: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4C28u, 0x3BA05Cu, 0x3BA064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA064u;
label_3ba064:
    // 0x3ba064: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BA064u;
    {
        const bool branch_taken_0x3ba064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA064u;
        // 0x3ba068: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba064) {
            ctx->pc = 0x3BA074u;
            goto label_3ba074;
        }
    }
    ctx->pc = 0x3BA06Cu;
    // 0x3ba06c: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x3BA06Cu;
    {
        const bool branch_taken_0x3ba06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA06Cu;
        // 0x3ba070: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba06c) {
            ctx->pc = 0x3BA25Cu;
            goto label_3ba25c;
        }
    }
    ctx->pc = 0x3BA074u;
label_3ba074:
    // 0x3ba074: 0x8e3000b0  lw          $s0, 0xB0($s1)
    ctx->pc = 0x3ba074u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x3ba078: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ba078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba07c: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3BA07Cu;
    SET_GPR_U32(ctx, 31, 0x3BA084u);
    ctx->pc = 0x3BA080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA07Cu;
    // 0x3ba080: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3BA07Cu, 0x3BA084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA084u;
label_3ba084:
    // 0x3ba084: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3ba084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ba088: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3BA088u;
    SET_GPR_U32(ctx, 31, 0x3BA090u);
    ctx->pc = 0x3BA08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA088u;
    // 0x3ba08c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3BA088u, 0x3BA090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA090u;
label_3ba090:
    // 0x3ba090: 0x1a400071  blez        $s2, . + 4 + (0x71 << 2)
    ctx->pc = 0x3BA090u;
    {
        const bool branch_taken_0x3ba090 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x3BA094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA090u;
        // 0x3ba094: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba090) {
            ctx->pc = 0x3BA258u;
            goto label_3ba258;
        }
    }
    ctx->pc = 0x3BA098u;
    // 0x3ba098: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x3ba098u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba09c: 0x141023  negu        $v0, $s4
    ctx->pc = 0x3ba09cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x3ba0a0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3ba0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3ba0a4: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x3BA0A4u;
    {
        const bool branch_taken_0x3ba0a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA0A4u;
        // 0x3ba0a8: 0x26720008  addiu       $s2, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba0a4) {
            ctx->pc = 0x3BA174u;
            goto label_3ba174;
        }
    }
    ctx->pc = 0x3BA0ACu;
    // 0x3ba0ac: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3ba0acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3ba0b0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3BA0B0u;
    {
        const bool branch_taken_0x3ba0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA0B0u;
        // 0x3ba0b4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba0b0) {
            ctx->pc = 0x3BA134u;
            goto label_3ba134;
        }
    }
    ctx->pc = 0x3BA0B8u;
    // 0x3ba0b8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3BA0B8u;
    {
        const bool branch_taken_0x3ba0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA0B8u;
        // 0x3ba0bc: 0x8e44fffc  lw          $a0, -0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba0b8) {
            ctx->pc = 0x3BA0FCu;
            goto label_3ba0fc;
        }
    }
    ctx->pc = 0x3BA0C0u;
    // 0x3ba0c0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BA0C0u;
    {
        const bool branch_taken_0x3ba0c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA0C0u;
        // 0x3ba0c4: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba0c0) {
            ctx->pc = 0x3BA0D4u;
            goto label_3ba0d4;
        }
    }
    ctx->pc = 0x3BA0C8u;
    // 0x3ba0c8: 0xc0ec6a4  jal         func_3B1A90
    ctx->pc = 0x3BA0C8u;
    SET_GPR_U32(ctx, 31, 0x3BA0D0u);
    ctx->pc = 0x3B1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A90u, 0x3BA0C8u, 0x3BA0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA0D0u;
label_3ba0d0:
    // 0x3ba0d0: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x3ba0d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3ba0d4:
    // 0x3ba0d4: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x3ba0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3ba0d8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BA0D8u;
    {
        const bool branch_taken_0x3ba0d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA0D8u;
        // 0x3ba0dc: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba0d8) {
            ctx->pc = 0x3BA0F0u;
            goto label_3ba0f0;
        }
    }
    ctx->pc = 0x3BA0E0u;
    // 0x3ba0e0: 0xc0e9f1e  jal         func_3A7C78
    ctx->pc = 0x3BA0E0u;
    SET_GPR_U32(ctx, 31, 0x3BA0E8u);
    ctx->pc = 0x3A7C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C78u, 0x3BA0E0u, 0x3BA0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA0E8u;
label_3ba0e8:
    // 0x3ba0e8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3ba0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3ba0ec: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3ba0ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ba0f0:
    // 0x3ba0f0: 0x26720014  addiu       $s2, $s3, 0x14
    ctx->pc = 0x3ba0f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x3ba0f4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3ba0f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3ba0f8: 0x8e44fffc  lw          $a0, -0x4($s2)
    ctx->pc = 0x3ba0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_3ba0fc:
    // 0x3ba0fc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BA0FCu;
    {
        const bool branch_taken_0x3ba0fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA0FCu;
        // 0x3ba100: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba0fc) {
            ctx->pc = 0x3BA110u;
            goto label_3ba110;
        }
    }
    ctx->pc = 0x3BA104u;
    // 0x3ba104: 0xc0ec6a4  jal         func_3B1A90
    ctx->pc = 0x3BA104u;
    SET_GPR_U32(ctx, 31, 0x3BA10Cu);
    ctx->pc = 0x3B1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A90u, 0x3BA104u, 0x3BA10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA10Cu;
label_3ba10c:
    // 0x3ba10c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x3ba10cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3ba110:
    // 0x3ba110: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3ba110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3ba114: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BA114u;
    {
        const bool branch_taken_0x3ba114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba114) {
            ctx->pc = 0x3BA118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BA114u;
            // 0x3ba118: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA12Cu;
            goto label_3ba12c;
        }
    }
    ctx->pc = 0x3BA11Cu;
    // 0x3ba11c: 0xc0e9f1e  jal         func_3A7C78
    ctx->pc = 0x3BA11Cu;
    SET_GPR_U32(ctx, 31, 0x3BA124u);
    ctx->pc = 0x3A7C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C78u, 0x3BA11Cu, 0x3BA124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA124u;
label_3ba124:
    // 0x3ba124: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3ba124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3ba128: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x3ba128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_3ba12c:
    // 0x3ba12c: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x3ba12cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x3ba130: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3ba130u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3ba134:
    // 0x3ba134: 0x8e44fffc  lw          $a0, -0x4($s2)
    ctx->pc = 0x3ba134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
    // 0x3ba138: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BA138u;
    {
        const bool branch_taken_0x3ba138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA138u;
        // 0x3ba13c: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba138) {
            ctx->pc = 0x3BA14Cu;
            goto label_3ba14c;
        }
    }
    ctx->pc = 0x3BA140u;
    // 0x3ba140: 0xc0ec6a4  jal         func_3B1A90
    ctx->pc = 0x3BA140u;
    SET_GPR_U32(ctx, 31, 0x3BA148u);
    ctx->pc = 0x3B1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A90u, 0x3BA140u, 0x3BA148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA148u;
label_3ba148:
    // 0x3ba148: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x3ba148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3ba14c:
    // 0x3ba14c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3ba14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3ba150: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BA150u;
    {
        const bool branch_taken_0x3ba150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba150) {
            ctx->pc = 0x3BA154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BA150u;
            // 0x3ba154: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA168u;
            goto label_3ba168;
        }
    }
    ctx->pc = 0x3BA158u;
    // 0x3ba158: 0xc0e9f1e  jal         func_3A7C78
    ctx->pc = 0x3BA158u;
    SET_GPR_U32(ctx, 31, 0x3BA160u);
    ctx->pc = 0x3A7C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C78u, 0x3BA158u, 0x3BA160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA160u;
label_3ba160:
    // 0x3ba160: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3ba160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3ba164: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x3ba164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_3ba168:
    // 0x3ba168: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3ba168u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3ba16c: 0x1280003a  beqz        $s4, . + 4 + (0x3A << 2)
    ctx->pc = 0x3BA16Cu;
    {
        const bool branch_taken_0x3ba16c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA16Cu;
        // 0x3ba170: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba16c) {
            ctx->pc = 0x3BA258u;
            goto label_3ba258;
        }
    }
    ctx->pc = 0x3BA174u;
label_3ba174:
    // 0x3ba174: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x3ba174u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ba178:
    // 0x3ba178: 0x8e64fffc  lw          $a0, -0x4($s3)
    ctx->pc = 0x3ba178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967292)));
    // 0x3ba17c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BA17Cu;
    {
        const bool branch_taken_0x3ba17c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA17Cu;
        // 0x3ba180: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba17c) {
            ctx->pc = 0x3BA190u;
            goto label_3ba190;
        }
    }
    ctx->pc = 0x3BA184u;
    // 0x3ba184: 0xc0ec6a4  jal         func_3B1A90
    ctx->pc = 0x3BA184u;
    SET_GPR_U32(ctx, 31, 0x3BA18Cu);
    ctx->pc = 0x3B1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A90u, 0x3BA184u, 0x3BA18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA18Cu;
label_3ba18c:
    // 0x3ba18c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x3ba18cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3ba190:
    // 0x3ba190: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3ba190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3ba194: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BA194u;
    {
        const bool branch_taken_0x3ba194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba194) {
            ctx->pc = 0x3BA198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BA194u;
            // 0x3ba198: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA1ACu;
            goto label_3ba1ac;
        }
    }
    ctx->pc = 0x3BA19Cu;
    // 0x3ba19c: 0xc0e9f1e  jal         func_3A7C78
    ctx->pc = 0x3BA19Cu;
    SET_GPR_U32(ctx, 31, 0x3BA1A4u);
    ctx->pc = 0x3A7C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C78u, 0x3BA19Cu, 0x3BA1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA1A4u;
label_3ba1a4:
    // 0x3ba1a4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3ba1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3ba1a8: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x3ba1a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_3ba1ac:
    // 0x3ba1ac: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x3ba1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3ba1b0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BA1B0u;
    {
        const bool branch_taken_0x3ba1b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA1B0u;
        // 0x3ba1b4: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba1b0) {
            ctx->pc = 0x3BA1C4u;
            goto label_3ba1c4;
        }
    }
    ctx->pc = 0x3BA1B8u;
    // 0x3ba1b8: 0xc0ec6a4  jal         func_3B1A90
    ctx->pc = 0x3BA1B8u;
    SET_GPR_U32(ctx, 31, 0x3BA1C0u);
    ctx->pc = 0x3B1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A90u, 0x3BA1B8u, 0x3BA1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA1C0u;
label_3ba1c0:
    // 0x3ba1c0: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x3ba1c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3ba1c4:
    // 0x3ba1c4: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x3ba1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3ba1c8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BA1C8u;
    {
        const bool branch_taken_0x3ba1c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba1c8) {
            ctx->pc = 0x3BA1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BA1C8u;
            // 0x3ba1cc: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA1E0u;
            goto label_3ba1e0;
        }
    }
    ctx->pc = 0x3BA1D0u;
    // 0x3ba1d0: 0xc0e9f1e  jal         func_3A7C78
    ctx->pc = 0x3BA1D0u;
    SET_GPR_U32(ctx, 31, 0x3BA1D8u);
    ctx->pc = 0x3A7C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C78u, 0x3BA1D0u, 0x3BA1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA1D8u;
label_3ba1d8:
    // 0x3ba1d8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3ba1d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3ba1dc: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x3ba1dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_3ba1e0:
    // 0x3ba1e0: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x3ba1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x3ba1e4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BA1E4u;
    {
        const bool branch_taken_0x3ba1e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA1E4u;
        // 0x3ba1e8: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba1e4) {
            ctx->pc = 0x3BA1F8u;
            goto label_3ba1f8;
        }
    }
    ctx->pc = 0x3BA1ECu;
    // 0x3ba1ec: 0xc0ec6a4  jal         func_3B1A90
    ctx->pc = 0x3BA1ECu;
    SET_GPR_U32(ctx, 31, 0x3BA1F4u);
    ctx->pc = 0x3B1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A90u, 0x3BA1ECu, 0x3BA1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA1F4u;
label_3ba1f4:
    // 0x3ba1f4: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x3ba1f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3ba1f8:
    // 0x3ba1f8: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x3ba1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3ba1fc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BA1FCu;
    {
        const bool branch_taken_0x3ba1fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba1fc) {
            ctx->pc = 0x3BA200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BA1FCu;
            // 0x3ba200: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA214u;
            goto label_3ba214;
        }
    }
    ctx->pc = 0x3BA204u;
    // 0x3ba204: 0xc0e9f1e  jal         func_3A7C78
    ctx->pc = 0x3BA204u;
    SET_GPR_U32(ctx, 31, 0x3BA20Cu);
    ctx->pc = 0x3A7C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C78u, 0x3BA204u, 0x3BA20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA20Cu;
label_3ba20c:
    // 0x3ba20c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3ba20cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3ba210: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x3ba210u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_3ba214:
    // 0x3ba214: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x3ba214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x3ba218: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BA218u;
    {
        const bool branch_taken_0x3ba218 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA218u;
        // 0x3ba21c: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba218) {
            ctx->pc = 0x3BA22Cu;
            goto label_3ba22c;
        }
    }
    ctx->pc = 0x3BA220u;
    // 0x3ba220: 0xc0ec6a4  jal         func_3B1A90
    ctx->pc = 0x3BA220u;
    SET_GPR_U32(ctx, 31, 0x3BA228u);
    ctx->pc = 0x3B1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A90u, 0x3BA220u, 0x3BA228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA228u;
label_3ba228:
    // 0x3ba228: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x3ba228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3ba22c:
    // 0x3ba22c: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x3ba22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x3ba230: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BA230u;
    {
        const bool branch_taken_0x3ba230 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba230) {
            ctx->pc = 0x3BA234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BA230u;
            // 0x3ba234: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA248u;
            goto label_3ba248;
        }
    }
    ctx->pc = 0x3BA238u;
    // 0x3ba238: 0xc0e9f1e  jal         func_3A7C78
    ctx->pc = 0x3BA238u;
    SET_GPR_U32(ctx, 31, 0x3BA240u);
    ctx->pc = 0x3A7C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C78u, 0x3BA238u, 0x3BA240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA240u;
label_3ba240:
    // 0x3ba240: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3ba240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3ba244: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x3ba244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_3ba248:
    // 0x3ba248: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x3ba248u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x3ba24c: 0x2694fffc  addiu       $s4, $s4, -0x4
    ctx->pc = 0x3ba24cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
    // 0x3ba250: 0x1680ffc9  bnez        $s4, . + 4 + (-0x37 << 2)
    ctx->pc = 0x3BA250u;
    {
        const bool branch_taken_0x3ba250 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BA254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA250u;
        // 0x3ba254: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba250) {
            ctx->pc = 0x3BA178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ba178;
        }
    }
    ctx->pc = 0x3BA258u;
label_3ba258:
    // 0x3ba258: 0x2b1a821  addu        $s5, $s5, $s1
    ctx->pc = 0x3ba258u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_3ba25c:
    // 0x3ba25c: 0x26a2000c  addiu       $v0, $s5, 0xC
    ctx->pc = 0x3ba25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x3ba260: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3ba260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ba264: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3ba264u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ba268: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3ba268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ba26c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ba26cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ba270: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3ba270u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ba274: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3ba274u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ba278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ba278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ba27c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BA27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA27Cu;
        // 0x3ba280: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA284u;
    // 0x3ba284: 0x0  nop
    ctx->pc = 0x3ba284u;
    // NOP
    ctx->pc = 0x3ba288u;
}
