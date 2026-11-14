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

// Function: sub_003B9480
// Address: 0x3b9480 - 0x3b9638
void sub_003B9480_0x3b9480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B9480_0x3b9480");
#endif

    switch (ctx->pc) {
        case 0x3b9480u: goto label_3b9480;
        case 0x3b9484u: goto label_3b9484;
        case 0x3b9488u: goto label_3b9488;
        case 0x3b948cu: goto label_3b948c;
        case 0x3b9490u: goto label_3b9490;
        case 0x3b9494u: goto label_3b9494;
        case 0x3b9498u: goto label_3b9498;
        case 0x3b949cu: goto label_3b949c;
        case 0x3b94a0u: goto label_3b94a0;
        case 0x3b94a4u: goto label_3b94a4;
        case 0x3b94a8u: goto label_3b94a8;
        case 0x3b94acu: goto label_3b94ac;
        case 0x3b94b0u: goto label_3b94b0;
        case 0x3b94b4u: goto label_3b94b4;
        case 0x3b94b8u: goto label_3b94b8;
        case 0x3b94bcu: goto label_3b94bc;
        case 0x3b94c0u: goto label_3b94c0;
        case 0x3b94c4u: goto label_3b94c4;
        case 0x3b94c8u: goto label_3b94c8;
        case 0x3b94ccu: goto label_3b94cc;
        case 0x3b94d0u: goto label_3b94d0;
        case 0x3b94d4u: goto label_3b94d4;
        case 0x3b94d8u: goto label_3b94d8;
        case 0x3b94dcu: goto label_3b94dc;
        case 0x3b94e0u: goto label_3b94e0;
        case 0x3b94e4u: goto label_3b94e4;
        case 0x3b94e8u: goto label_3b94e8;
        case 0x3b94ecu: goto label_3b94ec;
        case 0x3b94f0u: goto label_3b94f0;
        case 0x3b94f4u: goto label_3b94f4;
        case 0x3b94f8u: goto label_3b94f8;
        case 0x3b94fcu: goto label_3b94fc;
        case 0x3b9500u: goto label_3b9500;
        case 0x3b9504u: goto label_3b9504;
        case 0x3b9508u: goto label_3b9508;
        case 0x3b950cu: goto label_3b950c;
        case 0x3b9510u: goto label_3b9510;
        case 0x3b9514u: goto label_3b9514;
        case 0x3b9518u: goto label_3b9518;
        case 0x3b951cu: goto label_3b951c;
        case 0x3b9520u: goto label_3b9520;
        case 0x3b9524u: goto label_3b9524;
        case 0x3b9528u: goto label_3b9528;
        case 0x3b952cu: goto label_3b952c;
        case 0x3b9530u: goto label_3b9530;
        case 0x3b9534u: goto label_3b9534;
        case 0x3b9538u: goto label_3b9538;
        case 0x3b953cu: goto label_3b953c;
        case 0x3b9540u: goto label_3b9540;
        case 0x3b9544u: goto label_3b9544;
        case 0x3b9548u: goto label_3b9548;
        case 0x3b954cu: goto label_3b954c;
        case 0x3b9550u: goto label_3b9550;
        case 0x3b9554u: goto label_3b9554;
        case 0x3b9558u: goto label_3b9558;
        case 0x3b955cu: goto label_3b955c;
        case 0x3b9560u: goto label_3b9560;
        case 0x3b9564u: goto label_3b9564;
        case 0x3b9568u: goto label_3b9568;
        case 0x3b956cu: goto label_3b956c;
        case 0x3b9570u: goto label_3b9570;
        case 0x3b9574u: goto label_3b9574;
        case 0x3b9578u: goto label_3b9578;
        case 0x3b957cu: goto label_3b957c;
        case 0x3b9580u: goto label_3b9580;
        case 0x3b9584u: goto label_3b9584;
        case 0x3b9588u: goto label_3b9588;
        case 0x3b958cu: goto label_3b958c;
        case 0x3b9590u: goto label_3b9590;
        case 0x3b9594u: goto label_3b9594;
        case 0x3b9598u: goto label_3b9598;
        case 0x3b959cu: goto label_3b959c;
        case 0x3b95a0u: goto label_3b95a0;
        case 0x3b95a4u: goto label_3b95a4;
        case 0x3b95a8u: goto label_3b95a8;
        case 0x3b95acu: goto label_3b95ac;
        case 0x3b95b0u: goto label_3b95b0;
        case 0x3b95b4u: goto label_3b95b4;
        case 0x3b95b8u: goto label_3b95b8;
        case 0x3b95bcu: goto label_3b95bc;
        case 0x3b95c0u: goto label_3b95c0;
        case 0x3b95c4u: goto label_3b95c4;
        case 0x3b95c8u: goto label_3b95c8;
        case 0x3b95ccu: goto label_3b95cc;
        case 0x3b95d0u: goto label_3b95d0;
        case 0x3b95d4u: goto label_3b95d4;
        case 0x3b95d8u: goto label_3b95d8;
        case 0x3b95dcu: goto label_3b95dc;
        case 0x3b95e0u: goto label_3b95e0;
        case 0x3b95e4u: goto label_3b95e4;
        case 0x3b95e8u: goto label_3b95e8;
        case 0x3b95ecu: goto label_3b95ec;
        case 0x3b95f0u: goto label_3b95f0;
        case 0x3b95f4u: goto label_3b95f4;
        case 0x3b95f8u: goto label_3b95f8;
        case 0x3b95fcu: goto label_3b95fc;
        case 0x3b9600u: goto label_3b9600;
        case 0x3b9604u: goto label_3b9604;
        case 0x3b9608u: goto label_3b9608;
        case 0x3b960cu: goto label_3b960c;
        case 0x3b9610u: goto label_3b9610;
        case 0x3b9614u: goto label_3b9614;
        case 0x3b9618u: goto label_3b9618;
        case 0x3b961cu: goto label_3b961c;
        case 0x3b9620u: goto label_3b9620;
        case 0x3b9624u: goto label_3b9624;
        case 0x3b9628u: goto label_3b9628;
        case 0x3b962cu: goto label_3b962c;
        case 0x3b9630u: goto label_3b9630;
        case 0x3b9634u: goto label_3b9634;
        default: break;
    }

    ctx->pc = 0x3b9480u;

label_3b9480:
    // 0x3b9480: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b9480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3b9484:
    // 0x3b9484: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3b9484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3b9488:
    // 0x3b9488: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3b9488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3b948c:
    // 0x3b948c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3b948cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b9490:
    // 0x3b9490: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3b9490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3b9494:
    // 0x3b9494: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b9494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3b9498:
    // 0x3b9498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b9498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b949c:
    // 0x3b949c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3b949cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3b94a0:
    // 0x3b94a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3b94a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3b94a4:
    // 0x3b94a4: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
label_3b94a8:
    if (ctx->pc == 0x3B94A8u) {
        ctx->pc = 0x3B94A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B94A4u;
        // 0x3b94a8: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B94ACu;
        goto label_3b94ac;
    }
    ctx->pc = 0x3B94A4u;
    {
        const bool branch_taken_0x3b94a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B94A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B94A4u;
        // 0x3b94a8: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b94a4) {
            ctx->pc = 0x3B9614u;
            goto label_3b9614;
        }
    }
    ctx->pc = 0x3B94ACu;
label_3b94ac:
    // 0x3b94ac: 0xc10376a  jal         func_40DDA8
label_3b94b0:
    if (ctx->pc == 0x3B94B0u) {
        ctx->pc = 0x3B94B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B94ACu;
        // 0x3b94b0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B94B4u;
        goto label_3b94b4;
    }
    ctx->pc = 0x3B94ACu;
    SET_GPR_U32(ctx, 31, 0x3B94B4u);
    ctx->pc = 0x3B94B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B94ACu;
    // 0x3b94b0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B94ACu, 0x3B94B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B94B4u;
label_3b94b4:
    // 0x3b94b4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3b94b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3b94b8:
    // 0x3b94b8: 0xc1036d2  jal         func_40DB48
label_3b94bc:
    if (ctx->pc == 0x3B94BCu) {
        ctx->pc = 0x3B94BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B94B8u;
        // 0x3b94bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B94C0u;
        goto label_3b94c0;
    }
    ctx->pc = 0x3B94B8u;
    SET_GPR_U32(ctx, 31, 0x3B94C0u);
    ctx->pc = 0x3B94BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B94B8u;
    // 0x3b94bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B94B8u, 0x3B94C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B94C0u;
label_3b94c0:
    // 0x3b94c0: 0x1a000045  blez        $s0, . + 4 + (0x45 << 2)
label_3b94c4:
    if (ctx->pc == 0x3B94C4u) {
        ctx->pc = 0x3B94C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B94C0u;
        // 0x3b94c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B94C8u;
        goto label_3b94c8;
    }
    ctx->pc = 0x3B94C0u;
    {
        const bool branch_taken_0x3b94c0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3B94C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B94C0u;
        // 0x3b94c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b94c0) {
            ctx->pc = 0x3B95D8u;
            goto label_3b95d8;
        }
    }
    ctx->pc = 0x3B94C8u;
label_3b94c8:
    // 0x3b94c8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3b94c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b94cc:
    // 0x3b94cc: 0x121023  negu        $v0, $s2
    ctx->pc = 0x3b94ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
label_3b94d0:
    // 0x3b94d0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3b94d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3b94d4:
    // 0x3b94d4: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_3b94d8:
    if (ctx->pc == 0x3B94D8u) {
        ctx->pc = 0x3B94D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B94D4u;
        // 0x3b94d8: 0x26300008  addiu       $s0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B94DCu;
        goto label_3b94dc;
    }
    ctx->pc = 0x3B94D4u;
    {
        const bool branch_taken_0x3b94d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B94D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B94D4u;
        // 0x3b94d8: 0x26300008  addiu       $s0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b94d4) {
            ctx->pc = 0x3B9554u;
            goto label_3b9554;
        }
    }
    ctx->pc = 0x3B94DCu;
label_3b94dc:
    // 0x3b94dc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3b94dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3b94e0:
    // 0x3b94e0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_3b94e4:
    if (ctx->pc == 0x3B94E4u) {
        ctx->pc = 0x3B94E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B94E0u;
        // 0x3b94e4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B94E8u;
        goto label_3b94e8;
    }
    ctx->pc = 0x3B94E0u;
    {
        const bool branch_taken_0x3b94e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B94E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B94E0u;
        // 0x3b94e4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b94e0) {
            ctx->pc = 0x3B9530u;
            goto label_3b9530;
        }
    }
    ctx->pc = 0x3B94E8u;
label_3b94e8:
    // 0x3b94e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3b94ec:
    if (ctx->pc == 0x3B94ECu) {
        ctx->pc = 0x3B94ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B94E8u;
        // 0x3b94ec: 0x8e04fffc  lw          $a0, -0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B94F0u;
        goto label_3b94f0;
    }
    ctx->pc = 0x3B94E8u;
    {
        const bool branch_taken_0x3b94e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B94ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B94E8u;
        // 0x3b94ec: 0x8e04fffc  lw          $a0, -0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b94e8) {
            ctx->pc = 0x3B9510u;
            goto label_3b9510;
        }
    }
    ctx->pc = 0x3B94F0u;
label_3b94f0:
    // 0x3b94f0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3b94f4:
    if (ctx->pc == 0x3B94F4u) {
        ctx->pc = 0x3B94F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B94F0u;
        // 0x3b94f4: 0x26300014  addiu       $s0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B94F8u;
        goto label_3b94f8;
    }
    ctx->pc = 0x3B94F0u;
    {
        const bool branch_taken_0x3b94f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B94F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B94F0u;
        // 0x3b94f4: 0x26300014  addiu       $s0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b94f0) {
            ctx->pc = 0x3B9508u;
            goto label_3b9508;
        }
    }
    ctx->pc = 0x3B94F8u;
label_3b94f8:
    // 0x3b94f8: 0xc0ec620  jal         func_3B1880
label_3b94fc:
    if (ctx->pc == 0x3B94FCu) {
        ctx->pc = 0x3B9500u;
        goto label_3b9500;
    }
    ctx->pc = 0x3B94F8u;
    SET_GPR_U32(ctx, 31, 0x3B9500u);
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3B94F8u, 0x3B9500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9500u;
label_3b9500:
    // 0x3b9500: 0xc0e9e5c  jal         func_3A7970
label_3b9504:
    if (ctx->pc == 0x3B9504u) {
        ctx->pc = 0x3B9504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9500u;
        // 0x3b9504: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9508u;
        goto label_3b9508;
    }
    ctx->pc = 0x3B9500u;
    SET_GPR_U32(ctx, 31, 0x3B9508u);
    ctx->pc = 0x3B9504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9500u;
    // 0x3b9504: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7970u, 0x3B9500u, 0x3B9508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9508u;
label_3b9508:
    // 0x3b9508: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3b9508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3b950c:
    // 0x3b950c: 0x8e04fffc  lw          $a0, -0x4($s0)
    ctx->pc = 0x3b950cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
label_3b9510:
    // 0x3b9510: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3b9514:
    if (ctx->pc == 0x3B9514u) {
        ctx->pc = 0x3B9514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9510u;
        // 0x3b9514: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9518u;
        goto label_3b9518;
    }
    ctx->pc = 0x3B9510u;
    {
        const bool branch_taken_0x3b9510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9510) {
            ctx->pc = 0x3B9514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9510u;
            // 0x3b9514: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B952Cu;
            goto label_3b952c;
        }
    }
    ctx->pc = 0x3B9518u;
label_3b9518:
    // 0x3b9518: 0xc0ec620  jal         func_3B1880
label_3b951c:
    if (ctx->pc == 0x3B951Cu) {
        ctx->pc = 0x3B9520u;
        goto label_3b9520;
    }
    ctx->pc = 0x3B9518u;
    SET_GPR_U32(ctx, 31, 0x3B9520u);
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3B9518u, 0x3B9520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9520u;
label_3b9520:
    // 0x3b9520: 0xc0e9e5c  jal         func_3A7970
label_3b9524:
    if (ctx->pc == 0x3B9524u) {
        ctx->pc = 0x3B9524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9520u;
        // 0x3b9524: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9528u;
        goto label_3b9528;
    }
    ctx->pc = 0x3B9520u;
    SET_GPR_U32(ctx, 31, 0x3B9528u);
    ctx->pc = 0x3B9524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9520u;
    // 0x3b9524: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7970u, 0x3B9520u, 0x3B9528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9528u;
label_3b9528:
    // 0x3b9528: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x3b9528u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_3b952c:
    // 0x3b952c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3b952cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3b9530:
    // 0x3b9530: 0x8e04fffc  lw          $a0, -0x4($s0)
    ctx->pc = 0x3b9530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
label_3b9534:
    // 0x3b9534: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3b9538:
    if (ctx->pc == 0x3B9538u) {
        ctx->pc = 0x3B9538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9534u;
        // 0x3b9538: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B953Cu;
        goto label_3b953c;
    }
    ctx->pc = 0x3B9534u;
    {
        const bool branch_taken_0x3b9534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9534u;
        // 0x3b9538: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9534) {
            ctx->pc = 0x3B954Cu;
            goto label_3b954c;
        }
    }
    ctx->pc = 0x3B953Cu;
label_3b953c:
    // 0x3b953c: 0xc0ec620  jal         func_3B1880
label_3b9540:
    if (ctx->pc == 0x3B9540u) {
        ctx->pc = 0x3B9544u;
        goto label_3b9544;
    }
    ctx->pc = 0x3B953Cu;
    SET_GPR_U32(ctx, 31, 0x3B9544u);
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3B953Cu, 0x3B9544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9544u;
label_3b9544:
    // 0x3b9544: 0xc0e9e5c  jal         func_3A7970
label_3b9548:
    if (ctx->pc == 0x3B9548u) {
        ctx->pc = 0x3B9548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9544u;
        // 0x3b9548: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B954Cu;
        goto label_3b954c;
    }
    ctx->pc = 0x3B9544u;
    SET_GPR_U32(ctx, 31, 0x3B954Cu);
    ctx->pc = 0x3B9548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9544u;
    // 0x3b9548: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7970u, 0x3B9544u, 0x3B954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B954Cu;
label_3b954c:
    // 0x3b954c: 0x12400022  beqz        $s2, . + 4 + (0x22 << 2)
label_3b9550:
    if (ctx->pc == 0x3B9550u) {
        ctx->pc = 0x3B9550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B954Cu;
        // 0x3b9550: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9554u;
        goto label_3b9554;
    }
    ctx->pc = 0x3B954Cu;
    {
        const bool branch_taken_0x3b954c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B954Cu;
        // 0x3b9550: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b954c) {
            ctx->pc = 0x3B95D8u;
            goto label_3b95d8;
        }
    }
    ctx->pc = 0x3B9554u;
label_3b9554:
    // 0x3b9554: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3b9554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b9558:
    // 0x3b9558: 0x8e24fffc  lw          $a0, -0x4($s1)
    ctx->pc = 0x3b9558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
label_3b955c:
    // 0x3b955c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3b9560:
    if (ctx->pc == 0x3B9560u) {
        ctx->pc = 0x3B9560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B955Cu;
        // 0x3b9560: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9564u;
        goto label_3b9564;
    }
    ctx->pc = 0x3B955Cu;
    {
        const bool branch_taken_0x3b955c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b955c) {
            ctx->pc = 0x3B9560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B955Cu;
            // 0x3b9560: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9578u;
            goto label_3b9578;
        }
    }
    ctx->pc = 0x3B9564u;
label_3b9564:
    // 0x3b9564: 0xc0ec620  jal         func_3B1880
label_3b9568:
    if (ctx->pc == 0x3B9568u) {
        ctx->pc = 0x3B956Cu;
        goto label_3b956c;
    }
    ctx->pc = 0x3B9564u;
    SET_GPR_U32(ctx, 31, 0x3B956Cu);
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3B9564u, 0x3B956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B956Cu;
label_3b956c:
    // 0x3b956c: 0xc0e9e5c  jal         func_3A7970
label_3b9570:
    if (ctx->pc == 0x3B9570u) {
        ctx->pc = 0x3B9570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B956Cu;
        // 0x3b9570: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9574u;
        goto label_3b9574;
    }
    ctx->pc = 0x3B956Cu;
    SET_GPR_U32(ctx, 31, 0x3B9574u);
    ctx->pc = 0x3B9570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B956Cu;
    // 0x3b9570: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7970u, 0x3B956Cu, 0x3B9574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9574u;
label_3b9574:
    // 0x3b9574: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3b9574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3b9578:
    // 0x3b9578: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3b957c:
    if (ctx->pc == 0x3B957Cu) {
        ctx->pc = 0x3B957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9578u;
        // 0x3b957c: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9580u;
        goto label_3b9580;
    }
    ctx->pc = 0x3B9578u;
    {
        const bool branch_taken_0x3b9578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9578) {
            ctx->pc = 0x3B957Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9578u;
            // 0x3b957c: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9594u;
            goto label_3b9594;
        }
    }
    ctx->pc = 0x3B9580u;
label_3b9580:
    // 0x3b9580: 0xc0ec620  jal         func_3B1880
label_3b9584:
    if (ctx->pc == 0x3B9584u) {
        ctx->pc = 0x3B9588u;
        goto label_3b9588;
    }
    ctx->pc = 0x3B9580u;
    SET_GPR_U32(ctx, 31, 0x3B9588u);
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3B9580u, 0x3B9588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9588u;
label_3b9588:
    // 0x3b9588: 0xc0e9e5c  jal         func_3A7970
label_3b958c:
    if (ctx->pc == 0x3B958Cu) {
        ctx->pc = 0x3B958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9588u;
        // 0x3b958c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9590u;
        goto label_3b9590;
    }
    ctx->pc = 0x3B9588u;
    SET_GPR_U32(ctx, 31, 0x3B9590u);
    ctx->pc = 0x3B958Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9588u;
    // 0x3b958c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7970u, 0x3B9588u, 0x3B9590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9590u;
label_3b9590:
    // 0x3b9590: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x3b9590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3b9594:
    // 0x3b9594: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3b9598:
    if (ctx->pc == 0x3B9598u) {
        ctx->pc = 0x3B9598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9594u;
        // 0x3b9598: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B959Cu;
        goto label_3b959c;
    }
    ctx->pc = 0x3B9594u;
    {
        const bool branch_taken_0x3b9594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9594) {
            ctx->pc = 0x3B9598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9594u;
            // 0x3b9598: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B95B0u;
            goto label_3b95b0;
        }
    }
    ctx->pc = 0x3B959Cu;
label_3b959c:
    // 0x3b959c: 0xc0ec620  jal         func_3B1880
label_3b95a0:
    if (ctx->pc == 0x3B95A0u) {
        ctx->pc = 0x3B95A4u;
        goto label_3b95a4;
    }
    ctx->pc = 0x3B959Cu;
    SET_GPR_U32(ctx, 31, 0x3B95A4u);
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3B959Cu, 0x3B95A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B95A4u;
label_3b95a4:
    // 0x3b95a4: 0xc0e9e5c  jal         func_3A7970
label_3b95a8:
    if (ctx->pc == 0x3B95A8u) {
        ctx->pc = 0x3B95A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B95A4u;
        // 0x3b95a8: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B95ACu;
        goto label_3b95ac;
    }
    ctx->pc = 0x3B95A4u;
    SET_GPR_U32(ctx, 31, 0x3B95ACu);
    ctx->pc = 0x3B95A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B95A4u;
    // 0x3b95a8: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7970u, 0x3B95A4u, 0x3B95ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B95ACu;
label_3b95ac:
    // 0x3b95ac: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x3b95acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3b95b0:
    // 0x3b95b0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3b95b4:
    if (ctx->pc == 0x3B95B4u) {
        ctx->pc = 0x3B95B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B95B0u;
        // 0x3b95b4: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B95B8u;
        goto label_3b95b8;
    }
    ctx->pc = 0x3B95B0u;
    {
        const bool branch_taken_0x3b95b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b95b0) {
            ctx->pc = 0x3B95B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B95B0u;
            // 0x3b95b4: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B95CCu;
            goto label_3b95cc;
        }
    }
    ctx->pc = 0x3B95B8u;
label_3b95b8:
    // 0x3b95b8: 0xc0ec620  jal         func_3B1880
label_3b95bc:
    if (ctx->pc == 0x3B95BCu) {
        ctx->pc = 0x3B95C0u;
        goto label_3b95c0;
    }
    ctx->pc = 0x3B95B8u;
    SET_GPR_U32(ctx, 31, 0x3B95C0u);
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3B95B8u, 0x3B95C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B95C0u;
label_3b95c0:
    // 0x3b95c0: 0xc0e9e5c  jal         func_3A7970
label_3b95c4:
    if (ctx->pc == 0x3B95C4u) {
        ctx->pc = 0x3B95C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B95C0u;
        // 0x3b95c4: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B95C8u;
        goto label_3b95c8;
    }
    ctx->pc = 0x3B95C0u;
    SET_GPR_U32(ctx, 31, 0x3B95C8u);
    ctx->pc = 0x3B95C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B95C0u;
    // 0x3b95c4: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7970u, 0x3B95C0u, 0x3B95C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B95C8u;
label_3b95c8:
    // 0x3b95c8: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x3b95c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_3b95cc:
    // 0x3b95cc: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x3b95ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
label_3b95d0:
    // 0x3b95d0: 0x1640ffe1  bnez        $s2, . + 4 + (-0x1F << 2)
label_3b95d4:
    if (ctx->pc == 0x3B95D4u) {
        ctx->pc = 0x3B95D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B95D0u;
        // 0x3b95d4: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B95D8u;
        goto label_3b95d8;
    }
    ctx->pc = 0x3B95D0u;
    {
        const bool branch_taken_0x3b95d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B95D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B95D0u;
        // 0x3b95d4: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b95d0) {
            ctx->pc = 0x3B9558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b9558;
        }
    }
    ctx->pc = 0x3B95D8u;
label_3b95d8:
    // 0x3b95d8: 0xc103684  jal         func_40DA10
label_3b95dc:
    if (ctx->pc == 0x3B95DCu) {
        ctx->pc = 0x3B95DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B95D8u;
        // 0x3b95dc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B95E0u;
        goto label_3b95e0;
    }
    ctx->pc = 0x3B95D8u;
    SET_GPR_U32(ctx, 31, 0x3B95E0u);
    ctx->pc = 0x3B95DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B95D8u;
    // 0x3b95dc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3B95D8u, 0x3B95E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B95E0u;
label_3b95e0:
    // 0x3b95e0: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x3b95e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3b95e4:
    // 0x3b95e4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3b95e8:
    if (ctx->pc == 0x3B95E8u) {
        ctx->pc = 0x3B95E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B95E4u;
        // 0x3b95e8: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B95ECu;
        goto label_3b95ec;
    }
    ctx->pc = 0x3B95E4u;
    {
        const bool branch_taken_0x3b95e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b95e4) {
            ctx->pc = 0x3B95E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B95E4u;
            // 0x3b95e8: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B95FCu;
            goto label_3b95fc;
        }
    }
    ctx->pc = 0x3B95ECu;
label_3b95ec:
    // 0x3b95ec: 0xc0e3414  jal         func_38D050
label_3b95f0:
    if (ctx->pc == 0x3B95F0u) {
        ctx->pc = 0x3B95F4u;
        goto label_3b95f4;
    }
    ctx->pc = 0x3B95ECu;
    SET_GPR_U32(ctx, 31, 0x3B95F4u);
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x3B95ECu, 0x3B95F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B95F4u;
label_3b95f4:
    // 0x3b95f4: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x3b95f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_3b95f8:
    // 0x3b95f8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3b95f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3b95fc:
    // 0x3b95fc: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x3b95fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3b9600:
    // 0x3b9600: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x3b9600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_3b9604:
    // 0x3b9604: 0x60f809  jalr        $v1
label_3b9608:
    if (ctx->pc == 0x3B9608u) {
        ctx->pc = 0x3B9608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9604u;
        // 0x3b9608: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B960Cu;
        goto label_3b960c;
    }
    ctx->pc = 0x3B9604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B960Cu);
        ctx->pc = 0x3B9608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9604u;
        // 0x3b9608: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9604u, 0x3B960Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B960Cu;
label_3b960c:
    // 0x3b960c: 0x10000002  b           . + 4 + (0x2 << 2)
label_3b9610:
    if (ctx->pc == 0x3B9610u) {
        ctx->pc = 0x3B9610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B960Cu;
        // 0x3b9610: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9614u;
        goto label_3b9614;
    }
    ctx->pc = 0x3B960Cu;
    {
        const bool branch_taken_0x3b960c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B960Cu;
        // 0x3b9610: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b960c) {
            ctx->pc = 0x3B9618u;
            goto label_3b9618;
        }
    }
    ctx->pc = 0x3B9614u;
label_3b9614:
    // 0x3b9614: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b9614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b9618:
    // 0x3b9618: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3b9618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b961c:
    // 0x3b961c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3b961cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b9620:
    // 0x3b9620: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b9620u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b9624:
    // 0x3b9624: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3b9624u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b9628:
    // 0x3b9628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b9628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b962c:
    // 0x3b962c: 0x3e00008  jr          $ra
label_3b9630:
    if (ctx->pc == 0x3B9630u) {
        ctx->pc = 0x3B9630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B962Cu;
        // 0x3b9630: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9634u;
        goto label_3b9634;
    }
    ctx->pc = 0x3B962Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B962Cu;
        // 0x3b9630: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B962Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9634u;
label_3b9634:
    // 0x3b9634: 0x0  nop
    ctx->pc = 0x3b9634u;
    // NOP
    ctx->pc = 0x3b9638u;
}
