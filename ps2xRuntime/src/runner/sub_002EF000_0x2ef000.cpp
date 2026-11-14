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

// Function: sub_002EF000
// Address: 0x2ef000 - 0x2ef140
void sub_002EF000_0x2ef000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF000_0x2ef000");
#endif

    switch (ctx->pc) {
        case 0x2ef024u: goto label_2ef024;
        case 0x2ef034u: goto label_2ef034;
        case 0x2ef0b4u: goto label_2ef0b4;
        case 0x2ef0d0u: goto label_2ef0d0;
        case 0x2ef110u: goto label_2ef110;
        case 0x2ef120u: goto label_2ef120;
        default: break;
    }

    ctx->pc = 0x2ef000u;

    // 0x2ef000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ef000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ef004: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2ef004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2ef008: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ef008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef00c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ef00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef010: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ef010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ef014: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ef014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ef018: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2ef018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2ef01c: 0xc0bbb38  jal         func_2EECE0
    ctx->pc = 0x2EF01Cu;
    SET_GPR_U32(ctx, 31, 0x2EF024u);
    ctx->pc = 0x2EF020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF01Cu;
    // 0x2ef020: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EECE0u, 0x2EF01Cu, 0x2EF024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF024u;
label_2ef024:
    // 0x2ef024: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x2ef024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2ef028: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef02c: 0xc0bbb38  jal         func_2EECE0
    ctx->pc = 0x2EF02Cu;
    SET_GPR_U32(ctx, 31, 0x2EF034u);
    ctx->pc = 0x2EF030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF02Cu;
    // 0x2ef030: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EECE0u, 0x2EF02Cu, 0x2EF034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF034u;
label_2ef034:
    // 0x2ef034: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2ef034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ef038: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2ef038u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef03c: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x2ef03cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ef040: 0x12283f  dsra32      $a1, $s2, 0
    ctx->pc = 0x2ef040u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x2ef044: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2ef044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2ef048: 0x8383f  dsra32      $a3, $t0, 0
    ctx->pc = 0x2ef048u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2ef04c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2ef04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef050: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2ef050u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2ef054: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2ef054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2ef058: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2ef058u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ef05c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ef05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ef060: 0x22500  sll         $a0, $v0, 20
    ctx->pc = 0x2ef060u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x2ef064: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2ef064u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef068: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2ef068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2ef06c: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x2ef06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2ef070: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EF070u;
    {
        const bool branch_taken_0x2ef070 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2EF074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF070u;
        // 0x2ef074: 0x5283c  dsll32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef070) {
            ctx->pc = 0x2EF090u;
            goto label_2ef090;
        }
    }
    ctx->pc = 0x2EF078u;
    // 0x2ef078: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2ef078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2ef07c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ef07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2ef080: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x2ef080u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2ef084: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EF084u;
    {
        const bool branch_taken_0x2ef084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF084u;
        // 0x2ef088: 0x2459025  or          $s2, $s2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef084) {
            ctx->pc = 0x2EF0A4u;
            goto label_2ef0a4;
        }
    }
    ctx->pc = 0x2EF08Cu;
    // 0x2ef08c: 0x0  nop
    ctx->pc = 0x2ef08cu;
    // NOP
label_2ef090:
    // 0x2ef090: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2ef090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2ef094: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ef094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2ef098: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2ef098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ef09c: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x2ef09cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2ef0a0: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x2ef0a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_2ef0a4:
    // 0x2ef0a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ef0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef0a8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2ef0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef0ac: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x2EF0ACu;
    SET_GPR_U32(ctx, 31, 0x2EF0B4u);
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x2EF0ACu, 0x2EF0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF0B4u;
label_2ef0b4:
    // 0x2ef0b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ef0b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef0b8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2ef0b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ef0bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ef0bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ef0c0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2ef0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ef0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF0C4u;
        // 0x2ef0c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF0CCu;
    // 0x2ef0cc: 0x0  nop
    ctx->pc = 0x2ef0ccu;
    // NOP
label_2ef0d0:
    // 0x2ef0d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ef0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ef0d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ef0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ef0d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ef0d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef0dc: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x2ef0dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x2ef0e0: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x2ef0e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2ef0e4: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x2ef0e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x2ef0e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EF0E8u;
    {
        const bool branch_taken_0x2ef0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF0E8u;
        // 0x2ef0ec: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef0e8) {
            ctx->pc = 0x2EF108u;
            goto label_2ef108;
        }
    }
    ctx->pc = 0x2EF0F0u;
    // 0x2ef0f0: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2ef0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2ef0f4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2ef0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2ef0f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ef0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ef0fc: 0xdc429148  ld          $v0, -0x6EB8($v0)
    ctx->pc = 0x2ef0fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294938952)));
    // 0x2ef100: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2EF100u;
    {
        const bool branch_taken_0x2ef100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF100u;
        // 0x2ef104: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef100) {
            ctx->pc = 0x2EF134u;
            goto label_2ef134;
        }
    }
    ctx->pc = 0x2EF108u;
label_2ef108:
    // 0x2ef108: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EF108u;
    {
        const bool branch_taken_0x2ef108 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2ef108) {
            ctx->pc = 0x2EF12Cu;
            goto label_2ef12c;
        }
    }
    ctx->pc = 0x2EF110u;
label_2ef110:
    // 0x2ef110: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x2ef110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x2ef114: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2ef114u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2ef118: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2EF118u;
    SET_GPR_U32(ctx, 31, 0x2EF120u);
    ctx->pc = 0x2EF11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF118u;
    // 0x2ef11c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2EF118u, 0x2EF120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF120u;
label_2ef120:
    // 0x2ef120: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ef120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef124: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EF124u;
    {
        const bool branch_taken_0x2ef124 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2ef124) {
            ctx->pc = 0x2EF110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef110;
        }
    }
    ctx->pc = 0x2EF12Cu;
label_2ef12c:
    // 0x2ef12c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ef12cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef130: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ef130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef134:
    // 0x2ef134: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ef134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ef138: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF138u;
        // 0x2ef13c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF140u;
}
