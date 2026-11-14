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

// Function: sub_00343280
// Address: 0x343280 - 0x3433a0
void sub_00343280_0x343280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343280_0x343280");
#endif

    switch (ctx->pc) {
        case 0x343280u: goto label_343280;
        case 0x343284u: goto label_343284;
        case 0x343288u: goto label_343288;
        case 0x34328cu: goto label_34328c;
        case 0x343290u: goto label_343290;
        case 0x343294u: goto label_343294;
        case 0x343298u: goto label_343298;
        case 0x34329cu: goto label_34329c;
        case 0x3432a0u: goto label_3432a0;
        case 0x3432a4u: goto label_3432a4;
        case 0x3432a8u: goto label_3432a8;
        case 0x3432acu: goto label_3432ac;
        case 0x3432b0u: goto label_3432b0;
        case 0x3432b4u: goto label_3432b4;
        case 0x3432b8u: goto label_3432b8;
        case 0x3432bcu: goto label_3432bc;
        case 0x3432c0u: goto label_3432c0;
        case 0x3432c4u: goto label_3432c4;
        case 0x3432c8u: goto label_3432c8;
        case 0x3432ccu: goto label_3432cc;
        case 0x3432d0u: goto label_3432d0;
        case 0x3432d4u: goto label_3432d4;
        case 0x3432d8u: goto label_3432d8;
        case 0x3432dcu: goto label_3432dc;
        case 0x3432e0u: goto label_3432e0;
        case 0x3432e4u: goto label_3432e4;
        case 0x3432e8u: goto label_3432e8;
        case 0x3432ecu: goto label_3432ec;
        case 0x3432f0u: goto label_3432f0;
        case 0x3432f4u: goto label_3432f4;
        case 0x3432f8u: goto label_3432f8;
        case 0x3432fcu: goto label_3432fc;
        case 0x343300u: goto label_343300;
        case 0x343304u: goto label_343304;
        case 0x343308u: goto label_343308;
        case 0x34330cu: goto label_34330c;
        case 0x343310u: goto label_343310;
        case 0x343314u: goto label_343314;
        case 0x343318u: goto label_343318;
        case 0x34331cu: goto label_34331c;
        case 0x343320u: goto label_343320;
        case 0x343324u: goto label_343324;
        case 0x343328u: goto label_343328;
        case 0x34332cu: goto label_34332c;
        case 0x343330u: goto label_343330;
        case 0x343334u: goto label_343334;
        case 0x343338u: goto label_343338;
        case 0x34333cu: goto label_34333c;
        case 0x343340u: goto label_343340;
        case 0x343344u: goto label_343344;
        case 0x343348u: goto label_343348;
        case 0x34334cu: goto label_34334c;
        case 0x343350u: goto label_343350;
        case 0x343354u: goto label_343354;
        case 0x343358u: goto label_343358;
        case 0x34335cu: goto label_34335c;
        case 0x343360u: goto label_343360;
        case 0x343364u: goto label_343364;
        case 0x343368u: goto label_343368;
        case 0x34336cu: goto label_34336c;
        case 0x343370u: goto label_343370;
        case 0x343374u: goto label_343374;
        case 0x343378u: goto label_343378;
        case 0x34337cu: goto label_34337c;
        case 0x343380u: goto label_343380;
        case 0x343384u: goto label_343384;
        case 0x343388u: goto label_343388;
        case 0x34338cu: goto label_34338c;
        case 0x343390u: goto label_343390;
        case 0x343394u: goto label_343394;
        case 0x343398u: goto label_343398;
        case 0x34339cu: goto label_34339c;
        default: break;
    }

    ctx->pc = 0x343280u;

label_343280:
    // 0x343280: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x343280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_343284:
    // 0x343284: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x343284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_343288:
    // 0x343288: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x343288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_34328c:
    // 0x34328c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x34328cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_343290:
    // 0x343290: 0x24100014  addiu       $s0, $zero, 0x14
    ctx->pc = 0x343290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_343294:
    // 0x343294: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x343294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_343298:
    // 0x343298: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x343298u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34329c:
    // 0x34329c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x34329cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_3432a0:
    // 0x3432a0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3432a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3432a4:
    // 0x3432a4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3432a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3432a8:
    // 0x3432a8: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x3432a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3432ac:
    // 0x3432ac: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3432acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3432b0:
    // 0x3432b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3432b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3432b4:
    // 0x3432b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3432b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3432b8:
    // 0x3432b8: 0x8c43c344  lw          $v1, -0x3CBC($v0)
    ctx->pc = 0x3432b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951748)));
label_3432bc:
    // 0x3432bc: 0x8e72000c  lw          $s2, 0xC($s3)
    ctx->pc = 0x3432bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3432c0:
    // 0x3432c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3432c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3432c4:
    // 0x3432c4: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_3432c8:
    if (ctx->pc == 0x3432C8u) {
        ctx->pc = 0x3432C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3432C4u;
        // 0x3432c8: 0x8e710018  lw          $s1, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3432CCu;
        goto label_3432cc;
    }
    ctx->pc = 0x3432C4u;
    {
        const bool branch_taken_0x3432c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3432C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3432C4u;
        // 0x3432c8: 0x8e710018  lw          $s1, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3432c4) {
            ctx->pc = 0x343308u;
            goto label_343308;
        }
    }
    ctx->pc = 0x3432CCu;
label_3432cc:
    // 0x3432cc: 0xc0d12b4  jal         func_344AD0
label_3432d0:
    if (ctx->pc == 0x3432D0u) {
        ctx->pc = 0x3432D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3432CCu;
        // 0x3432d0: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3432D4u;
        goto label_3432d4;
    }
    ctx->pc = 0x3432CCu;
    SET_GPR_U32(ctx, 31, 0x3432D4u);
    ctx->pc = 0x3432D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3432CCu;
    // 0x3432d0: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344AD0u, 0x3432CCu, 0x3432D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3432D4u;
label_3432d4:
    // 0x3432d4: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x3432d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3432d8:
    // 0x3432d8: 0xc0d12b4  jal         func_344AD0
label_3432dc:
    if (ctx->pc == 0x3432DCu) {
        ctx->pc = 0x3432DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3432D8u;
        // 0x3432dc: 0x24500020  addiu       $s0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3432E0u;
        goto label_3432e0;
    }
    ctx->pc = 0x3432D8u;
    SET_GPR_U32(ctx, 31, 0x3432E0u);
    ctx->pc = 0x3432DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3432D8u;
    // 0x3432dc: 0x24500020  addiu       $s0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344AD0u, 0x3432D8u, 0x3432E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3432E0u;
label_3432e0:
    // 0x3432e0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3432e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3432e4:
    // 0x3432e4: 0xc0d0e98  jal         func_343A60
label_3432e8:
    if (ctx->pc == 0x3432E8u) {
        ctx->pc = 0x3432E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3432E4u;
        // 0x3432e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3432ECu;
        goto label_3432ec;
    }
    ctx->pc = 0x3432E4u;
    SET_GPR_U32(ctx, 31, 0x3432ECu);
    ctx->pc = 0x3432E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3432E4u;
    // 0x3432e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343A60u, 0x3432E4u, 0x3432ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3432ECu;
label_3432ec:
    // 0x3432ec: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x3432ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_3432f0:
    // 0x3432f0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3432f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3432f4:
    // 0x3432f4: 0xc0d04fc  jal         func_3413F0
label_3432f8:
    if (ctx->pc == 0x3432F8u) {
        ctx->pc = 0x3432F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3432F4u;
        // 0x3432f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3432FCu;
        goto label_3432fc;
    }
    ctx->pc = 0x3432F4u;
    SET_GPR_U32(ctx, 31, 0x3432FCu);
    ctx->pc = 0x3432F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3432F4u;
    // 0x3432f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3413F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3413F0u, 0x3432F4u, 0x3432FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3432FCu;
label_3432fc:
    // 0x3432fc: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x3432fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_343300:
    // 0x343300: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x343300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_343304:
    // 0x343304: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x343304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_343308:
    // 0x343308: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x343308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_34330c:
    // 0x34330c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34330cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_343310:
    // 0x343310: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
label_343314:
    if (ctx->pc == 0x343314u) {
        ctx->pc = 0x343314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343310u;
        // 0x343314: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343318u;
        goto label_343318;
    }
    ctx->pc = 0x343310u;
    {
        const bool branch_taken_0x343310 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x343314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343310u;
        // 0x343314: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343310) {
            ctx->pc = 0x343364u;
            goto label_343364;
        }
    }
    ctx->pc = 0x343318u;
label_343318:
    // 0x343318: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x343318u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34331c:
    // 0x34331c: 0x0  nop
    ctx->pc = 0x34331cu;
    // NOP
label_343320:
    // 0x343320: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x343320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_343324:
    // 0x343324: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x343324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_343328:
    // 0x343328: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x343328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_34332c:
    // 0x34332c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_343330:
    if (ctx->pc == 0x343330u) {
        ctx->pc = 0x343330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34332Cu;
        // 0x343330: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343334u;
        goto label_343334;
    }
    ctx->pc = 0x34332Cu;
    {
        const bool branch_taken_0x34332c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34332Cu;
        // 0x343330: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34332c) {
            ctx->pc = 0x343354u;
            goto label_343354;
        }
    }
    ctx->pc = 0x343334u;
label_343334:
    // 0x343334: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x343334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_343338:
    // 0x343338: 0x40f809  jalr        $v0
label_34333c:
    if (ctx->pc == 0x34333Cu) {
        ctx->pc = 0x34333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343338u;
        // 0x34333c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343340u;
        goto label_343340;
    }
    ctx->pc = 0x343338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x343340u);
        ctx->pc = 0x34333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343338u;
        // 0x34333c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343338u, 0x343340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x343340u;
label_343340:
    // 0x343340: 0x1453000c  bne         $v0, $s3, . + 4 + (0xC << 2)
label_343344:
    if (ctx->pc == 0x343344u) {
        ctx->pc = 0x343344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343340u;
        // 0x343344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343348u;
        goto label_343348;
    }
    ctx->pc = 0x343340u;
    {
        const bool branch_taken_0x343340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x343344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343340u;
        // 0x343344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343340) {
            ctx->pc = 0x343374u;
            goto label_343374;
        }
    }
    ctx->pc = 0x343348u;
label_343348:
    // 0x343348: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x343348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_34334c:
    // 0x34334c: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x34334cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_343350:
    // 0x343350: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x343350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_343354:
    // 0x343354: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x343354u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_343358:
    // 0x343358: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x343358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_34335c:
    // 0x34335c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_343360:
    if (ctx->pc == 0x343360u) {
        ctx->pc = 0x343360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34335Cu;
        // 0x343360: 0x2694002c  addiu       $s4, $s4, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343364u;
        goto label_343364;
    }
    ctx->pc = 0x34335Cu;
    {
        const bool branch_taken_0x34335c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x343360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34335Cu;
        // 0x343360: 0x2694002c  addiu       $s4, $s4, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34335c) {
            ctx->pc = 0x343320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_343320;
        }
    }
    ctx->pc = 0x343364u;
label_343364:
    // 0x343364: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x343364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_343368:
    // 0x343368: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x343368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_34336c:
    // 0x34336c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x34336cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_343370:
    // 0x343370: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x343370u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_343374:
    // 0x343374: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x343374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_343378:
    // 0x343378: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x343378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_34337c:
    // 0x34337c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x34337cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_343380:
    // 0x343380: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x343380u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_343384:
    // 0x343384: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x343384u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_343388:
    // 0x343388: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x343388u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_34338c:
    // 0x34338c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x34338cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_343390:
    // 0x343390: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x343390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_343394:
    // 0x343394: 0x3e00008  jr          $ra
label_343398:
    if (ctx->pc == 0x343398u) {
        ctx->pc = 0x343398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343394u;
        // 0x343398: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34339Cu;
        goto label_34339c;
    }
    ctx->pc = 0x343394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343394u;
        // 0x343398: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34339Cu;
label_34339c:
    // 0x34339c: 0x0  nop
    ctx->pc = 0x34339cu;
    // NOP
    ctx->pc = 0x3433a0u;
}
