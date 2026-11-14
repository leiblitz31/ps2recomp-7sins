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

// Function: sub_003AD0A0
// Address: 0x3ad0a0 - 0x3ad2b0
void sub_003AD0A0_0x3ad0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD0A0_0x3ad0a0");
#endif

    switch (ctx->pc) {
        case 0x3ad0a0u: goto label_3ad0a0;
        case 0x3ad0a4u: goto label_3ad0a4;
        case 0x3ad0a8u: goto label_3ad0a8;
        case 0x3ad0acu: goto label_3ad0ac;
        case 0x3ad0b0u: goto label_3ad0b0;
        case 0x3ad0b4u: goto label_3ad0b4;
        case 0x3ad0b8u: goto label_3ad0b8;
        case 0x3ad0bcu: goto label_3ad0bc;
        case 0x3ad0c0u: goto label_3ad0c0;
        case 0x3ad0c4u: goto label_3ad0c4;
        case 0x3ad0c8u: goto label_3ad0c8;
        case 0x3ad0ccu: goto label_3ad0cc;
        case 0x3ad0d0u: goto label_3ad0d0;
        case 0x3ad0d4u: goto label_3ad0d4;
        case 0x3ad0d8u: goto label_3ad0d8;
        case 0x3ad0dcu: goto label_3ad0dc;
        case 0x3ad0e0u: goto label_3ad0e0;
        case 0x3ad0e4u: goto label_3ad0e4;
        case 0x3ad0e8u: goto label_3ad0e8;
        case 0x3ad0ecu: goto label_3ad0ec;
        case 0x3ad0f0u: goto label_3ad0f0;
        case 0x3ad0f4u: goto label_3ad0f4;
        case 0x3ad0f8u: goto label_3ad0f8;
        case 0x3ad0fcu: goto label_3ad0fc;
        case 0x3ad100u: goto label_3ad100;
        case 0x3ad104u: goto label_3ad104;
        case 0x3ad108u: goto label_3ad108;
        case 0x3ad10cu: goto label_3ad10c;
        case 0x3ad110u: goto label_3ad110;
        case 0x3ad114u: goto label_3ad114;
        case 0x3ad118u: goto label_3ad118;
        case 0x3ad11cu: goto label_3ad11c;
        case 0x3ad120u: goto label_3ad120;
        case 0x3ad124u: goto label_3ad124;
        case 0x3ad128u: goto label_3ad128;
        case 0x3ad12cu: goto label_3ad12c;
        case 0x3ad130u: goto label_3ad130;
        case 0x3ad134u: goto label_3ad134;
        case 0x3ad138u: goto label_3ad138;
        case 0x3ad13cu: goto label_3ad13c;
        case 0x3ad140u: goto label_3ad140;
        case 0x3ad144u: goto label_3ad144;
        case 0x3ad148u: goto label_3ad148;
        case 0x3ad14cu: goto label_3ad14c;
        case 0x3ad150u: goto label_3ad150;
        case 0x3ad154u: goto label_3ad154;
        case 0x3ad158u: goto label_3ad158;
        case 0x3ad15cu: goto label_3ad15c;
        case 0x3ad160u: goto label_3ad160;
        case 0x3ad164u: goto label_3ad164;
        case 0x3ad168u: goto label_3ad168;
        case 0x3ad16cu: goto label_3ad16c;
        case 0x3ad170u: goto label_3ad170;
        case 0x3ad174u: goto label_3ad174;
        case 0x3ad178u: goto label_3ad178;
        case 0x3ad17cu: goto label_3ad17c;
        case 0x3ad180u: goto label_3ad180;
        case 0x3ad184u: goto label_3ad184;
        case 0x3ad188u: goto label_3ad188;
        case 0x3ad18cu: goto label_3ad18c;
        case 0x3ad190u: goto label_3ad190;
        case 0x3ad194u: goto label_3ad194;
        case 0x3ad198u: goto label_3ad198;
        case 0x3ad19cu: goto label_3ad19c;
        case 0x3ad1a0u: goto label_3ad1a0;
        case 0x3ad1a4u: goto label_3ad1a4;
        case 0x3ad1a8u: goto label_3ad1a8;
        case 0x3ad1acu: goto label_3ad1ac;
        case 0x3ad1b0u: goto label_3ad1b0;
        case 0x3ad1b4u: goto label_3ad1b4;
        case 0x3ad1b8u: goto label_3ad1b8;
        case 0x3ad1bcu: goto label_3ad1bc;
        case 0x3ad1c0u: goto label_3ad1c0;
        case 0x3ad1c4u: goto label_3ad1c4;
        case 0x3ad1c8u: goto label_3ad1c8;
        case 0x3ad1ccu: goto label_3ad1cc;
        case 0x3ad1d0u: goto label_3ad1d0;
        case 0x3ad1d4u: goto label_3ad1d4;
        case 0x3ad1d8u: goto label_3ad1d8;
        case 0x3ad1dcu: goto label_3ad1dc;
        case 0x3ad1e0u: goto label_3ad1e0;
        case 0x3ad1e4u: goto label_3ad1e4;
        case 0x3ad1e8u: goto label_3ad1e8;
        case 0x3ad1ecu: goto label_3ad1ec;
        case 0x3ad1f0u: goto label_3ad1f0;
        case 0x3ad1f4u: goto label_3ad1f4;
        case 0x3ad1f8u: goto label_3ad1f8;
        case 0x3ad1fcu: goto label_3ad1fc;
        case 0x3ad200u: goto label_3ad200;
        case 0x3ad204u: goto label_3ad204;
        case 0x3ad208u: goto label_3ad208;
        case 0x3ad20cu: goto label_3ad20c;
        case 0x3ad210u: goto label_3ad210;
        case 0x3ad214u: goto label_3ad214;
        case 0x3ad218u: goto label_3ad218;
        case 0x3ad21cu: goto label_3ad21c;
        case 0x3ad220u: goto label_3ad220;
        case 0x3ad224u: goto label_3ad224;
        case 0x3ad228u: goto label_3ad228;
        case 0x3ad22cu: goto label_3ad22c;
        case 0x3ad230u: goto label_3ad230;
        case 0x3ad234u: goto label_3ad234;
        case 0x3ad238u: goto label_3ad238;
        case 0x3ad23cu: goto label_3ad23c;
        case 0x3ad240u: goto label_3ad240;
        case 0x3ad244u: goto label_3ad244;
        case 0x3ad248u: goto label_3ad248;
        case 0x3ad24cu: goto label_3ad24c;
        case 0x3ad250u: goto label_3ad250;
        case 0x3ad254u: goto label_3ad254;
        case 0x3ad258u: goto label_3ad258;
        case 0x3ad25cu: goto label_3ad25c;
        case 0x3ad260u: goto label_3ad260;
        case 0x3ad264u: goto label_3ad264;
        case 0x3ad268u: goto label_3ad268;
        case 0x3ad26cu: goto label_3ad26c;
        case 0x3ad270u: goto label_3ad270;
        case 0x3ad274u: goto label_3ad274;
        case 0x3ad278u: goto label_3ad278;
        case 0x3ad27cu: goto label_3ad27c;
        case 0x3ad280u: goto label_3ad280;
        case 0x3ad284u: goto label_3ad284;
        case 0x3ad288u: goto label_3ad288;
        case 0x3ad28cu: goto label_3ad28c;
        case 0x3ad290u: goto label_3ad290;
        case 0x3ad294u: goto label_3ad294;
        case 0x3ad298u: goto label_3ad298;
        case 0x3ad29cu: goto label_3ad29c;
        case 0x3ad2a0u: goto label_3ad2a0;
        case 0x3ad2a4u: goto label_3ad2a4;
        case 0x3ad2a8u: goto label_3ad2a8;
        case 0x3ad2acu: goto label_3ad2ac;
        default: break;
    }

    ctx->pc = 0x3ad0a0u;

label_3ad0a0:
    // 0x3ad0a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3ad0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3ad0a4:
    // 0x3ad0a4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3ad0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3ad0a8:
    // 0x3ad0a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3ad0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3ad0ac:
    // 0x3ad0ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ad0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3ad0b0:
    // 0x3ad0b0: 0x8c50d398  lw          $s0, -0x2C68($v0)
    ctx->pc = 0x3ad0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955928)));
label_3ad0b4:
    // 0x3ad0b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ad0b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ad0b8:
    // 0x3ad0b8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3ad0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3ad0bc:
    // 0x3ad0bc: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_3ad0c0:
    if (ctx->pc == 0x3AD0C0u) {
        ctx->pc = 0x3AD0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD0BCu;
        // 0x3ad0c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD0C4u;
        goto label_3ad0c4;
    }
    ctx->pc = 0x3AD0BCu;
    {
        const bool branch_taken_0x3ad0bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD0BCu;
        // 0x3ad0c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad0bc) {
            ctx->pc = 0x3AD0F0u;
            goto label_3ad0f0;
        }
    }
    ctx->pc = 0x3AD0C4u;
label_3ad0c4:
    // 0x3ad0c4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3ad0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3ad0c8:
    // 0x3ad0c8: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x3ad0c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3ad0cc:
    // 0x3ad0cc: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x3ad0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_3ad0d0:
    // 0x3ad0d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ad0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ad0d4:
    // 0x3ad0d4: 0x40f809  jalr        $v0
label_3ad0d8:
    if (ctx->pc == 0x3AD0D8u) {
        ctx->pc = 0x3AD0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD0D4u;
        // 0x3ad0d8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD0DCu;
        goto label_3ad0dc;
    }
    ctx->pc = 0x3AD0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AD0DCu);
        ctx->pc = 0x3AD0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD0D4u;
        // 0x3ad0d8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD0D4u, 0x3AD0DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD0DCu;
label_3ad0dc:
    // 0x3ad0dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3ad0e0:
    if (ctx->pc == 0x3AD0E0u) {
        ctx->pc = 0x3AD0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD0DCu;
        // 0x3ad0e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD0E4u;
        goto label_3ad0e4;
    }
    ctx->pc = 0x3AD0DCu;
    {
        const bool branch_taken_0x3ad0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD0DCu;
        // 0x3ad0e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad0dc) {
            ctx->pc = 0x3AD0F4u;
            goto label_3ad0f4;
        }
    }
    ctx->pc = 0x3AD0E4u;
label_3ad0e4:
    // 0x3ad0e4: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x3ad0e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3ad0e8:
    // 0x3ad0e8: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
label_3ad0ec:
    if (ctx->pc == 0x3AD0ECu) {
        ctx->pc = 0x3AD0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD0E8u;
        // 0x3ad0ec: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD0F0u;
        goto label_3ad0f0;
    }
    ctx->pc = 0x3AD0E8u;
    {
        const bool branch_taken_0x3ad0e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ad0e8) {
            ctx->pc = 0x3AD0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD0E8u;
            // 0x3ad0ec: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ad0d0;
        }
    }
    ctx->pc = 0x3AD0F0u;
label_3ad0f0:
    // 0x3ad0f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ad0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad0f4:
    // 0x3ad0f4: 0x54a00002  bnel        $a1, $zero, . + 4 + (0x2 << 2)
label_3ad0f8:
    if (ctx->pc == 0x3AD0F8u) {
        ctx->pc = 0x3AD0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD0F4u;
        // 0x3ad0f8: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD0FCu;
        goto label_3ad0fc;
    }
    ctx->pc = 0x3AD0F4u;
    {
        const bool branch_taken_0x3ad0f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ad0f4) {
            ctx->pc = 0x3AD0F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD0F4u;
            // 0x3ad0f8: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD100u;
            goto label_3ad100;
        }
    }
    ctx->pc = 0x3AD0FCu;
label_3ad0fc:
    // 0x3ad0fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ad0fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad100:
    // 0x3ad100: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3ad100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ad104:
    // 0x3ad104: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3ad104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ad108:
    // 0x3ad108: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3ad108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ad10c:
    // 0x3ad10c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ad10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ad110:
    // 0x3ad110: 0x3e00008  jr          $ra
label_3ad114:
    if (ctx->pc == 0x3AD114u) {
        ctx->pc = 0x3AD114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD110u;
        // 0x3ad114: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD118u;
        goto label_3ad118;
    }
    ctx->pc = 0x3AD110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD110u;
        // 0x3ad114: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD118u;
label_3ad118:
    // 0x3ad118: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3ad118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3ad11c:
    // 0x3ad11c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3ad11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3ad120:
    // 0x3ad120: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ad120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3ad124:
    // 0x3ad124: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3ad124u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_3ad128:
    // 0x3ad128: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3ad128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3ad12c:
    // 0x3ad12c: 0x3c120062  lui         $s2, 0x62
    ctx->pc = 0x3ad12cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
label_3ad130:
    // 0x3ad130: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3ad130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3ad134:
    // 0x3ad134: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x3ad134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_3ad138:
    // 0x3ad138: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3ad138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3ad13c:
    // 0x3ad13c: 0x2652ce80  addiu       $s2, $s2, -0x3180
    ctx->pc = 0x3ad13cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954624));
label_3ad140:
    // 0x3ad140: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ad140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ad144:
    // 0x3ad144: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3ad144u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ad148:
    // 0x3ad148: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ad148u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ad14c:
    // 0x3ad14c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3ad14cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3ad150:
    // 0x3ad150: 0x8e440514  lw          $a0, 0x514($s2)
    ctx->pc = 0x3ad150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1300)));
label_3ad154:
    // 0x3ad154: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x3ad154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_3ad158:
    // 0x3ad158: 0x40f809  jalr        $v0
label_3ad15c:
    if (ctx->pc == 0x3AD15Cu) {
        ctx->pc = 0x3AD15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD158u;
        // 0x3ad15c: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD160u;
        goto label_3ad160;
    }
    ctx->pc = 0x3AD158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AD160u);
        ctx->pc = 0x3AD15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD158u;
        // 0x3ad15c: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD158u, 0x3AD160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD160u;
label_3ad160:
    // 0x3ad160: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ad160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ad164:
    // 0x3ad164: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x3ad164u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
label_3ad168:
    // 0x3ad168: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x3ad168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_3ad16c:
    // 0x3ad16c: 0x40f809  jalr        $v0
label_3ad170:
    if (ctx->pc == 0x3AD170u) {
        ctx->pc = 0x3AD170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD16Cu;
        // 0x3ad170: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD174u;
        goto label_3ad174;
    }
    ctx->pc = 0x3AD16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AD174u);
        ctx->pc = 0x3AD170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD16Cu;
        // 0x3ad170: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD16Cu, 0x3AD174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD174u;
label_3ad174:
    // 0x3ad174: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x3ad174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_3ad178:
    // 0x3ad178: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3ad178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3ad17c:
    // 0x3ad17c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x3ad17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ad180:
    // 0x3ad180: 0x60f809  jalr        $v1
label_3ad184:
    if (ctx->pc == 0x3AD184u) {
        ctx->pc = 0x3AD184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD180u;
        // 0x3ad184: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD188u;
        goto label_3ad188;
    }
    ctx->pc = 0x3AD180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AD188u);
        ctx->pc = 0x3AD184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD180u;
        // 0x3ad184: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD180u, 0x3AD188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD188u;
label_3ad188:
    // 0x3ad188: 0x8e0600cc  lw          $a2, 0xCC($s0)
    ctx->pc = 0x3ad188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_3ad18c:
    // 0x3ad18c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3ad18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ad190:
    // 0x3ad190: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ad190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ad194:
    // 0x3ad194: 0xc0f809  jalr        $a2
label_3ad198:
    if (ctx->pc == 0x3AD198u) {
        ctx->pc = 0x3AD198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD194u;
        // 0x3ad198: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD19Cu;
        goto label_3ad19c;
    }
    ctx->pc = 0x3AD194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3AD19Cu);
        ctx->pc = 0x3AD198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD194u;
        // 0x3ad198: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD194u, 0x3AD19Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD19Cu;
label_3ad19c:
    // 0x3ad19c: 0x8e430518  lw          $v1, 0x518($s2)
    ctx->pc = 0x3ad19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1304)));
label_3ad1a0:
    // 0x3ad1a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ad1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ad1a4:
    // 0x3ad1a4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3ad1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_3ad1a8:
    // 0x3ad1a8: 0xae510518  sw          $s1, 0x518($s2)
    ctx->pc = 0x3ad1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1304), GPR_U32(ctx, 17));
label_3ad1ac:
    // 0x3ad1ac: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3ad1acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ad1b0:
    // 0x3ad1b0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3ad1b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ad1b4:
    // 0x3ad1b4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ad1b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ad1b8:
    // 0x3ad1b8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3ad1b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ad1bc:
    // 0x3ad1bc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3ad1bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ad1c0:
    // 0x3ad1c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ad1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ad1c4:
    // 0x3ad1c4: 0x3e00008  jr          $ra
label_3ad1c8:
    if (ctx->pc == 0x3AD1C8u) {
        ctx->pc = 0x3AD1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD1C4u;
        // 0x3ad1c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD1CCu;
        goto label_3ad1cc;
    }
    ctx->pc = 0x3AD1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD1C4u;
        // 0x3ad1c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD1CCu;
label_3ad1cc:
    // 0x3ad1cc: 0x0  nop
    ctx->pc = 0x3ad1ccu;
    // NOP
label_3ad1d0:
    // 0x3ad1d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3ad1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3ad1d4:
    // 0x3ad1d4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3ad1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3ad1d8:
    // 0x3ad1d8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3ad1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3ad1dc:
    // 0x3ad1dc: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x3ad1dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ad1e0:
    // 0x3ad1e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ad1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3ad1e4:
    // 0x3ad1e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3ad1e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ad1e8:
    // 0x3ad1e8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3ad1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3ad1ec:
    // 0x3ad1ec: 0x2442ce80  addiu       $v0, $v0, -0x3180
    ctx->pc = 0x3ad1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
label_3ad1f0:
    // 0x3ad1f0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3ad1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3ad1f4:
    // 0x3ad1f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3ad1f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ad1f8:
    // 0x3ad1f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ad1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3ad1fc:
    // 0x3ad1fc: 0x8c450518  lw          $a1, 0x518($v0)
    ctx->pc = 0x3ad1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1304)));
label_3ad200:
    // 0x3ad200: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_3ad204:
    if (ctx->pc == 0x3AD204u) {
        ctx->pc = 0x3AD204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD200u;
        // 0x3ad204: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD208u;
        goto label_3ad208;
    }
    ctx->pc = 0x3AD200u;
    {
        const bool branch_taken_0x3ad200 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD200u;
        // 0x3ad204: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad200) {
            ctx->pc = 0x3AD234u;
            goto label_3ad234;
        }
    }
    ctx->pc = 0x3AD208u;
label_3ad208:
    // 0x3ad208: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ad208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3ad20c:
    // 0x3ad20c: 0x0  nop
    ctx->pc = 0x3ad20cu;
    // NOP
label_3ad210:
    // 0x3ad210: 0x56420005  bnel        $s2, $v0, . + 4 + (0x5 << 2)
label_3ad214:
    if (ctx->pc == 0x3AD214u) {
        ctx->pc = 0x3AD214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD210u;
        // 0x3ad214: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD218u;
        goto label_3ad218;
    }
    ctx->pc = 0x3AD210u;
    {
        const bool branch_taken_0x3ad210 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ad210) {
            ctx->pc = 0x3AD214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD210u;
            // 0x3ad214: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD228u;
            goto label_3ad228;
        }
    }
    ctx->pc = 0x3AD218u;
label_3ad218:
    // 0x3ad218: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
label_3ad21c:
    if (ctx->pc == 0x3AD21Cu) {
        ctx->pc = 0x3AD21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD218u;
        // 0x3ad21c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD220u;
        goto label_3ad220;
    }
    ctx->pc = 0x3AD218u;
    {
        const bool branch_taken_0x3ad218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ad218) {
            ctx->pc = 0x3AD21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD218u;
            // 0x3ad21c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD220u;
            goto label_3ad220;
        }
    }
    ctx->pc = 0x3AD220u;
label_3ad220:
    // 0x3ad220: 0x10000005  b           . + 4 + (0x5 << 2)
label_3ad224:
    if (ctx->pc == 0x3AD224u) {
        ctx->pc = 0x3AD224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD220u;
        // 0x3ad224: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD228u;
        goto label_3ad228;
    }
    ctx->pc = 0x3AD220u;
    {
        const bool branch_taken_0x3ad220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD220u;
        // 0x3ad224: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad220) {
            ctx->pc = 0x3AD238u;
            goto label_3ad238;
        }
    }
    ctx->pc = 0x3AD228u;
label_3ad228:
    // 0x3ad228: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x3ad228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3ad22c:
    // 0x3ad22c: 0x54a0fff8  bnel        $a1, $zero, . + 4 + (-0x8 << 2)
label_3ad230:
    if (ctx->pc == 0x3AD230u) {
        ctx->pc = 0x3AD230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD22Cu;
        // 0x3ad230: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD234u;
        goto label_3ad234;
    }
    ctx->pc = 0x3AD22Cu;
    {
        const bool branch_taken_0x3ad22c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ad22c) {
            ctx->pc = 0x3AD230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD22Cu;
            // 0x3ad230: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ad210;
        }
    }
    ctx->pc = 0x3AD234u;
label_3ad234:
    // 0x3ad234: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ad234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad238:
    // 0x3ad238: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_3ad23c:
    if (ctx->pc == 0x3AD23Cu) {
        ctx->pc = 0x3AD23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD238u;
        // 0x3ad23c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD240u;
        goto label_3ad240;
    }
    ctx->pc = 0x3AD238u;
    {
        const bool branch_taken_0x3ad238 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD238u;
        // 0x3ad23c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad238) {
            ctx->pc = 0x3AD28Cu;
            goto label_3ad28c;
        }
    }
    ctx->pc = 0x3AD240u;
label_3ad240:
    // 0x3ad240: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_3ad244:
    if (ctx->pc == 0x3AD244u) {
        ctx->pc = 0x3AD244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD240u;
        // 0x3ad244: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD248u;
        goto label_3ad248;
    }
    ctx->pc = 0x3AD240u;
    {
        const bool branch_taken_0x3ad240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad240) {
            ctx->pc = 0x3AD244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD240u;
            // 0x3ad244: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD254u;
            goto label_3ad254;
        }
    }
    ctx->pc = 0x3AD248u;
label_3ad248:
    // 0x3ad248: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3ad248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3ad24c:
    // 0x3ad24c: 0x10000003  b           . + 4 + (0x3 << 2)
label_3ad250:
    if (ctx->pc == 0x3AD250u) {
        ctx->pc = 0x3AD250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD24Cu;
        // 0x3ad250: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD254u;
        goto label_3ad254;
    }
    ctx->pc = 0x3AD24Cu;
    {
        const bool branch_taken_0x3ad24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD24Cu;
        // 0x3ad250: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad24c) {
            ctx->pc = 0x3AD25Cu;
            goto label_3ad25c;
        }
    }
    ctx->pc = 0x3AD254u;
label_3ad254:
    // 0x3ad254: 0x2662ce80  addiu       $v0, $s3, -0x3180
    ctx->pc = 0x3ad254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954624));
label_3ad258:
    // 0x3ad258: 0xac430518  sw          $v1, 0x518($v0)
    ctx->pc = 0x3ad258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1304), GPR_U32(ctx, 3));
label_3ad25c:
    // 0x3ad25c: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3ad25cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_3ad260:
    // 0x3ad260: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x3ad260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_3ad264:
    // 0x3ad264: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x3ad264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3ad268:
    // 0x3ad268: 0x40f809  jalr        $v0
label_3ad26c:
    if (ctx->pc == 0x3AD26Cu) {
        ctx->pc = 0x3AD26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD268u;
        // 0x3ad26c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD270u;
        goto label_3ad270;
    }
    ctx->pc = 0x3AD268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AD270u);
        ctx->pc = 0x3AD26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD268u;
        // 0x3ad26c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD268u, 0x3AD270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD270u;
label_3ad270:
    // 0x3ad270: 0x2663ce80  addiu       $v1, $s3, -0x3180
    ctx->pc = 0x3ad270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954624));
label_3ad274:
    // 0x3ad274: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x3ad274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_3ad278:
    // 0x3ad278: 0x8c640514  lw          $a0, 0x514($v1)
    ctx->pc = 0x3ad278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1300)));
label_3ad27c:
    // 0x3ad27c: 0x40f809  jalr        $v0
label_3ad280:
    if (ctx->pc == 0x3AD280u) {
        ctx->pc = 0x3AD280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD27Cu;
        // 0x3ad280: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD284u;
        goto label_3ad284;
    }
    ctx->pc = 0x3AD27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AD284u);
        ctx->pc = 0x3AD280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD27Cu;
        // 0x3ad280: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD27Cu, 0x3AD284u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD284u;
label_3ad284:
    // 0x3ad284: 0x10000002  b           . + 4 + (0x2 << 2)
label_3ad288:
    if (ctx->pc == 0x3AD288u) {
        ctx->pc = 0x3AD288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD284u;
        // 0x3ad288: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD28Cu;
        goto label_3ad28c;
    }
    ctx->pc = 0x3AD284u;
    {
        const bool branch_taken_0x3ad284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD284u;
        // 0x3ad288: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad284) {
            ctx->pc = 0x3AD290u;
            goto label_3ad290;
        }
    }
    ctx->pc = 0x3AD28Cu;
label_3ad28c:
    // 0x3ad28c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ad28cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad290:
    // 0x3ad290: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3ad290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ad294:
    // 0x3ad294: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3ad294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ad298:
    // 0x3ad298: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ad298u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ad29c:
    // 0x3ad29c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3ad29cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ad2a0:
    // 0x3ad2a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ad2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ad2a4:
    // 0x3ad2a4: 0x3e00008  jr          $ra
label_3ad2a8:
    if (ctx->pc == 0x3AD2A8u) {
        ctx->pc = 0x3AD2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD2A4u;
        // 0x3ad2a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD2ACu;
        goto label_3ad2ac;
    }
    ctx->pc = 0x3AD2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD2A4u;
        // 0x3ad2a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD2ACu;
label_3ad2ac:
    // 0x3ad2ac: 0x0  nop
    ctx->pc = 0x3ad2acu;
    // NOP
    ctx->pc = 0x3ad2b0u;
}
