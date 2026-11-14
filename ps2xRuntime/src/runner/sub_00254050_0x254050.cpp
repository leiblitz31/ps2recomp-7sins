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

// Function: sub_00254050
// Address: 0x254050 - 0x254220
void sub_00254050_0x254050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254050_0x254050");
#endif

    switch (ctx->pc) {
        case 0x254050u: goto label_254050;
        case 0x254054u: goto label_254054;
        case 0x254058u: goto label_254058;
        case 0x25405cu: goto label_25405c;
        case 0x254060u: goto label_254060;
        case 0x254064u: goto label_254064;
        case 0x254068u: goto label_254068;
        case 0x25406cu: goto label_25406c;
        case 0x254070u: goto label_254070;
        case 0x254074u: goto label_254074;
        case 0x254078u: goto label_254078;
        case 0x25407cu: goto label_25407c;
        case 0x254080u: goto label_254080;
        case 0x254084u: goto label_254084;
        case 0x254088u: goto label_254088;
        case 0x25408cu: goto label_25408c;
        case 0x254090u: goto label_254090;
        case 0x254094u: goto label_254094;
        case 0x254098u: goto label_254098;
        case 0x25409cu: goto label_25409c;
        case 0x2540a0u: goto label_2540a0;
        case 0x2540a4u: goto label_2540a4;
        case 0x2540a8u: goto label_2540a8;
        case 0x2540acu: goto label_2540ac;
        case 0x2540b0u: goto label_2540b0;
        case 0x2540b4u: goto label_2540b4;
        case 0x2540b8u: goto label_2540b8;
        case 0x2540bcu: goto label_2540bc;
        case 0x2540c0u: goto label_2540c0;
        case 0x2540c4u: goto label_2540c4;
        case 0x2540c8u: goto label_2540c8;
        case 0x2540ccu: goto label_2540cc;
        case 0x2540d0u: goto label_2540d0;
        case 0x2540d4u: goto label_2540d4;
        case 0x2540d8u: goto label_2540d8;
        case 0x2540dcu: goto label_2540dc;
        case 0x2540e0u: goto label_2540e0;
        case 0x2540e4u: goto label_2540e4;
        case 0x2540e8u: goto label_2540e8;
        case 0x2540ecu: goto label_2540ec;
        case 0x2540f0u: goto label_2540f0;
        case 0x2540f4u: goto label_2540f4;
        case 0x2540f8u: goto label_2540f8;
        case 0x2540fcu: goto label_2540fc;
        case 0x254100u: goto label_254100;
        case 0x254104u: goto label_254104;
        case 0x254108u: goto label_254108;
        case 0x25410cu: goto label_25410c;
        case 0x254110u: goto label_254110;
        case 0x254114u: goto label_254114;
        case 0x254118u: goto label_254118;
        case 0x25411cu: goto label_25411c;
        case 0x254120u: goto label_254120;
        case 0x254124u: goto label_254124;
        case 0x254128u: goto label_254128;
        case 0x25412cu: goto label_25412c;
        case 0x254130u: goto label_254130;
        case 0x254134u: goto label_254134;
        case 0x254138u: goto label_254138;
        case 0x25413cu: goto label_25413c;
        case 0x254140u: goto label_254140;
        case 0x254144u: goto label_254144;
        case 0x254148u: goto label_254148;
        case 0x25414cu: goto label_25414c;
        case 0x254150u: goto label_254150;
        case 0x254154u: goto label_254154;
        case 0x254158u: goto label_254158;
        case 0x25415cu: goto label_25415c;
        case 0x254160u: goto label_254160;
        case 0x254164u: goto label_254164;
        case 0x254168u: goto label_254168;
        case 0x25416cu: goto label_25416c;
        case 0x254170u: goto label_254170;
        case 0x254174u: goto label_254174;
        case 0x254178u: goto label_254178;
        case 0x25417cu: goto label_25417c;
        case 0x254180u: goto label_254180;
        case 0x254184u: goto label_254184;
        case 0x254188u: goto label_254188;
        case 0x25418cu: goto label_25418c;
        case 0x254190u: goto label_254190;
        case 0x254194u: goto label_254194;
        case 0x254198u: goto label_254198;
        case 0x25419cu: goto label_25419c;
        case 0x2541a0u: goto label_2541a0;
        case 0x2541a4u: goto label_2541a4;
        case 0x2541a8u: goto label_2541a8;
        case 0x2541acu: goto label_2541ac;
        case 0x2541b0u: goto label_2541b0;
        case 0x2541b4u: goto label_2541b4;
        case 0x2541b8u: goto label_2541b8;
        case 0x2541bcu: goto label_2541bc;
        case 0x2541c0u: goto label_2541c0;
        case 0x2541c4u: goto label_2541c4;
        case 0x2541c8u: goto label_2541c8;
        case 0x2541ccu: goto label_2541cc;
        case 0x2541d0u: goto label_2541d0;
        case 0x2541d4u: goto label_2541d4;
        case 0x2541d8u: goto label_2541d8;
        case 0x2541dcu: goto label_2541dc;
        case 0x2541e0u: goto label_2541e0;
        case 0x2541e4u: goto label_2541e4;
        case 0x2541e8u: goto label_2541e8;
        case 0x2541ecu: goto label_2541ec;
        case 0x2541f0u: goto label_2541f0;
        case 0x2541f4u: goto label_2541f4;
        case 0x2541f8u: goto label_2541f8;
        case 0x2541fcu: goto label_2541fc;
        case 0x254200u: goto label_254200;
        case 0x254204u: goto label_254204;
        case 0x254208u: goto label_254208;
        case 0x25420cu: goto label_25420c;
        case 0x254210u: goto label_254210;
        case 0x254214u: goto label_254214;
        case 0x254218u: goto label_254218;
        case 0x25421cu: goto label_25421c;
        default: break;
    }

    ctx->pc = 0x254050u;

label_254050:
    // 0x254050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_254054:
    // 0x254054: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x254054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_254058:
    // 0x254058: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x254058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_25405c:
    // 0x25405c: 0x2c41001b  sltiu       $at, $v0, 0x1B
    ctx->pc = 0x25405cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
label_254060:
    // 0x254060: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
label_254064:
    if (ctx->pc == 0x254064u) {
        ctx->pc = 0x254068u;
        goto label_254068;
    }
    ctx->pc = 0x254060u;
    {
        const bool branch_taken_0x254060 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x254060) {
            ctx->pc = 0x254124u;
            goto label_254124;
        }
    }
    ctx->pc = 0x254068u;
label_254068:
    // 0x254068: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x254068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_25406c:
    // 0x25406c: 0x24638970  addiu       $v1, $v1, -0x7690
    ctx->pc = 0x25406cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936944));
label_254070:
    // 0x254070: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x254070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_254074:
    // 0x254074: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x254074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_254078:
    // 0x254078: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x254078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25407c:
    // 0x25407c: 0x400008  jr          $v0
label_254080:
    if (ctx->pc == 0x254080u) {
        ctx->pc = 0x254084u;
        goto label_254084;
    }
    ctx->pc = 0x25407Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x254084u: goto label_254084;
            case 0x254094u: goto label_254094;
            case 0x2540A4u: goto label_2540a4;
            case 0x2540B4u: goto label_2540b4;
            case 0x2540C4u: goto label_2540c4;
            case 0x2540D4u: goto label_2540d4;
            case 0x2540E4u: goto label_2540e4;
            case 0x2540F4u: goto label_2540f4;
            case 0x254104u: goto label_254104;
            case 0x254114u: goto label_254114;
            case 0x254124u: goto label_254124;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25407Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x254084u;
label_254084:
    // 0x254084: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x254084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_254088:
    // 0x254088: 0x8c42beb0  lw          $v0, -0x4150($v0)
    ctx->pc = 0x254088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950576)));
label_25408c:
    // 0x25408c: 0x10000026  b           . + 4 + (0x26 << 2)
label_254090:
    if (ctx->pc == 0x254090u) {
        ctx->pc = 0x254094u;
        goto label_254094;
    }
    ctx->pc = 0x25408Cu;
    {
        const bool branch_taken_0x25408c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25408c) {
            ctx->pc = 0x254128u;
            goto label_254128;
        }
    }
    ctx->pc = 0x254094u;
label_254094:
    // 0x254094: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x254094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_254098:
    // 0x254098: 0x8c42beb4  lw          $v0, -0x414C($v0)
    ctx->pc = 0x254098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950580)));
label_25409c:
    // 0x25409c: 0x10000022  b           . + 4 + (0x22 << 2)
label_2540a0:
    if (ctx->pc == 0x2540A0u) {
        ctx->pc = 0x2540A4u;
        goto label_2540a4;
    }
    ctx->pc = 0x25409Cu;
    {
        const bool branch_taken_0x25409c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25409c) {
            ctx->pc = 0x254128u;
            goto label_254128;
        }
    }
    ctx->pc = 0x2540A4u;
label_2540a4:
    // 0x2540a4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2540a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2540a8:
    // 0x2540a8: 0x8c42beb8  lw          $v0, -0x4148($v0)
    ctx->pc = 0x2540a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950584)));
label_2540ac:
    // 0x2540ac: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2540b0:
    if (ctx->pc == 0x2540B0u) {
        ctx->pc = 0x2540B4u;
        goto label_2540b4;
    }
    ctx->pc = 0x2540ACu;
    {
        const bool branch_taken_0x2540ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2540ac) {
            ctx->pc = 0x254128u;
            goto label_254128;
        }
    }
    ctx->pc = 0x2540B4u;
label_2540b4:
    // 0x2540b4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2540b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2540b8:
    // 0x2540b8: 0x8c42bebc  lw          $v0, -0x4144($v0)
    ctx->pc = 0x2540b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950588)));
label_2540bc:
    // 0x2540bc: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2540c0:
    if (ctx->pc == 0x2540C0u) {
        ctx->pc = 0x2540C4u;
        goto label_2540c4;
    }
    ctx->pc = 0x2540BCu;
    {
        const bool branch_taken_0x2540bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2540bc) {
            ctx->pc = 0x254128u;
            goto label_254128;
        }
    }
    ctx->pc = 0x2540C4u;
label_2540c4:
    // 0x2540c4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2540c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2540c8:
    // 0x2540c8: 0x8c42bec0  lw          $v0, -0x4140($v0)
    ctx->pc = 0x2540c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950592)));
label_2540cc:
    // 0x2540cc: 0x10000016  b           . + 4 + (0x16 << 2)
label_2540d0:
    if (ctx->pc == 0x2540D0u) {
        ctx->pc = 0x2540D4u;
        goto label_2540d4;
    }
    ctx->pc = 0x2540CCu;
    {
        const bool branch_taken_0x2540cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2540cc) {
            ctx->pc = 0x254128u;
            goto label_254128;
        }
    }
    ctx->pc = 0x2540D4u;
label_2540d4:
    // 0x2540d4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2540d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2540d8:
    // 0x2540d8: 0x8c42bec4  lw          $v0, -0x413C($v0)
    ctx->pc = 0x2540d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950596)));
label_2540dc:
    // 0x2540dc: 0x10000012  b           . + 4 + (0x12 << 2)
label_2540e0:
    if (ctx->pc == 0x2540E0u) {
        ctx->pc = 0x2540E4u;
        goto label_2540e4;
    }
    ctx->pc = 0x2540DCu;
    {
        const bool branch_taken_0x2540dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2540dc) {
            ctx->pc = 0x254128u;
            goto label_254128;
        }
    }
    ctx->pc = 0x2540E4u;
label_2540e4:
    // 0x2540e4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2540e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2540e8:
    // 0x2540e8: 0x8c42bec8  lw          $v0, -0x4138($v0)
    ctx->pc = 0x2540e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950600)));
label_2540ec:
    // 0x2540ec: 0x1000000e  b           . + 4 + (0xE << 2)
label_2540f0:
    if (ctx->pc == 0x2540F0u) {
        ctx->pc = 0x2540F4u;
        goto label_2540f4;
    }
    ctx->pc = 0x2540ECu;
    {
        const bool branch_taken_0x2540ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2540ec) {
            ctx->pc = 0x254128u;
            goto label_254128;
        }
    }
    ctx->pc = 0x2540F4u;
label_2540f4:
    // 0x2540f4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2540f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2540f8:
    // 0x2540f8: 0x8c42becc  lw          $v0, -0x4134($v0)
    ctx->pc = 0x2540f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950604)));
label_2540fc:
    // 0x2540fc: 0x1000000a  b           . + 4 + (0xA << 2)
label_254100:
    if (ctx->pc == 0x254100u) {
        ctx->pc = 0x254104u;
        goto label_254104;
    }
    ctx->pc = 0x2540FCu;
    {
        const bool branch_taken_0x2540fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2540fc) {
            ctx->pc = 0x254128u;
            goto label_254128;
        }
    }
    ctx->pc = 0x254104u;
label_254104:
    // 0x254104: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x254104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_254108:
    // 0x254108: 0x8c42bed0  lw          $v0, -0x4130($v0)
    ctx->pc = 0x254108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950608)));
label_25410c:
    // 0x25410c: 0x10000006  b           . + 4 + (0x6 << 2)
label_254110:
    if (ctx->pc == 0x254110u) {
        ctx->pc = 0x254114u;
        goto label_254114;
    }
    ctx->pc = 0x25410Cu;
    {
        const bool branch_taken_0x25410c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25410c) {
            ctx->pc = 0x254128u;
            goto label_254128;
        }
    }
    ctx->pc = 0x254114u;
label_254114:
    // 0x254114: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x254114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_254118:
    // 0x254118: 0x8c42bed4  lw          $v0, -0x412C($v0)
    ctx->pc = 0x254118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950612)));
label_25411c:
    // 0x25411c: 0x10000002  b           . + 4 + (0x2 << 2)
label_254120:
    if (ctx->pc == 0x254120u) {
        ctx->pc = 0x254124u;
        goto label_254124;
    }
    ctx->pc = 0x25411Cu;
    {
        const bool branch_taken_0x25411c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25411c) {
            ctx->pc = 0x254128u;
            goto label_254128;
        }
    }
    ctx->pc = 0x254124u;
label_254124:
    // 0x254124: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x254124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_254128:
    // 0x254128: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x254128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_25412c:
    // 0x25412c: 0x3e00008  jr          $ra
label_254130:
    if (ctx->pc == 0x254130u) {
        ctx->pc = 0x254134u;
        goto label_254134;
    }
    ctx->pc = 0x25412Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25412Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254134u;
label_254134:
    // 0x254134: 0x0  nop
    ctx->pc = 0x254134u;
    // NOP
label_254138:
    // 0x254138: 0x0  nop
    ctx->pc = 0x254138u;
    // NOP
label_25413c:
    // 0x25413c: 0x0  nop
    ctx->pc = 0x25413cu;
    // NOP
label_254140:
    // 0x254140: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x254140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_254144:
    // 0x254144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x254144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_254148:
    // 0x254148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x254148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_25414c:
    // 0x25414c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x25414cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_254150:
    // 0x254150: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x254150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_254154:
    // 0x254154: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x254154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_254158:
    // 0x254158: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x254158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_25415c:
    // 0x25415c: 0xc08904c  jal         func_224130
label_254160:
    if (ctx->pc == 0x254160u) {
        ctx->pc = 0x254164u;
        goto label_254164;
    }
    ctx->pc = 0x25415Cu;
    SET_GPR_U32(ctx, 31, 0x254164u);
    ctx->pc = 0x224130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224130u, 0x25415Cu, 0x254164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254164u;
label_254164:
    // 0x254164: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x254164u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_254168:
    // 0x254168: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x254168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_25416c:
    // 0x25416c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25416cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_254170:
    // 0x254170: 0xc08ec98  jal         func_23B260
label_254174:
    if (ctx->pc == 0x254174u) {
        ctx->pc = 0x254178u;
        goto label_254178;
    }
    ctx->pc = 0x254170u;
    SET_GPR_U32(ctx, 31, 0x254178u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x254170u, 0x254178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254178u;
label_254178:
    // 0x254178: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25417c:
    // 0x25417c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x25417cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_254180:
    // 0x254180: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x254180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_254184:
    // 0x254184: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x254184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_254188:
    // 0x254188: 0xc0422a8  jal         func_108AA0
label_25418c:
    if (ctx->pc == 0x25418Cu) {
        ctx->pc = 0x254190u;
        goto label_254190;
    }
    ctx->pc = 0x254188u;
    SET_GPR_U32(ctx, 31, 0x254190u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x254188u, 0x254190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254190u;
label_254190:
    // 0x254190: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x254190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_254194:
    // 0x254194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_254198:
    // 0x254198: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_25419c:
    if (ctx->pc == 0x25419Cu) {
        ctx->pc = 0x2541A0u;
        goto label_2541a0;
    }
    ctx->pc = 0x254198u;
    {
        const bool branch_taken_0x254198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x254198) {
            ctx->pc = 0x2541ECu;
            goto label_2541ec;
        }
    }
    ctx->pc = 0x2541A0u;
label_2541a0:
    // 0x2541a0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2541a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2541a4:
    // 0x2541a4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2541a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2541a8:
    // 0x2541a8: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x2541a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_2541ac:
    // 0x2541ac: 0xc0422a8  jal         func_108AA0
label_2541b0:
    if (ctx->pc == 0x2541B0u) {
        ctx->pc = 0x2541B4u;
        goto label_2541b4;
    }
    ctx->pc = 0x2541ACu;
    SET_GPR_U32(ctx, 31, 0x2541B4u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x2541ACu, 0x2541B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2541B4u;
label_2541b4:
    // 0x2541b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2541b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2541b8:
    // 0x2541b8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2541b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2541bc:
    // 0x2541bc: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x2541bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2541c0:
    // 0x2541c0: 0xc08cf20  jal         func_233C80
label_2541c4:
    if (ctx->pc == 0x2541C4u) {
        ctx->pc = 0x2541C8u;
        goto label_2541c8;
    }
    ctx->pc = 0x2541C0u;
    SET_GPR_U32(ctx, 31, 0x2541C8u);
    ctx->pc = 0x233C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C80u, 0x2541C0u, 0x2541C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2541C8u;
label_2541c8:
    // 0x2541c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2541c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2541cc:
    // 0x2541cc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2541ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2541d0:
    // 0x2541d0: 0x24450014  addiu       $a1, $v0, 0x14
    ctx->pc = 0x2541d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_2541d4:
    // 0x2541d4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2541d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2541d8:
    // 0x2541d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2541d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2541dc:
    // 0x2541dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2541dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2541e0:
    // 0x2541e0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2541e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2541e4:
    // 0x2541e4: 0x320f809  jalr        $t9
label_2541e8:
    if (ctx->pc == 0x2541E8u) {
        ctx->pc = 0x2541ECu;
        goto label_2541ec;
    }
    ctx->pc = 0x2541E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2541ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2541E4u, 0x2541ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2541ECu;
label_2541ec:
    // 0x2541ec: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2541ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2541f0:
    // 0x2541f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2541f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2541f4:
    // 0x2541f4: 0xc08ec98  jal         func_23B260
label_2541f8:
    if (ctx->pc == 0x2541F8u) {
        ctx->pc = 0x2541FCu;
        goto label_2541fc;
    }
    ctx->pc = 0x2541F4u;
    SET_GPR_U32(ctx, 31, 0x2541FCu);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x2541F4u, 0x2541FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2541FCu;
label_2541fc:
    // 0x2541fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2541fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_254200:
    // 0x254200: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x254200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_254204:
    // 0x254204: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_254208:
    // 0x254208: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x254208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_25420c:
    // 0x25420c: 0x3e00008  jr          $ra
label_254210:
    if (ctx->pc == 0x254210u) {
        ctx->pc = 0x254214u;
        goto label_254214;
    }
    ctx->pc = 0x25420Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25420Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254214u;
label_254214:
    // 0x254214: 0x0  nop
    ctx->pc = 0x254214u;
    // NOP
label_254218:
    // 0x254218: 0x0  nop
    ctx->pc = 0x254218u;
    // NOP
label_25421c:
    // 0x25421c: 0x0  nop
    ctx->pc = 0x25421cu;
    // NOP
    ctx->pc = 0x254220u;
}
