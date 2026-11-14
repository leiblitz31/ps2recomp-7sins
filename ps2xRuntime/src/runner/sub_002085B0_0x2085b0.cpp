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

// Function: sub_002085B0
// Address: 0x2085b0 - 0x20a900
void sub_002085B0_0x2085b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002085B0_0x2085b0");
#endif

    switch (ctx->pc) {
        case 0x208610u: goto label_208610;
        case 0x208624u: goto label_208624;
        case 0x208638u: goto label_208638;
        case 0x20864cu: goto label_20864c;
        case 0x208660u: goto label_208660;
        case 0x208670u: goto label_208670;
        case 0x208690u: goto label_208690;
        case 0x2086f0u: goto label_2086f0;
        case 0x208714u: goto label_208714;
        case 0x208724u: goto label_208724;
        case 0x208730u: goto label_208730;
        case 0x20874cu: goto label_20874c;
        case 0x20875cu: goto label_20875c;
        case 0x20877cu: goto label_20877c;
        case 0x208790u: goto label_208790;
        case 0x2087a4u: goto label_2087a4;
        case 0x2087b4u: goto label_2087b4;
        case 0x208874u: goto label_208874;
        case 0x2088ccu: goto label_2088cc;
        case 0x208900u: goto label_208900;
        case 0x20890cu: goto label_20890c;
        case 0x20891cu: goto label_20891c;
        case 0x20892cu: goto label_20892c;
        case 0x208938u: goto label_208938;
        case 0x208948u: goto label_208948;
        case 0x2089a8u: goto label_2089a8;
        case 0x2089b8u: goto label_2089b8;
        case 0x2089d4u: goto label_2089d4;
        case 0x208a48u: goto label_208a48;
        case 0x208a5cu: goto label_208a5c;
        case 0x208a6cu: goto label_208a6c;
        case 0x208a80u: goto label_208a80;
        case 0x208a94u: goto label_208a94;
        case 0x208aa4u: goto label_208aa4;
        case 0x208ac0u: goto label_208ac0;
        case 0x208af4u: goto label_208af4;
        case 0x208b08u: goto label_208b08;
        case 0x208b14u: goto label_208b14;
        case 0x208b28u: goto label_208b28;
        case 0x208b44u: goto label_208b44;
        case 0x208bb4u: goto label_208bb4;
        case 0x208bccu: goto label_208bcc;
        case 0x208be0u: goto label_208be0;
        case 0x208bf8u: goto label_208bf8;
        case 0x208c0cu: goto label_208c0c;
        case 0x208c24u: goto label_208c24;
        case 0x208c40u: goto label_208c40;
        case 0x208c78u: goto label_208c78;
        case 0x208c90u: goto label_208c90;
        case 0x208c9cu: goto label_208c9c;
        case 0x208cacu: goto label_208cac;
        case 0x208cccu: goto label_208ccc;
        case 0x208d44u: goto label_208d44;
        case 0x208d5cu: goto label_208d5c;
        case 0x208d70u: goto label_208d70;
        case 0x208d84u: goto label_208d84;
        case 0x208da0u: goto label_208da0;
        case 0x208db0u: goto label_208db0;
        case 0x208dc8u: goto label_208dc8;
        case 0x208e00u: goto label_208e00;
        case 0x208e18u: goto label_208e18;
        case 0x208e38u: goto label_208e38;
        case 0x208e48u: goto label_208e48;
        case 0x208e60u: goto label_208e60;
        case 0x208e80u: goto label_208e80;
        case 0x208e94u: goto label_208e94;
        case 0x208eccu: goto label_208ecc;
        case 0x208ee4u: goto label_208ee4;
        case 0x208f00u: goto label_208f00;
        case 0x208f24u: goto label_208f24;
        case 0x208f38u: goto label_208f38;
        case 0x208f44u: goto label_208f44;
        case 0x208f60u: goto label_208f60;
        case 0x208f90u: goto label_208f90;
        case 0x208facu: goto label_208fac;
        case 0x208fbcu: goto label_208fbc;
        case 0x208fd0u: goto label_208fd0;
        case 0x208ff0u: goto label_208ff0;
        case 0x209000u: goto label_209000;
        case 0x20900cu: goto label_20900c;
        case 0x209028u: goto label_209028;
        case 0x209054u: goto label_209054;
        case 0x20906cu: goto label_20906c;
        case 0x209080u: goto label_209080;
        case 0x209098u: goto label_209098;
        case 0x2090b8u: goto label_2090b8;
        case 0x2090ccu: goto label_2090cc;
        case 0x2090d8u: goto label_2090d8;
        case 0x2090f4u: goto label_2090f4;
        case 0x209120u: goto label_209120;
        case 0x209140u: goto label_209140;
        case 0x209154u: goto label_209154;
        case 0x209168u: goto label_209168;
        case 0x209188u: goto label_209188;
        case 0x209198u: goto label_209198;
        case 0x2091a4u: goto label_2091a4;
        case 0x2091c0u: goto label_2091c0;
        case 0x2091f4u: goto label_2091f4;
        case 0x209218u: goto label_209218;
        case 0x209228u: goto label_209228;
        case 0x209244u: goto label_209244;
        case 0x209264u: goto label_209264;
        case 0x209270u: goto label_209270;
        case 0x20927cu: goto label_20927c;
        case 0x209298u: goto label_209298;
        case 0x2092c8u: goto label_2092c8;
        case 0x2092e4u: goto label_2092e4;
        case 0x209310u: goto label_209310;
        case 0x209330u: goto label_209330;
        case 0x209344u: goto label_209344;
        case 0x20935cu: goto label_20935c;
        case 0x20937cu: goto label_20937c;
        case 0x209388u: goto label_209388;
        case 0x209394u: goto label_209394;
        case 0x2093b4u: goto label_2093b4;
        case 0x2093ecu: goto label_2093ec;
        case 0x209408u: goto label_209408;
        case 0x209418u: goto label_209418;
        case 0x20942cu: goto label_20942c;
        case 0x209450u: goto label_209450;
        case 0x20945cu: goto label_20945c;
        case 0x209468u: goto label_209468;
        case 0x209488u: goto label_209488;
        case 0x2094b4u: goto label_2094b4;
        case 0x2094d0u: goto label_2094d0;
        case 0x209500u: goto label_209500;
        case 0x209520u: goto label_209520;
        case 0x209534u: goto label_209534;
        case 0x209548u: goto label_209548;
        case 0x209568u: goto label_209568;
        case 0x20957cu: goto label_20957c;
        case 0x20958cu: goto label_20958c;
        case 0x2095acu: goto label_2095ac;
        case 0x2095dcu: goto label_2095dc;
        case 0x2095f8u: goto label_2095f8;
        case 0x209610u: goto label_209610;
        case 0x209624u: goto label_209624;
        case 0x209648u: goto label_209648;
        case 0x20965cu: goto label_20965c;
        case 0x209668u: goto label_209668;
        case 0x209680u: goto label_209680;
        case 0x2096acu: goto label_2096ac;
        case 0x2096ccu: goto label_2096cc;
        case 0x209704u: goto label_209704;
        case 0x209724u: goto label_209724;
        case 0x209734u: goto label_209734;
        case 0x20974cu: goto label_20974c;
        case 0x20976cu: goto label_20976c;
        case 0x20977cu: goto label_20977c;
        case 0x209788u: goto label_209788;
        case 0x2097a4u: goto label_2097a4;
        case 0x2097c8u: goto label_2097c8;
        case 0x2097e0u: goto label_2097e0;
        case 0x2097f8u: goto label_2097f8;
        case 0x209818u: goto label_209818;
        case 0x209828u: goto label_209828;
        case 0x209834u: goto label_209834;
        case 0x20984cu: goto label_20984c;
        case 0x209870u: goto label_209870;
        case 0x209888u: goto label_209888;
        case 0x2098a0u: goto label_2098a0;
        case 0x2098c4u: goto label_2098c4;
        case 0x2098d0u: goto label_2098d0;
        case 0x2098dcu: goto label_2098dc;
        case 0x2098f8u: goto label_2098f8;
        case 0x209914u: goto label_209914;
        case 0x209928u: goto label_209928;
        case 0x209948u: goto label_209948;
        case 0x20996cu: goto label_20996c;
        case 0x209980u: goto label_209980;
        case 0x20998cu: goto label_20998c;
        case 0x2099a4u: goto label_2099a4;
        case 0x2099c4u: goto label_2099c4;
        case 0x2099d4u: goto label_2099d4;
        case 0x2099f4u: goto label_2099f4;
        case 0x209a18u: goto label_209a18;
        case 0x209a28u: goto label_209a28;
        case 0x209a34u: goto label_209a34;
        case 0x209a4cu: goto label_209a4c;
        case 0x209a68u: goto label_209a68;
        case 0x209a78u: goto label_209a78;
        case 0x209a94u: goto label_209a94;
        case 0x209ab4u: goto label_209ab4;
        case 0x209ac0u: goto label_209ac0;
        case 0x209accu: goto label_209acc;
        case 0x209ae4u: goto label_209ae4;
        case 0x209b08u: goto label_209b08;
        case 0x209b1cu: goto label_209b1c;
        case 0x209b38u: goto label_209b38;
        case 0x209b5cu: goto label_209b5c;
        case 0x209b70u: goto label_209b70;
        case 0x209b7cu: goto label_209b7c;
        case 0x209b98u: goto label_209b98;
        case 0x209bb8u: goto label_209bb8;
        case 0x209be0u: goto label_209be0;
        case 0x209c04u: goto label_209c04;
        case 0x209c1cu: goto label_209c1c;
        case 0x209c38u: goto label_209c38;
        case 0x209c58u: goto label_209c58;
        case 0x209c6cu: goto label_209c6c;
        case 0x209c78u: goto label_209c78;
        case 0x209c98u: goto label_209c98;
        case 0x209cb4u: goto label_209cb4;
        case 0x209ce4u: goto label_209ce4;
        case 0x209cfcu: goto label_209cfc;
        case 0x209d14u: goto label_209d14;
        case 0x209d34u: goto label_209d34;
        case 0x209d58u: goto label_209d58;
        case 0x209d6cu: goto label_209d6c;
        case 0x209d78u: goto label_209d78;
        case 0x209d90u: goto label_209d90;
        case 0x209db4u: goto label_209db4;
        case 0x209de0u: goto label_209de0;
        case 0x209e04u: goto label_209e04;
        case 0x209e24u: goto label_209e24;
        case 0x209e4cu: goto label_209e4c;
        case 0x209e74u: goto label_209e74;
        case 0x209ea4u: goto label_209ea4;
        case 0x209ed0u: goto label_209ed0;
        case 0x209efcu: goto label_209efc;
        case 0x209f1cu: goto label_209f1c;
        case 0x209f38u: goto label_209f38;
        case 0x209f70u: goto label_209f70;
        case 0x209f8cu: goto label_209f8c;
        case 0x209fa4u: goto label_209fa4;
        case 0x209fb0u: goto label_209fb0;
        case 0x209fe0u: goto label_209fe0;
        case 0x20a004u: goto label_20a004;
        case 0x20a03cu: goto label_20a03c;
        case 0x20a098u: goto label_20a098;
        case 0x20a0c4u: goto label_20a0c4;
        case 0x20a124u: goto label_20a124;
        case 0x20a188u: goto label_20a188;
        case 0x20a1a0u: goto label_20a1a0;
        case 0x20a1c4u: goto label_20a1c4;
        case 0x20a1ecu: goto label_20a1ec;
        case 0x20a23cu: goto label_20a23c;
        case 0x20a314u: goto label_20a314;
        case 0x20a3f4u: goto label_20a3f4;
        case 0x20a498u: goto label_20a498;
        case 0x20a4b8u: goto label_20a4b8;
        case 0x20a4e0u: goto label_20a4e0;
        case 0x20a4f8u: goto label_20a4f8;
        case 0x20a540u: goto label_20a540;
        case 0x20a608u: goto label_20a608;
        case 0x20a6d4u: goto label_20a6d4;
        case 0x20a790u: goto label_20a790;
        case 0x20a7a4u: goto label_20a7a4;
        case 0x20a7c8u: goto label_20a7c8;
        case 0x20a7e4u: goto label_20a7e4;
        case 0x20a7f8u: goto label_20a7f8;
        case 0x20a808u: goto label_20a808;
        case 0x20a820u: goto label_20a820;
        case 0x20a840u: goto label_20a840;
        case 0x20a85cu: goto label_20a85c;
        case 0x20a870u: goto label_20a870;
        case 0x20a87cu: goto label_20a87c;
        case 0x20a894u: goto label_20a894;
        case 0x20a8b8u: goto label_20a8b8;
        default: break;
    }

    ctx->pc = 0x2085b0u;

    // 0x2085b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2085b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2085b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2085b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2085b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2085b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2085bc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2085bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2085c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2085C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2085C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2085C8u;
    // 0x2085c8: 0x0  nop
    ctx->pc = 0x2085c8u;
    // NOP
    // 0x2085cc: 0x0  nop
    ctx->pc = 0x2085ccu;
    // NOP
    // 0x2085d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2085d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2085d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2085d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2085d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2085d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2085dc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2085dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2085e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2085e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2085e4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2085E4u;
    {
        const bool branch_taken_0x2085e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2085e4) {
            ctx->pc = 0x208690u;
            goto label_208690;
        }
    }
    ctx->pc = 0x2085ECu;
    // 0x2085ec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2085ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2085f0: 0x246350c0  addiu       $v1, $v1, 0x50C0
    ctx->pc = 0x2085f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20672));
    // 0x2085f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2085f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2085f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2085f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2085fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2085fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208600: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x208600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x208604: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x208604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208608: 0xc081ec0  jal         func_207B00
    ctx->pc = 0x208608u;
    SET_GPR_U32(ctx, 31, 0x208610u);
    ctx->pc = 0x207B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207B00u, 0x208608u, 0x208610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208610u;
label_208610:
    // 0x208610: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x208610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208614: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x208614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x208618: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x208618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20861c: 0xc081f48  jal         func_207D20
    ctx->pc = 0x20861Cu;
    SET_GPR_U32(ctx, 31, 0x208624u);
    ctx->pc = 0x207D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207D20u, 0x20861Cu, 0x208624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208624u;
label_208624:
    // 0x208624: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x208624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208628: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x208628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x20862c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x20862cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208630: 0xc081fd0  jal         func_207F40
    ctx->pc = 0x208630u;
    SET_GPR_U32(ctx, 31, 0x208638u);
    ctx->pc = 0x207F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207F40u, 0x208630u, 0x208638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208638u;
label_208638:
    // 0x208638: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x208638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20863c: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x20863cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x208640: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x208640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208644: 0xc081fd0  jal         func_207F40
    ctx->pc = 0x208644u;
    SET_GPR_U32(ctx, 31, 0x20864Cu);
    ctx->pc = 0x207F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207F40u, 0x208644u, 0x20864Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20864Cu;
label_20864c:
    // 0x20864c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x20864cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208650: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x208650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x208654: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x208654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208658: 0xc05ee30  jal         func_17B8C0
    ctx->pc = 0x208658u;
    SET_GPR_U32(ctx, 31, 0x208660u);
    ctx->pc = 0x17B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B8C0u, 0x208658u, 0x208660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208660u;
label_208660:
    // 0x208660: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x208660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208664: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208668: 0xc064970  jal         func_1925C0
    ctx->pc = 0x208668u;
    SET_GPR_U32(ctx, 31, 0x208670u);
    ctx->pc = 0x1925C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1925C0u, 0x208668u, 0x208670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208670u;
label_208670:
    // 0x208670: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x208670u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208674: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x208674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x208678: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x208678u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20867c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20867Cu;
    {
        const bool branch_taken_0x20867c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x20867c) {
            ctx->pc = 0x208690u;
            goto label_208690;
        }
    }
    ctx->pc = 0x208684u;
    // 0x208684: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x208684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208688: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x208688u;
    SET_GPR_U32(ctx, 31, 0x208690u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x208688u, 0x208690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208690u;
label_208690:
    // 0x208690: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x208690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208698: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x208698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20869c: 0x3e00008  jr          $ra
    ctx->pc = 0x20869Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20869Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2086A4u;
    // 0x2086a4: 0x0  nop
    ctx->pc = 0x2086a4u;
    // NOP
    // 0x2086a8: 0x0  nop
    ctx->pc = 0x2086a8u;
    // NOP
    // 0x2086ac: 0x0  nop
    ctx->pc = 0x2086acu;
    // NOP
    // 0x2086b0: 0x27bdfcd0  addiu       $sp, $sp, -0x330
    ctx->pc = 0x2086b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966480));
    // 0x2086b4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2086b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2086b8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2086b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2086bc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2086bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2086c0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2086c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2086c4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2086c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2086c8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2086c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2086cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2086ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2086d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2086d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2086d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2086d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2086d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2086d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2086dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2086dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2086e0: 0xafa40320  sw          $a0, 0x320($sp)
    ctx->pc = 0x2086e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 800), GPR_U32(ctx, 4));
    // 0x2086e4: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x2086e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2086e8: 0xc064a74  jal         func_1929D0
    ctx->pc = 0x2086E8u;
    SET_GPR_U32(ctx, 31, 0x2086F0u);
    ctx->pc = 0x1929D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1929D0u, 0x2086E8u, 0x2086F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2086F0u;
label_2086f0:
    // 0x2086f0: 0xa3a2031f  sb          $v0, 0x31F($sp)
    ctx->pc = 0x2086f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 799), (uint8_t)GPR_U32(ctx, 2));
    // 0x2086f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2086f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2086f8: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x2086f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2086fc: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2086fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x208700: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x208700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x208704: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x208704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x208708: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x208708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x20870c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x20870Cu;
    SET_GPR_U32(ctx, 31, 0x208714u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x20870Cu, 0x208714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208714u;
label_208714:
    // 0x208714: 0xafa20318  sw          $v0, 0x318($sp)
    ctx->pc = 0x208714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 792), GPR_U32(ctx, 2));
    // 0x208718: 0x8fa40318  lw          $a0, 0x318($sp)
    ctx->pc = 0x208718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 792)));
    // 0x20871c: 0xc063dd0  jal         func_18F740
    ctx->pc = 0x20871Cu;
    SET_GPR_U32(ctx, 31, 0x208724u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x20871Cu, 0x208724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208724u;
label_208724:
    // 0x208724: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x208724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208728: 0xc0aeea8  jal         func_2BBAA0
    ctx->pc = 0x208728u;
    SET_GPR_U32(ctx, 31, 0x208730u);
    ctx->pc = 0x2BBAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBAA0u, 0x208728u, 0x208730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208730u;
label_208730:
    // 0x208730: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x208730u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208734: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x208734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x208738: 0xafa40314  sw          $a0, 0x314($sp)
    ctx->pc = 0x208738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 788), GPR_U32(ctx, 4));
    // 0x20873c: 0x8fa50314  lw          $a1, 0x314($sp)
    ctx->pc = 0x20873cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 788)));
    // 0x208740: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x208740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208744: 0xc048b18  jal         func_122C60
    ctx->pc = 0x208744u;
    SET_GPR_U32(ctx, 31, 0x20874Cu);
    ctx->pc = 0x122C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C60u, 0x208744u, 0x20874Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20874Cu;
label_20874c:
    // 0x20874c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20874cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208750: 0x27859a68  addiu       $a1, $gp, -0x6598
    ctx->pc = 0x208750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941288));
    // 0x208754: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x208754u;
    SET_GPR_U32(ctx, 31, 0x20875Cu);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x208754u, 0x20875Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20875Cu;
label_20875c:
    // 0x20875c: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x20875cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x208760: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x208760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x208764: 0xa0b00138  sb          $s0, 0x138($a1)
    ctx->pc = 0x208764u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 312), (uint8_t)GPR_U32(ctx, 16));
    // 0x208768: 0x8fa30314  lw          $v1, 0x314($sp)
    ctx->pc = 0x208768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 788)));
    // 0x20876c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x20876cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208770: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x208770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x208774: 0xc085538  jal         func_2154E0
    ctx->pc = 0x208774u;
    SET_GPR_U32(ctx, 31, 0x20877Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x208774u, 0x20877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20877Cu;
label_20877c:
    // 0x20877c: 0xafa20310  sw          $v0, 0x310($sp)
    ctx->pc = 0x20877cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 2));
    // 0x208780: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x208780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x208784: 0x8fa50310  lw          $a1, 0x310($sp)
    ctx->pc = 0x208784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x208788: 0xc090f80  jal         func_243E00
    ctx->pc = 0x208788u;
    SET_GPR_U32(ctx, 31, 0x208790u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x208788u, 0x208790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208790u;
label_208790:
    // 0x208790: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x208790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x208794: 0x246400a4  addiu       $a0, $v1, 0xA4
    ctx->pc = 0x208794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 164));
    // 0x208798: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x208798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x20879c: 0xc041d58  jal         func_107560
    ctx->pc = 0x20879Cu;
    SET_GPR_U32(ctx, 31, 0x2087A4u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x20879Cu, 0x2087A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2087A4u;
label_2087a4:
    // 0x2087a4: 0x8fa50310  lw          $a1, 0x310($sp)
    ctx->pc = 0x2087a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x2087a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2087a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2087ac: 0xc091008  jal         func_244020
    ctx->pc = 0x2087ACu;
    SET_GPR_U32(ctx, 31, 0x2087B4u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x2087ACu, 0x2087B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2087B4u;
label_2087b4:
    // 0x2087b4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2087b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2087b8: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x2087b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2087bc: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x2087bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x2087c0: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x2087c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2087c4: 0xc4a100b0  lwc1        $f1, 0xB0($a1)
    ctx->pc = 0x2087c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2087c8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2087c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2087cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2087ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2087d0: 0x0  nop
    ctx->pc = 0x2087d0u;
    // NOP
    // 0x2087d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2087d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2087d8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2087D8u;
    {
        const bool branch_taken_0x2087d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2087d8) {
            ctx->pc = 0x208804u;
            goto label_208804;
        }
    }
    ctx->pc = 0x2087E0u;
    // 0x2087e0: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x2087e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2087e4: 0xc48100b0  lwc1        $f1, 0xB0($a0)
    ctx->pc = 0x2087e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2087e8: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x2087e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x2087ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2087ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2087f0: 0x0  nop
    ctx->pc = 0x2087f0u;
    // NOP
    // 0x2087f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2087f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2087f8: 0xe48000b0  swc1        $f0, 0xB0($a0)
    ctx->pc = 0x2087f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 176), bits); }
    // 0x2087fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2087FCu;
    {
        const bool branch_taken_0x2087fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2087fc) {
            ctx->pc = 0x208840u;
            goto label_208840;
        }
    }
    ctx->pc = 0x208804u;
label_208804:
    // 0x208804: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x208804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x208808: 0xc44100b0  lwc1        $f1, 0xB0($v0)
    ctx->pc = 0x208808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20880c: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x20880cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
    // 0x208810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208814: 0x0  nop
    ctx->pc = 0x208814u;
    // NOP
    // 0x208818: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x208818u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20881c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x20881Cu;
    {
        const bool branch_taken_0x20881c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20881c) {
            ctx->pc = 0x208840u;
            goto label_208840;
        }
    }
    ctx->pc = 0x208824u;
    // 0x208824: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x208824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x208828: 0xc4a100b0  lwc1        $f1, 0xB0($a1)
    ctx->pc = 0x208828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20882c: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x20882cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x208830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208834: 0x0  nop
    ctx->pc = 0x208834u;
    // NOP
    // 0x208838: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x208838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20883c: 0xe4a000b0  swc1        $f0, 0xB0($a1)
    ctx->pc = 0x20883cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 176), bits); }
label_208840:
    // 0x208840: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x208840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x208844: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x208844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208848: 0xc4a000b0  lwc1        $f0, 0xB0($a1)
    ctx->pc = 0x208848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20884c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20884cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x208850: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x208850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x208854: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208858: 0x0  nop
    ctx->pc = 0x208858u;
    // NOP
    // 0x20885c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x20885cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x208860: 0x0  nop
    ctx->pc = 0x208860u;
    // NOP
    // 0x208864: 0x0  nop
    ctx->pc = 0x208864u;
    // NOP
    // 0x208868: 0x0  nop
    ctx->pc = 0x208868u;
    // NOP
    // 0x20886c: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x20886Cu;
    SET_GPR_U32(ctx, 31, 0x208874u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x20886Cu, 0x208874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208874u;
label_208874:
    // 0x208874: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x208874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x208878: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x208878u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20887c: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x20887cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x208880: 0xc4a200ac  lwc1        $f2, 0xAC($a1)
    ctx->pc = 0x208880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x208884: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x208884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x208888: 0x0  nop
    ctx->pc = 0x208888u;
    // NOP
    // 0x20888c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x20888cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x208890: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x208890u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x208894: 0xe4a000ac  swc1        $f0, 0xAC($a1)
    ctx->pc = 0x208894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 172), bits); }
    // 0x208898: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x208898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20889c: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x20889cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2088a0: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x2088a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2088a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2088a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2088a8: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x2088a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
    // 0x2088ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2088acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2088b0: 0x0  nop
    ctx->pc = 0x2088b0u;
    // NOP
    // 0x2088b4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2088b4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2088b8: 0x0  nop
    ctx->pc = 0x2088b8u;
    // NOP
    // 0x2088bc: 0x0  nop
    ctx->pc = 0x2088bcu;
    // NOP
    // 0x2088c0: 0x0  nop
    ctx->pc = 0x2088c0u;
    // NOP
    // 0x2088c4: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x2088C4u;
    SET_GPR_U32(ctx, 31, 0x2088CCu);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x2088C4u, 0x2088CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2088CCu;
label_2088cc:
    // 0x2088cc: 0x3c104120  lui         $s0, 0x4120
    ctx->pc = 0x2088ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16672 << 16));
    // 0x2088d0: 0x44901800  mtc1        $s0, $f3
    ctx->pc = 0x2088d0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2088d4: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x2088d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2088d8: 0xc44200a4  lwc1        $f2, 0xA4($v0)
    ctx->pc = 0x2088d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2088dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2088dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2088e0: 0x0  nop
    ctx->pc = 0x2088e0u;
    // NOP
    // 0x2088e4: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x2088e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x2088e8: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x2088e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x2088ec: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x2088ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2088f0: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x2088f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2088f4: 0xc46c00b0  lwc1        $f12, 0xB0($v1)
    ctx->pc = 0x2088f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2088f8: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x2088F8u;
    SET_GPR_U32(ctx, 31, 0x208900u);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x2088F8u, 0x208900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208900u;
label_208900:
    // 0x208900: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x208900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208904: 0xc0c3808  jal         func_30E020
    ctx->pc = 0x208904u;
    SET_GPR_U32(ctx, 31, 0x20890Cu);
    ctx->pc = 0x30E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E020u, 0x208904u, 0x20890Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20890Cu;
label_20890c:
    // 0x20890c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20890cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208910: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x208910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x208914: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x208914u;
    SET_GPR_U32(ctx, 31, 0x20891Cu);
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x208914u, 0x20891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20891Cu;
label_20891c:
    // 0x20891c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20891cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208920: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x208920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208924: 0xc0bed82  jal         func_2FB608
    ctx->pc = 0x208924u;
    SET_GPR_U32(ctx, 31, 0x20892Cu);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x208924u, 0x20892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20892Cu;
label_20892c:
    // 0x20892c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20892cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208930: 0xc0c3808  jal         func_30E020
    ctx->pc = 0x208930u;
    SET_GPR_U32(ctx, 31, 0x208938u);
    ctx->pc = 0x30E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E020u, 0x208930u, 0x208938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208938u;
label_208938:
    // 0x208938: 0xdf858018  ld          $a1, -0x7FE8($gp)
    ctx->pc = 0x208938u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x20893c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20893cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208940: 0xc09007c  jal         func_2401F0
    ctx->pc = 0x208940u;
    SET_GPR_U32(ctx, 31, 0x208948u);
    ctx->pc = 0x2401F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2401F0u, 0x208940u, 0x208948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208948u;
label_208948:
    // 0x208948: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x208948u;
    {
        const bool branch_taken_0x208948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208948) {
            ctx->pc = 0x208968u;
            goto label_208968;
        }
    }
    ctx->pc = 0x208950u;
    // 0x208950: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x208950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x208954: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x208954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x208958: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x208958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20895c: 0xc4a000b0  lwc1        $f0, 0xB0($a1)
    ctx->pc = 0x20895cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208960: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x208960u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x208964: 0xe4a000b0  swc1        $f0, 0xB0($a1)
    ctx->pc = 0x208964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 176), bits); }
label_208968:
    // 0x208968: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x208968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20896c: 0xc44100b0  lwc1        $f1, 0xB0($v0)
    ctx->pc = 0x20896cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208970: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x208970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x208974: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x208974u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208978: 0x0  nop
    ctx->pc = 0x208978u;
    // NOP
    // 0x20897c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x20897cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x208980: 0xc780825c  lwc1        $f0, -0x7DA4($gp)
    ctx->pc = 0x208980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208984: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x208984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x208988: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x208988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20898c: 0xe4a000e4  swc1        $f0, 0xE4($a1)
    ctx->pc = 0x20898cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 228), bits); }
    // 0x208990: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x208990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x208994: 0xe48000e0  swc1        $f0, 0xE0($a0)
    ctx->pc = 0x208994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x208998: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x208998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x20899c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20899cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2089a0: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2089A0u;
    SET_GPR_U32(ctx, 31, 0x2089A8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2089A0u, 0x2089A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2089A8u;
label_2089a8:
    // 0x2089a8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2089a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2089ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2089acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2089b0: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2089B0u;
    SET_GPR_U32(ctx, 31, 0x2089B8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2089B0u, 0x2089B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2089B8u;
label_2089b8:
    // 0x2089b8: 0xafa202f8  sw          $v0, 0x2F8($sp)
    ctx->pc = 0x2089b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 760), GPR_U32(ctx, 2));
    // 0x2089bc: 0x8fa202f8  lw          $v0, 0x2F8($sp)
    ctx->pc = 0x2089bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
    // 0x2089c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2089C0u;
    {
        const bool branch_taken_0x2089c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2089c0) {
            ctx->pc = 0x2089D8u;
            goto label_2089d8;
        }
    }
    ctx->pc = 0x2089C8u;
    // 0x2089c8: 0x8fa402f8  lw          $a0, 0x2F8($sp)
    ctx->pc = 0x2089c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
    // 0x2089cc: 0xc083f2c  jal         func_20FCB0
    ctx->pc = 0x2089CCu;
    SET_GPR_U32(ctx, 31, 0x2089D4u);
    ctx->pc = 0x20FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FCB0u, 0x2089CCu, 0x2089D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2089D4u;
label_2089d4:
    // 0x2089d4: 0xafa202f8  sw          $v0, 0x2F8($sp)
    ctx->pc = 0x2089d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 760), GPR_U32(ctx, 2));
label_2089d8:
    // 0x2089d8: 0x8fa302f8  lw          $v1, 0x2F8($sp)
    ctx->pc = 0x2089d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
    // 0x2089dc: 0xafa3030c  sw          $v1, 0x30C($sp)
    ctx->pc = 0x2089dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 780), GPR_U32(ctx, 3));
    // 0x2089e0: 0x3c0541f0  lui         $a1, 0x41F0
    ctx->pc = 0x2089e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16880 << 16));
    // 0x2089e4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2089e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2089e8: 0x8fa2030c  lw          $v0, 0x30C($sp)
    ctx->pc = 0x2089e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x2089ec: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2089ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2089f0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2089f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2089f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2089f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2089f8: 0x8fa4030c  lw          $a0, 0x30C($sp)
    ctx->pc = 0x2089f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x2089fc: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2089fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x208a00: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x208a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x208a04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208a08: 0x8fa2030c  lw          $v0, 0x30C($sp)
    ctx->pc = 0x208a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208a0c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x208a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x208a10: 0x3c054040  lui         $a1, 0x4040
    ctx->pc = 0x208a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16448 << 16));
    // 0x208a14: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x208a14u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208a18: 0x8fa5030c  lw          $a1, 0x30C($sp)
    ctx->pc = 0x208a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208a1c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x208a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x208a20: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x208a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x208a24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208a28: 0x8fa5030c  lw          $a1, 0x30C($sp)
    ctx->pc = 0x208a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208a2c: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x208a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x208a30: 0x27a20250  addiu       $v0, $sp, 0x250
    ctx->pc = 0x208a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x208a34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x208a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208a38: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x208a38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x208a3c: 0x24a592c0  addiu       $a1, $a1, -0x6D40
    ctx->pc = 0x208a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939328));
    // 0x208a40: 0xc040304  jal         func_100C10
    ctx->pc = 0x208A40u;
    SET_GPR_U32(ctx, 31, 0x208A48u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x208A40u, 0x208A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A48u;
label_208a48:
    // 0x208a48: 0x8fa3030c  lw          $v1, 0x30C($sp)
    ctx->pc = 0x208a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208a4c: 0x2464001c  addiu       $a0, $v1, 0x1C
    ctx->pc = 0x208a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x208a50: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x208a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x208a54: 0xc082c78  jal         func_20B1E0
    ctx->pc = 0x208A54u;
    SET_GPR_U32(ctx, 31, 0x208A5Cu);
    ctx->pc = 0x20B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B1E0u, 0x208A54u, 0x208A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A5Cu;
label_208a5c:
    // 0x208a5c: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x208a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x208a60: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x208a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208a64: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x208A64u;
    SET_GPR_U32(ctx, 31, 0x208A6Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x208A64u, 0x208A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A6Cu;
label_208a6c:
    // 0x208a6c: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x208a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x208a70: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x208a70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x208a74: 0x24a592e0  addiu       $a1, $a1, -0x6D20
    ctx->pc = 0x208a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939360));
    // 0x208a78: 0xc040304  jal         func_100C10
    ctx->pc = 0x208A78u;
    SET_GPR_U32(ctx, 31, 0x208A80u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x208A78u, 0x208A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A80u;
label_208a80:
    // 0x208a80: 0x8fa2030c  lw          $v0, 0x30C($sp)
    ctx->pc = 0x208a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208a84: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x208a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x208a88: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x208a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x208a8c: 0xc082c78  jal         func_20B1E0
    ctx->pc = 0x208A8Cu;
    SET_GPR_U32(ctx, 31, 0x208A94u);
    ctx->pc = 0x20B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B1E0u, 0x208A8Cu, 0x208A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A94u;
label_208a94:
    // 0x208a94: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x208a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x208a98: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x208a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208a9c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x208A9Cu;
    SET_GPR_U32(ctx, 31, 0x208AA4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x208A9Cu, 0x208AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208AA4u;
label_208aa4:
    // 0x208aa4: 0x8fa2030c  lw          $v0, 0x30C($sp)
    ctx->pc = 0x208aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208aa8: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x208aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x208aac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x208aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ab0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x208ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x208ab4: 0x24a59300  addiu       $a1, $a1, -0x6D00
    ctx->pc = 0x208ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939392));
    // 0x208ab8: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x208AB8u;
    SET_GPR_U32(ctx, 31, 0x208AC0u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x208AB8u, 0x208AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208AC0u;
label_208ac0:
    // 0x208ac0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x208ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x208ac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208ac8: 0x8fa3030c  lw          $v1, 0x30C($sp)
    ctx->pc = 0x208ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208acc: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x208accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x208ad0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x208ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x208ad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208ad8: 0x8fa5030c  lw          $a1, 0x30C($sp)
    ctx->pc = 0x208ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208adc: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x208adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x208ae0: 0x8fa3030c  lw          $v1, 0x30C($sp)
    ctx->pc = 0x208ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208ae4: 0xa0600034  sb          $zero, 0x34($v1)
    ctx->pc = 0x208ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 52), (uint8_t)GPR_U32(ctx, 0));
    // 0x208ae8: 0x8fa4030c  lw          $a0, 0x30C($sp)
    ctx->pc = 0x208ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208aec: 0xc083f80  jal         func_20FE00
    ctx->pc = 0x208AECu;
    SET_GPR_U32(ctx, 31, 0x208AF4u);
    ctx->pc = 0x20FE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE00u, 0x208AECu, 0x208AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208AF4u;
label_208af4:
    // 0x208af4: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x208af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x208af8: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x208af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x208afc: 0x27a5030c  addiu       $a1, $sp, 0x30C
    ctx->pc = 0x208afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 780));
    // 0x208b00: 0xc082b98  jal         func_20AE60
    ctx->pc = 0x208B00u;
    SET_GPR_U32(ctx, 31, 0x208B08u);
    ctx->pc = 0x20AE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE60u, 0x208B00u, 0x208B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B08u;
label_208b08:
    // 0x208b08: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x208b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x208b0c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x208B0Cu;
    SET_GPR_U32(ctx, 31, 0x208B14u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x208B0Cu, 0x208B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B14u;
label_208b14:
    // 0x208b14: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x208b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x208b18: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x208b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208b1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x208b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208b20: 0xc0400e0  jal         func_100380
    ctx->pc = 0x208B20u;
    SET_GPR_U32(ctx, 31, 0x208B28u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x208B20u, 0x208B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B28u;
label_208b28:
    // 0x208b28: 0xafa202f4  sw          $v0, 0x2F4($sp)
    ctx->pc = 0x208b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 2));
    // 0x208b2c: 0x8fa502f4  lw          $a1, 0x2F4($sp)
    ctx->pc = 0x208b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
    // 0x208b30: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x208B30u;
    {
        const bool branch_taken_0x208b30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x208b30) {
            ctx->pc = 0x208B48u;
            goto label_208b48;
        }
    }
    ctx->pc = 0x208B38u;
    // 0x208b38: 0x8fa402f4  lw          $a0, 0x2F4($sp)
    ctx->pc = 0x208b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
    // 0x208b3c: 0xc083f2c  jal         func_20FCB0
    ctx->pc = 0x208B3Cu;
    SET_GPR_U32(ctx, 31, 0x208B44u);
    ctx->pc = 0x20FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FCB0u, 0x208B3Cu, 0x208B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B44u;
label_208b44:
    // 0x208b44: 0xafa202f4  sw          $v0, 0x2F4($sp)
    ctx->pc = 0x208b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 2));
label_208b48:
    // 0x208b48: 0x8fa502f4  lw          $a1, 0x2F4($sp)
    ctx->pc = 0x208b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
    // 0x208b4c: 0xafa5030c  sw          $a1, 0x30C($sp)
    ctx->pc = 0x208b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 780), GPR_U32(ctx, 5));
    // 0x208b50: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x208b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
    // 0x208b54: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x208b54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208b58: 0x8fa2030c  lw          $v0, 0x30C($sp)
    ctx->pc = 0x208b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208b5c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x208b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x208b60: 0x3c1041f0  lui         $s0, 0x41F0
    ctx->pc = 0x208b60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16880 << 16));
    // 0x208b64: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x208b64u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208b68: 0x8fa2030c  lw          $v0, 0x30C($sp)
    ctx->pc = 0x208b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208b6c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x208b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x208b70: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x208b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
    // 0x208b74: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x208b74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208b78: 0x8fa2030c  lw          $v0, 0x30C($sp)
    ctx->pc = 0x208b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208b7c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x208b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x208b80: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x208b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x208b84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208b88: 0x8fa4030c  lw          $a0, 0x30C($sp)
    ctx->pc = 0x208b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208b8c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x208b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x208b90: 0x3c053e80  lui         $a1, 0x3E80
    ctx->pc = 0x208b90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16000 << 16));
    // 0x208b94: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x208b94u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208b98: 0x8fa4030c  lw          $a0, 0x30C($sp)
    ctx->pc = 0x208b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208b9c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x208b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x208ba0: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x208ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x208ba4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x208ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x208ba8: 0x24a592c0  addiu       $a1, $a1, -0x6D40
    ctx->pc = 0x208ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939328));
    // 0x208bac: 0xc040304  jal         func_100C10
    ctx->pc = 0x208BACu;
    SET_GPR_U32(ctx, 31, 0x208BB4u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x208BACu, 0x208BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208BB4u;
label_208bb4:
    // 0x208bb4: 0x8fa5030c  lw          $a1, 0x30C($sp)
    ctx->pc = 0x208bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208bb8: 0x24a5001c  addiu       $a1, $a1, 0x1C
    ctx->pc = 0x208bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
    // 0x208bbc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x208bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208bc0: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x208bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x208bc4: 0xc082c78  jal         func_20B1E0
    ctx->pc = 0x208BC4u;
    SET_GPR_U32(ctx, 31, 0x208BCCu);
    ctx->pc = 0x20B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B1E0u, 0x208BC4u, 0x208BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208BCCu;
label_208bcc:
    // 0x208bcc: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x208bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x208bd0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x208bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208bd4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x208bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208bd8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x208BD8u;
    SET_GPR_U32(ctx, 31, 0x208BE0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x208BD8u, 0x208BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208BE0u;
label_208be0:
    // 0x208be0: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x208be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x208be4: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x208be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x208be8: 0x246392e0  addiu       $v1, $v1, -0x6D20
    ctx->pc = 0x208be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939360));
    // 0x208bec: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x208becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208bf0: 0xc040304  jal         func_100C10
    ctx->pc = 0x208BF0u;
    SET_GPR_U32(ctx, 31, 0x208BF8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x208BF0u, 0x208BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208BF8u;
label_208bf8:
    // 0x208bf8: 0x8fa4030c  lw          $a0, 0x30C($sp)
    ctx->pc = 0x208bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208bfc: 0x2484001c  addiu       $a0, $a0, 0x1C
    ctx->pc = 0x208bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x208c00: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x208c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x208c04: 0xc082c78  jal         func_20B1E0
    ctx->pc = 0x208C04u;
    SET_GPR_U32(ctx, 31, 0x208C0Cu);
    ctx->pc = 0x20B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B1E0u, 0x208C04u, 0x208C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208C0Cu;
label_208c0c:
    // 0x208c0c: 0x27a20220  addiu       $v0, $sp, 0x220
    ctx->pc = 0x208c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x208c10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x208c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208c14: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x208c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208c18: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x208c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208c1c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x208C1Cu;
    SET_GPR_U32(ctx, 31, 0x208C24u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x208C1Cu, 0x208C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208C24u;
label_208c24:
    // 0x208c24: 0x8fa2030c  lw          $v0, 0x30C($sp)
    ctx->pc = 0x208c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208c28: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x208c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x208c2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x208c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208c30: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x208c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x208c34: 0x24a59320  addiu       $a1, $a1, -0x6CE0
    ctx->pc = 0x208c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939424));
    // 0x208c38: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x208C38u;
    SET_GPR_U32(ctx, 31, 0x208C40u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x208C38u, 0x208C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208C40u;
label_208c40:
    // 0x208c40: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x208c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x208c44: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x208c44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208c48: 0x8fa3030c  lw          $v1, 0x30C($sp)
    ctx->pc = 0x208c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208c4c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x208c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x208c50: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x208c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x208c54: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x208c54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208c58: 0x8fa5030c  lw          $a1, 0x30C($sp)
    ctx->pc = 0x208c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208c5c: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x208c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x208c60: 0x8fa2030c  lw          $v0, 0x30C($sp)
    ctx->pc = 0x208c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208c64: 0xa0400034  sb          $zero, 0x34($v0)
    ctx->pc = 0x208c64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 52), (uint8_t)GPR_U32(ctx, 0));
    // 0x208c68: 0x8fa5030c  lw          $a1, 0x30C($sp)
    ctx->pc = 0x208c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208c6c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x208c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208c70: 0xc083f80  jal         func_20FE00
    ctx->pc = 0x208C70u;
    SET_GPR_U32(ctx, 31, 0x208C78u);
    ctx->pc = 0x20FE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE00u, 0x208C70u, 0x208C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208C78u;
label_208c78:
    // 0x208c78: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x208c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x208c7c: 0x2485012c  addiu       $a1, $a0, 0x12C
    ctx->pc = 0x208c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 300));
    // 0x208c80: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x208c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208c84: 0x27a5030c  addiu       $a1, $sp, 0x30C
    ctx->pc = 0x208c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 780));
    // 0x208c88: 0xc082b98  jal         func_20AE60
    ctx->pc = 0x208C88u;
    SET_GPR_U32(ctx, 31, 0x208C90u);
    ctx->pc = 0x20AE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE60u, 0x208C88u, 0x208C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208C90u;
label_208c90:
    // 0x208c90: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x208c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x208c94: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x208C94u;
    SET_GPR_U32(ctx, 31, 0x208C9Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x208C94u, 0x208C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208C9Cu;
label_208c9c:
    // 0x208c9c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x208c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x208ca0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x208ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ca4: 0xc0400e0  jal         func_100380
    ctx->pc = 0x208CA4u;
    SET_GPR_U32(ctx, 31, 0x208CACu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x208CA4u, 0x208CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208CACu;
label_208cac:
    // 0x208cac: 0xafa202f0  sw          $v0, 0x2F0($sp)
    ctx->pc = 0x208cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 2));
    // 0x208cb0: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x208cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x208cb4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x208CB4u;
    {
        const bool branch_taken_0x208cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208cb4) {
            ctx->pc = 0x208CD0u;
            goto label_208cd0;
        }
    }
    ctx->pc = 0x208CBCu;
    // 0x208cbc: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x208cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x208cc0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x208cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208cc4: 0xc083f2c  jal         func_20FCB0
    ctx->pc = 0x208CC4u;
    SET_GPR_U32(ctx, 31, 0x208CCCu);
    ctx->pc = 0x20FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FCB0u, 0x208CC4u, 0x208CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208CCCu;
label_208ccc:
    // 0x208ccc: 0xafa202f0  sw          $v0, 0x2F0($sp)
    ctx->pc = 0x208cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 2));
label_208cd0:
    // 0x208cd0: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x208cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x208cd4: 0xafa2030c  sw          $v0, 0x30C($sp)
    ctx->pc = 0x208cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 780), GPR_U32(ctx, 2));
    // 0x208cd8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x208cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x208cdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208ce0: 0x8fb4030c  lw          $s4, 0x30C($sp)
    ctx->pc = 0x208ce0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208ce4: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x208ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x208ce8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x208ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x208cec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208cf0: 0x8fa4030c  lw          $a0, 0x30C($sp)
    ctx->pc = 0x208cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208cf4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x208cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x208cf8: 0x3c054080  lui         $a1, 0x4080
    ctx->pc = 0x208cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16512 << 16));
    // 0x208cfc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x208cfcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208d00: 0x8fa2030c  lw          $v0, 0x30C($sp)
    ctx->pc = 0x208d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208d04: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x208d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x208d08: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x208d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x208d0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x208d0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208d10: 0x8fa6030c  lw          $a2, 0x30C($sp)
    ctx->pc = 0x208d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208d14: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x208d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x208d18: 0x3c043e80  lui         $a0, 0x3E80
    ctx->pc = 0x208d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16000 << 16));
    // 0x208d1c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x208d1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208d20: 0x8fa5030c  lw          $a1, 0x30C($sp)
    ctx->pc = 0x208d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208d24: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x208d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x208d28: 0x27a20210  addiu       $v0, $sp, 0x210
    ctx->pc = 0x208d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x208d2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x208d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208d30: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x208d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x208d34: 0x24429340  addiu       $v0, $v0, -0x6CC0
    ctx->pc = 0x208d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939456));
    // 0x208d38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x208d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208d3c: 0xc040304  jal         func_100C10
    ctx->pc = 0x208D3Cu;
    SET_GPR_U32(ctx, 31, 0x208D44u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x208D3Cu, 0x208D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208D44u;
label_208d44:
    // 0x208d44: 0x8fa4030c  lw          $a0, 0x30C($sp)
    ctx->pc = 0x208d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208d48: 0x2485001c  addiu       $a1, $a0, 0x1C
    ctx->pc = 0x208d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x208d4c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x208d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208d50: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x208d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x208d54: 0xc082c78  jal         func_20B1E0
    ctx->pc = 0x208D54u;
    SET_GPR_U32(ctx, 31, 0x208D5Cu);
    ctx->pc = 0x20B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B1E0u, 0x208D54u, 0x208D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208D5Cu;
label_208d5c:
    // 0x208d5c: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x208d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x208d60: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x208d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208d64: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x208d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208d68: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x208D68u;
    SET_GPR_U32(ctx, 31, 0x208D70u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x208D68u, 0x208D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208D70u;
label_208d70:
    // 0x208d70: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x208d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x208d74: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x208d74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x208d78: 0x24a59360  addiu       $a1, $a1, -0x6CA0
    ctx->pc = 0x208d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939488));
    // 0x208d7c: 0xc040304  jal         func_100C10
    ctx->pc = 0x208D7Cu;
    SET_GPR_U32(ctx, 31, 0x208D84u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x208D7Cu, 0x208D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208D84u;
label_208d84:
    // 0x208d84: 0x8fa4030c  lw          $a0, 0x30C($sp)
    ctx->pc = 0x208d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208d88: 0x2485001c  addiu       $a1, $a0, 0x1C
    ctx->pc = 0x208d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x208d8c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x208d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208d90: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x208d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x208d94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x208d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208d98: 0xc082c78  jal         func_20B1E0
    ctx->pc = 0x208D98u;
    SET_GPR_U32(ctx, 31, 0x208DA0u);
    ctx->pc = 0x20B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B1E0u, 0x208D98u, 0x208DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208DA0u;
label_208da0:
    // 0x208da0: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x208da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x208da4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x208da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208da8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x208DA8u;
    SET_GPR_U32(ctx, 31, 0x208DB0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x208DA8u, 0x208DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208DB0u;
label_208db0:
    // 0x208db0: 0x8fa3030c  lw          $v1, 0x30C($sp)
    ctx->pc = 0x208db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208db4: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x208db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x208db8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x208db8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x208dbc: 0x24a59380  addiu       $a1, $a1, -0x6C80
    ctx->pc = 0x208dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939520));
    // 0x208dc0: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x208DC0u;
    SET_GPR_U32(ctx, 31, 0x208DC8u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x208DC0u, 0x208DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208DC8u;
label_208dc8:
    // 0x208dc8: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x208dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x208dcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x208dccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208dd0: 0x8fa2030c  lw          $v0, 0x30C($sp)
    ctx->pc = 0x208dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208dd4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x208dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x208dd8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x208dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x208ddc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x208ddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208de0: 0x8fa2030c  lw          $v0, 0x30C($sp)
    ctx->pc = 0x208de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208de4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x208de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x208de8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x208de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208dec: 0x8fa5030c  lw          $a1, 0x30C($sp)
    ctx->pc = 0x208decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208df0: 0xa0a40034  sb          $a0, 0x34($a1)
    ctx->pc = 0x208df0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 52), (uint8_t)GPR_U32(ctx, 4));
    // 0x208df4: 0x8fa4030c  lw          $a0, 0x30C($sp)
    ctx->pc = 0x208df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x208df8: 0xc083f80  jal         func_20FE00
    ctx->pc = 0x208DF8u;
    SET_GPR_U32(ctx, 31, 0x208E00u);
    ctx->pc = 0x20FE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE00u, 0x208DF8u, 0x208E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208E00u;
label_208e00:
    // 0x208e00: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x208e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x208e04: 0x2485012c  addiu       $a1, $a0, 0x12C
    ctx->pc = 0x208e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 300));
    // 0x208e08: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x208e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e0c: 0x27a5030c  addiu       $a1, $sp, 0x30C
    ctx->pc = 0x208e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 780));
    // 0x208e10: 0xc082b98  jal         func_20AE60
    ctx->pc = 0x208E10u;
    SET_GPR_U32(ctx, 31, 0x208E18u);
    ctx->pc = 0x20AE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE60u, 0x208E10u, 0x208E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208E18u;
label_208e18:
    // 0x208e18: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x208e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x208e1c: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x208e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x208e20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x208e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e24: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x208e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x208e28: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x208e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e2c: 0x27859a70  addiu       $a1, $gp, -0x6590
    ctx->pc = 0x208e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941296));
    // 0x208e30: 0xc040304  jal         func_100C10
    ctx->pc = 0x208E30u;
    SET_GPR_U32(ctx, 31, 0x208E38u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x208E30u, 0x208E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208E38u;
label_208e38:
    // 0x208e38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e3c: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x208e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x208e40: 0xc05c618  jal         func_171860
    ctx->pc = 0x208E40u;
    SET_GPR_U32(ctx, 31, 0x208E48u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x208E40u, 0x208E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208E48u;
label_208e48:
    // 0x208e48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x208e48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e4c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x208e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x208e50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x208e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208e54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x208e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e58: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x208E58u;
    SET_GPR_U32(ctx, 31, 0x208E60u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x208E58u, 0x208E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208E60u;
label_208e60:
    // 0x208e60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x208e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208e64: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x208E64u;
    {
        const bool branch_taken_0x208e64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x208e64) {
            ctx->pc = 0x208EA8u;
            goto label_208ea8;
        }
    }
    ctx->pc = 0x208E6Cu;
    // 0x208e6c: 0x26040003  addiu       $a0, $s0, 0x3
    ctx->pc = 0x208e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x208e70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x208e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e78: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x208E78u;
    SET_GPR_U32(ctx, 31, 0x208E80u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x208E78u, 0x208E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208E80u;
label_208e80:
    // 0x208e80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x208e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e84: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x208e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x208e88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x208e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e8c: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x208E8Cu;
    SET_GPR_U32(ctx, 31, 0x208E94u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x208E8Cu, 0x208E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208E94u;
label_208e94:
    // 0x208e94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x208e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e98: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x208e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x208e9c: 0xac4400b4  sw          $a0, 0xB4($v0)
    ctx->pc = 0x208e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 4));
    // 0x208ea0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x208EA0u;
    {
        const bool branch_taken_0x208ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208ea0) {
            ctx->pc = 0x208EB4u;
            goto label_208eb4;
        }
    }
    ctx->pc = 0x208EA8u;
label_208ea8:
    // 0x208ea8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x208ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x208eac: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x208eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x208eb0: 0xac8300b4  sw          $v1, 0xB4($a0)
    ctx->pc = 0x208eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 3));
label_208eb4:
    // 0x208eb4: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x208eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x208eb8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x208eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ebc: 0x27829a74  addiu       $v0, $gp, -0x658C
    ctx->pc = 0x208ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941300));
    // 0x208ec0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x208ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ec4: 0xc040304  jal         func_100C10
    ctx->pc = 0x208EC4u;
    SET_GPR_U32(ctx, 31, 0x208ECCu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x208EC4u, 0x208ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208ECCu;
label_208ecc:
    // 0x208ecc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x208eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ed0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ed4: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x208ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x208ed8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x208ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208edc: 0xc05c618  jal         func_171860
    ctx->pc = 0x208EDCu;
    SET_GPR_U32(ctx, 31, 0x208EE4u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x208EDCu, 0x208EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208EE4u;
label_208ee4:
    // 0x208ee4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x208ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ee8: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x208ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x208eec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x208eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ef0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x208ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208ef4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x208ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ef8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x208EF8u;
    SET_GPR_U32(ctx, 31, 0x208F00u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x208EF8u, 0x208F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F00u;
label_208f00:
    // 0x208f00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x208f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208f04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x208f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208f08: 0x1202001a  beq         $s0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x208F08u;
    {
        const bool branch_taken_0x208f08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x208f08) {
            ctx->pc = 0x208F74u;
            goto label_208f74;
        }
    }
    ctx->pc = 0x208F10u;
    // 0x208f10: 0x26040003  addiu       $a0, $s0, 0x3
    ctx->pc = 0x208f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x208f14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x208f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208f18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208f1c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x208F1Cu;
    SET_GPR_U32(ctx, 31, 0x208F24u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x208F1Cu, 0x208F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F24u;
label_208f24:
    // 0x208f24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x208f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208f28: 0xb01821  addu        $v1, $a1, $s0
    ctx->pc = 0x208f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x208f2c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x208f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208f30: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x208F30u;
    SET_GPR_U32(ctx, 31, 0x208F38u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x208F30u, 0x208F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F38u;
label_208f38:
    // 0x208f38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x208f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208f3c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x208F3Cu;
    SET_GPR_U32(ctx, 31, 0x208F44u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x208F3Cu, 0x208F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F44u;
label_208f44:
    // 0x208f44: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x208f44u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x208f48: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x208f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x208f4c: 0x24a2012c  addiu       $v0, $a1, 0x12C
    ctx->pc = 0x208f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 300));
    // 0x208f50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x208f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208f54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208f58: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x208F58u;
    SET_GPR_U32(ctx, 31, 0x208F60u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x208F58u, 0x208F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F60u;
label_208f60:
    // 0x208f60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x208f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208f64: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x208f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x208f68: 0xe454003c  swc1        $f20, 0x3C($v0)
    ctx->pc = 0x208f68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x208f6c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x208F6Cu;
    {
        const bool branch_taken_0x208f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208f6c) {
            ctx->pc = 0x208F98u;
            goto label_208f98;
        }
    }
    ctx->pc = 0x208F74u;
label_208f74:
    // 0x208f74: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x208f74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x208f78: 0x4485a000  mtc1        $a1, $f20
    ctx->pc = 0x208f78u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x208f7c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x208f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x208f80: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x208f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x208f84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208f88: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x208F88u;
    SET_GPR_U32(ctx, 31, 0x208F90u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x208F88u, 0x208F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F90u;
label_208f90:
    // 0x208f90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x208f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x208f94: 0xe454003c  swc1        $f20, 0x3C($v0)
    ctx->pc = 0x208f94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_208f98:
    // 0x208f98: 0x27a201d0  addiu       $v0, $sp, 0x1D0
    ctx->pc = 0x208f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x208f9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x208f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208fa0: 0x27859a78  addiu       $a1, $gp, -0x6588
    ctx->pc = 0x208fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941304));
    // 0x208fa4: 0xc040304  jal         func_100C10
    ctx->pc = 0x208FA4u;
    SET_GPR_U32(ctx, 31, 0x208FACu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x208FA4u, 0x208FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208FACu;
label_208fac:
    // 0x208fac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208fb0: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x208fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x208fb4: 0xc05c618  jal         func_171860
    ctx->pc = 0x208FB4u;
    SET_GPR_U32(ctx, 31, 0x208FBCu);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x208FB4u, 0x208FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208FBCu;
label_208fbc:
    // 0x208fbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x208fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208fc0: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x208fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x208fc4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x208fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208fc8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x208FC8u;
    SET_GPR_U32(ctx, 31, 0x208FD0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x208FC8u, 0x208FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208FD0u;
label_208fd0:
    // 0x208fd0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x208fd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208fd4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x208fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208fd8: 0x12040017  beq         $s0, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x208FD8u;
    {
        const bool branch_taken_0x208fd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x208fd8) {
            ctx->pc = 0x209038u;
            goto label_209038;
        }
    }
    ctx->pc = 0x208FE0u;
    // 0x208fe0: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x208fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x208fe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208fe8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x208FE8u;
    SET_GPR_U32(ctx, 31, 0x208FF0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x208FE8u, 0x208FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208FF0u;
label_208ff0:
    // 0x208ff0: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x208ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x208ff4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x208ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ff8: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x208FF8u;
    SET_GPR_U32(ctx, 31, 0x209000u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x208FF8u, 0x209000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209000u;
label_209000:
    // 0x209000: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209004: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x209004u;
    SET_GPR_U32(ctx, 31, 0x20900Cu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x209004u, 0x20900Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20900Cu;
label_20900c:
    // 0x20900c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x20900cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x209010: 0x8fb00320  lw          $s0, 0x320($sp)
    ctx->pc = 0x209010u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209014: 0x2604012c  addiu       $a0, $s0, 0x12C
    ctx->pc = 0x209014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 300));
    // 0x209018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20901c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20901cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209020: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x209020u;
    SET_GPR_U32(ctx, 31, 0x209028u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x209020u, 0x209028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209028u;
label_209028:
    // 0x209028: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x209028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20902c: 0xe454003c  swc1        $f20, 0x3C($v0)
    ctx->pc = 0x20902cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x209030: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x209030u;
    {
        const bool branch_taken_0x209030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209030) {
            ctx->pc = 0x20905Cu;
            goto label_20905c;
        }
    }
    ctx->pc = 0x209038u;
label_209038:
    // 0x209038: 0xc79481b8  lwc1        $f20, -0x7E48($gp)
    ctx->pc = 0x209038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20903c: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x20903cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209040: 0x24a2012c  addiu       $v0, $a1, 0x12C
    ctx->pc = 0x209040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 300));
    // 0x209044: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209048: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x209048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20904c: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x20904Cu;
    SET_GPR_U32(ctx, 31, 0x209054u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x20904Cu, 0x209054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209054u;
label_209054:
    // 0x209054: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x209054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209058: 0xe454003c  swc1        $f20, 0x3C($v0)
    ctx->pc = 0x209058u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_20905c:
    // 0x20905c: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x20905cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x209060: 0x27859a7c  addiu       $a1, $gp, -0x6584
    ctx->pc = 0x209060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941308));
    // 0x209064: 0xc040304  jal         func_100C10
    ctx->pc = 0x209064u;
    SET_GPR_U32(ctx, 31, 0x20906Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x209064u, 0x20906Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20906Cu;
label_20906c:
    // 0x20906c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20906cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209074: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x209074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x209078: 0xc05c618  jal         func_171860
    ctx->pc = 0x209078u;
    SET_GPR_U32(ctx, 31, 0x209080u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x209078u, 0x209080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209080u;
label_209080:
    // 0x209080: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x209080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209084: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x209084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x209088: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x209088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20908c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20908cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209090: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x209090u;
    SET_GPR_U32(ctx, 31, 0x209098u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x209090u, 0x209098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209098u;
label_209098:
    // 0x209098: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x209098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20909c: 0x12040019  beq         $s0, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x20909Cu;
    {
        const bool branch_taken_0x20909c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x20909c) {
            ctx->pc = 0x209104u;
            goto label_209104;
        }
    }
    ctx->pc = 0x2090A4u;
    // 0x2090a4: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x2090a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x2090a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2090a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2090ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2090acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2090b0: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2090B0u;
    SET_GPR_U32(ctx, 31, 0x2090B8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2090B0u, 0x2090B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2090B8u;
label_2090b8:
    // 0x2090b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2090b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2090bc: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x2090bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2090c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2090c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2090c4: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x2090C4u;
    SET_GPR_U32(ctx, 31, 0x2090CCu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x2090C4u, 0x2090CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2090CCu;
label_2090cc:
    // 0x2090cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2090ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2090d0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x2090D0u;
    SET_GPR_U32(ctx, 31, 0x2090D8u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x2090D0u, 0x2090D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2090D8u;
label_2090d8:
    // 0x2090d8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2090d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2090dc: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x2090dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2090e0: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x2090e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2090e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2090e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2090e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2090e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2090ec: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x2090ECu;
    SET_GPR_U32(ctx, 31, 0x2090F4u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x2090ECu, 0x2090F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2090F4u;
label_2090f4:
    // 0x2090f4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2090f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2090f8: 0xe4b4003c  swc1        $f20, 0x3C($a1)
    ctx->pc = 0x2090f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x2090fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2090FCu;
    {
        const bool branch_taken_0x2090fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2090fc) {
            ctx->pc = 0x209128u;
            goto label_209128;
        }
    }
    ctx->pc = 0x209104u;
label_209104:
    // 0x209104: 0xc7948288  lwc1        $f20, -0x7D78($gp)
    ctx->pc = 0x209104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x209108: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x209108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20910c: 0x24a2012c  addiu       $v0, $a1, 0x12C
    ctx->pc = 0x20910cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 300));
    // 0x209110: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209114: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x209114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x209118: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x209118u;
    SET_GPR_U32(ctx, 31, 0x209120u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x209118u, 0x209120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209120u;
label_209120:
    // 0x209120: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x209120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209124: 0xe4b4003c  swc1        $f20, 0x3C($a1)
    ctx->pc = 0x209124u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
label_209128:
    // 0x209128: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x209128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x20912c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20912cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209130: 0x27839a80  addiu       $v1, $gp, -0x6580
    ctx->pc = 0x209130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941312));
    // 0x209134: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x209134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209138: 0xc040304  jal         func_100C10
    ctx->pc = 0x209138u;
    SET_GPR_U32(ctx, 31, 0x209140u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x209138u, 0x209140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209140u;
label_209140:
    // 0x209140: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209144: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209148: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x209148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x20914c: 0xc05c618  jal         func_171860
    ctx->pc = 0x20914Cu;
    SET_GPR_U32(ctx, 31, 0x209154u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x20914Cu, 0x209154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209154u;
label_209154:
    // 0x209154: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x209154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209158: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x209158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x20915c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x20915cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209160: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x209160u;
    SET_GPR_U32(ctx, 31, 0x209168u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x209160u, 0x209168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209168u;
label_209168:
    // 0x209168: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x209168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20916c: 0x12040019  beq         $s0, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x20916Cu;
    {
        const bool branch_taken_0x20916c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x20916c) {
            ctx->pc = 0x2091D4u;
            goto label_2091d4;
        }
    }
    ctx->pc = 0x209174u;
    // 0x209174: 0x26050003  addiu       $a1, $s0, 0x3
    ctx->pc = 0x209174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x209178: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x209178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20917c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20917cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209180: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x209180u;
    SET_GPR_U32(ctx, 31, 0x209188u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x209180u, 0x209188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209188u;
label_209188:
    // 0x209188: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x209188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20918c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20918cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209190: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x209190u;
    SET_GPR_U32(ctx, 31, 0x209198u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x209190u, 0x209198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209198u;
label_209198:
    // 0x209198: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20919c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x20919Cu;
    SET_GPR_U32(ctx, 31, 0x2091A4u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x20919Cu, 0x2091A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2091A4u;
label_2091a4:
    // 0x2091a4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2091a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2091a8: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x2091a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2091ac: 0x24a2012c  addiu       $v0, $a1, 0x12C
    ctx->pc = 0x2091acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 300));
    // 0x2091b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2091b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2091b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2091b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2091b8: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x2091B8u;
    SET_GPR_U32(ctx, 31, 0x2091C0u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x2091B8u, 0x2091C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2091C0u;
label_2091c0:
    // 0x2091c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2091c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2091c4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2091c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2091c8: 0xe4b40010  swc1        $f20, 0x10($a1)
    ctx->pc = 0x2091c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x2091cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2091CCu;
    {
        const bool branch_taken_0x2091cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2091cc) {
            ctx->pc = 0x209200u;
            goto label_209200;
        }
    }
    ctx->pc = 0x2091D4u;
label_2091d4:
    // 0x2091d4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2091d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2091d8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2091d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2091dc: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x2091dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2091e0: 0x2445012c  addiu       $a1, $v0, 0x12C
    ctx->pc = 0x2091e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2091e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2091e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2091e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2091e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2091ec: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x2091ECu;
    SET_GPR_U32(ctx, 31, 0x2091F4u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x2091ECu, 0x2091F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2091F4u;
label_2091f4:
    // 0x2091f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2091f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2091f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2091f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2091fc: 0xe4540010  swc1        $f20, 0x10($v0)
    ctx->pc = 0x2091fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_209200:
    // 0x209200: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x209200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x209204: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209208: 0x27839a88  addiu       $v1, $gp, -0x6578
    ctx->pc = 0x209208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941320));
    // 0x20920c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x20920cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209210: 0xc040304  jal         func_100C10
    ctx->pc = 0x209210u;
    SET_GPR_U32(ctx, 31, 0x209218u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x209210u, 0x209218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209218u;
label_209218:
    // 0x209218: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20921c: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x20921cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x209220: 0xc05c618  jal         func_171860
    ctx->pc = 0x209220u;
    SET_GPR_U32(ctx, 31, 0x209228u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x209220u, 0x209228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209228u;
label_209228:
    // 0x209228: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x209228u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20922c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x20922cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209230: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x209230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x209234: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x209234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209238: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20923c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x20923Cu;
    SET_GPR_U32(ctx, 31, 0x209244u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x20923Cu, 0x209244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209244u;
label_209244:
    // 0x209244: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x209244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209248: 0x12040018  beq         $s0, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x209248u;
    {
        const bool branch_taken_0x209248 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x209248) {
            ctx->pc = 0x2092ACu;
            goto label_2092ac;
        }
    }
    ctx->pc = 0x209250u;
    // 0x209250: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x209250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x209254: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x209254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20925c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x20925Cu;
    SET_GPR_U32(ctx, 31, 0x209264u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x20925Cu, 0x209264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209264u;
label_209264:
    // 0x209264: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x209264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x209268: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x209268u;
    SET_GPR_U32(ctx, 31, 0x209270u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x209268u, 0x209270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209270u;
label_209270:
    // 0x209270: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209274: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x209274u;
    SET_GPR_U32(ctx, 31, 0x20927Cu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x209274u, 0x20927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20927Cu;
label_20927c:
    // 0x20927c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x20927cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x209280: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x209280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209284: 0x24a2012c  addiu       $v0, $a1, 0x12C
    ctx->pc = 0x209284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 300));
    // 0x209288: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20928c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20928cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209290: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x209290u;
    SET_GPR_U32(ctx, 31, 0x209298u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x209290u, 0x209298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209298u;
label_209298:
    // 0x209298: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20929c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x20929cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2092a0: 0xe4940008  swc1        $f20, 0x8($a0)
    ctx->pc = 0x2092a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2092a4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2092A4u;
    {
        const bool branch_taken_0x2092a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2092a4) {
            ctx->pc = 0x2092D0u;
            goto label_2092d0;
        }
    }
    ctx->pc = 0x2092ACu;
label_2092ac:
    // 0x2092ac: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2092acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2092b0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2092b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2092b4: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x2092b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2092b8: 0x24a4012c  addiu       $a0, $a1, 0x12C
    ctx->pc = 0x2092b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 300));
    // 0x2092bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2092bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2092c0: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x2092C0u;
    SET_GPR_U32(ctx, 31, 0x2092C8u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x2092C0u, 0x2092C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2092C8u;
label_2092c8:
    // 0x2092c8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2092c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2092cc: 0xe6140008  swc1        $f20, 0x8($s0)
    ctx->pc = 0x2092ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2092d0:
    // 0x2092d0: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x2092d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2092d4: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x2092d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2092d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2092d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2092dc: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x2092DCu;
    SET_GPR_U32(ctx, 31, 0x2092E4u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x2092DCu, 0x2092E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2092E4u;
label_2092e4:
    // 0x2092e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2092e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2092e8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2092e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2092ec: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2092ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2092f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2092f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2092f4: 0x0  nop
    ctx->pc = 0x2092f4u;
    // NOP
    // 0x2092f8: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x2092f8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2092fc: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x2092fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209300: 0x24a4012c  addiu       $a0, $a1, 0x12C
    ctx->pc = 0x209300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 300));
    // 0x209304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x209304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209308: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x209308u;
    SET_GPR_U32(ctx, 31, 0x209310u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x209308u, 0x209310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209310u;
label_209310:
    // 0x209310: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209314: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x209314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x209318: 0xe4b4000c  swc1        $f20, 0xC($a1)
    ctx->pc = 0x209318u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x20931c: 0x27a20190  addiu       $v0, $sp, 0x190
    ctx->pc = 0x20931cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x209320: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209324: 0x27859a90  addiu       $a1, $gp, -0x6570
    ctx->pc = 0x209324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941328));
    // 0x209328: 0xc040304  jal         func_100C10
    ctx->pc = 0x209328u;
    SET_GPR_U32(ctx, 31, 0x209330u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x209328u, 0x209330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209330u;
label_209330:
    // 0x209330: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209338: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x209338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x20933c: 0xc05c618  jal         func_171860
    ctx->pc = 0x20933Cu;
    SET_GPR_U32(ctx, 31, 0x209344u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x20933Cu, 0x209344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209344u;
label_209344:
    // 0x209344: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x209344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209348: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x209348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x20934c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20934cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209350: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x209350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209354: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x209354u;
    SET_GPR_U32(ctx, 31, 0x20935Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x209354u, 0x20935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20935Cu;
label_20935c:
    // 0x20935c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x20935cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209360: 0x12040019  beq         $s0, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x209360u;
    {
        const bool branch_taken_0x209360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x209360) {
            ctx->pc = 0x2093C8u;
            goto label_2093c8;
        }
    }
    ctx->pc = 0x209368u;
    // 0x209368: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x209368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x20936c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x20936cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209374: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x209374u;
    SET_GPR_U32(ctx, 31, 0x20937Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x209374u, 0x20937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20937Cu;
label_20937c:
    // 0x20937c: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x20937cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x209380: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x209380u;
    SET_GPR_U32(ctx, 31, 0x209388u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x209380u, 0x209388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209388u;
label_209388:
    // 0x209388: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20938c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x20938Cu;
    SET_GPR_U32(ctx, 31, 0x209394u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x20938Cu, 0x209394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209394u;
label_209394:
    // 0x209394: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x209394u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x209398: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x209398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20939c: 0x24a2012c  addiu       $v0, $a1, 0x12C
    ctx->pc = 0x20939cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 300));
    // 0x2093a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2093a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2093a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2093a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2093a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2093a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2093ac: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x2093ACu;
    SET_GPR_U32(ctx, 31, 0x2093B4u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x2093ACu, 0x2093B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2093B4u;
label_2093b4:
    // 0x2093b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2093b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2093b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2093b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2093bc: 0xe4540010  swc1        $f20, 0x10($v0)
    ctx->pc = 0x2093bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2093c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2093C0u;
    {
        const bool branch_taken_0x2093c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2093c0) {
            ctx->pc = 0x2093F8u;
            goto label_2093f8;
        }
    }
    ctx->pc = 0x2093C8u;
label_2093c8:
    // 0x2093c8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2093c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2093cc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2093ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2093d0: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x2093d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2093d4: 0x2445012c  addiu       $a1, $v0, 0x12C
    ctx->pc = 0x2093d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2093d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2093d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2093dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2093dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2093e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2093e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2093e4: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x2093E4u;
    SET_GPR_U32(ctx, 31, 0x2093ECu);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x2093E4u, 0x2093ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2093ECu;
label_2093ec:
    // 0x2093ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2093ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2093f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2093f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2093f4: 0xe4740010  swc1        $f20, 0x10($v1)
    ctx->pc = 0x2093f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_2093f8:
    // 0x2093f8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2093f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2093fc: 0x27859a98  addiu       $a1, $gp, -0x6568
    ctx->pc = 0x2093fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941336));
    // 0x209400: 0xc040304  jal         func_100C10
    ctx->pc = 0x209400u;
    SET_GPR_U32(ctx, 31, 0x209408u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x209400u, 0x209408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209408u;
label_209408:
    // 0x209408: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20940c: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x20940cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x209410: 0xc05c618  jal         func_171860
    ctx->pc = 0x209410u;
    SET_GPR_U32(ctx, 31, 0x209418u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x209410u, 0x209418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209418u;
label_209418:
    // 0x209418: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x209418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20941c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x20941cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x209420: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x209420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209424: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x209424u;
    SET_GPR_U32(ctx, 31, 0x20942Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x209424u, 0x20942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20942Cu;
label_20942c:
    // 0x20942c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20942cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209430: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x209430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209434: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x209434u;
    {
        const bool branch_taken_0x209434 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x209434) {
            ctx->pc = 0x209498u;
            goto label_209498;
        }
    }
    ctx->pc = 0x20943Cu;
    // 0x20943c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x20943cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x209440: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209448: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x209448u;
    SET_GPR_U32(ctx, 31, 0x209450u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x209448u, 0x209450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209450u;
label_209450:
    // 0x209450: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x209450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x209454: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x209454u;
    SET_GPR_U32(ctx, 31, 0x20945Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x209454u, 0x20945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20945Cu;
label_20945c:
    // 0x20945c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20945cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209460: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x209460u;
    SET_GPR_U32(ctx, 31, 0x209468u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x209460u, 0x209468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209468u;
label_209468:
    // 0x209468: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x209468u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x20946c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x20946cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209470: 0x2443012c  addiu       $v1, $v0, 0x12C
    ctx->pc = 0x209470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x209474: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x209474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209478: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20947c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20947cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209480: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x209480u;
    SET_GPR_U32(ctx, 31, 0x209488u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x209480u, 0x209488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209488u;
label_209488:
    // 0x209488: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x209488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20948c: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x20948cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x209490: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x209490u;
    {
        const bool branch_taken_0x209490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209490) {
            ctx->pc = 0x2094BCu;
            goto label_2094bc;
        }
    }
    ctx->pc = 0x209498u;
label_209498:
    // 0x209498: 0x3c144040  lui         $s4, 0x4040
    ctx->pc = 0x209498u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16448 << 16));
    // 0x20949c: 0x4494a000  mtc1        $s4, $f20
    ctx->pc = 0x20949cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2094a0: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x2094a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2094a4: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x2094a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2094a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2094a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2094ac: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x2094ACu;
    SET_GPR_U32(ctx, 31, 0x2094B4u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x2094ACu, 0x2094B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2094B4u;
label_2094b4:
    // 0x2094b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2094b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2094b8: 0xe4940008  swc1        $f20, 0x8($a0)
    ctx->pc = 0x2094b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2094bc:
    // 0x2094bc: 0x8fa60320  lw          $a2, 0x320($sp)
    ctx->pc = 0x2094bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2094c0: 0x24c4012c  addiu       $a0, $a2, 0x12C
    ctx->pc = 0x2094c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 300));
    // 0x2094c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2094c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2094c8: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x2094C8u;
    SET_GPR_U32(ctx, 31, 0x2094D0u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x2094C8u, 0x2094D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2094D0u;
label_2094d0:
    // 0x2094d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2094d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2094d4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2094d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2094d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2094d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2094dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2094dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2094e0: 0x0  nop
    ctx->pc = 0x2094e0u;
    // NOP
    // 0x2094e4: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x2094e4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2094e8: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x2094e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2094ec: 0x2485012c  addiu       $a1, $a0, 0x12C
    ctx->pc = 0x2094ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 300));
    // 0x2094f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2094f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2094f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2094f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2094f8: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x2094F8u;
    SET_GPR_U32(ctx, 31, 0x209500u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x2094F8u, 0x209500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209500u;
label_209500:
    // 0x209500: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x209500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209504: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x209504u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x209508: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x209508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x20950c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x20950cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209510: 0x27829aa0  addiu       $v0, $gp, -0x6560
    ctx->pc = 0x209510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941344));
    // 0x209514: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209518: 0xc040304  jal         func_100C10
    ctx->pc = 0x209518u;
    SET_GPR_U32(ctx, 31, 0x209520u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x209518u, 0x209520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209520u;
label_209520:
    // 0x209520: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209528: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x209528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x20952c: 0xc05c618  jal         func_171860
    ctx->pc = 0x20952Cu;
    SET_GPR_U32(ctx, 31, 0x209534u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x20952Cu, 0x209534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209534u;
label_209534:
    // 0x209534: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x209534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209538: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x209538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x20953c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x20953cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209540: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x209540u;
    SET_GPR_U32(ctx, 31, 0x209548u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x209540u, 0x209548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209548u;
label_209548:
    // 0x209548: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x209548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20954c: 0x1202001c  beq         $s0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x20954Cu;
    {
        const bool branch_taken_0x20954c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x20954c) {
            ctx->pc = 0x2095C0u;
            goto label_2095c0;
        }
    }
    ctx->pc = 0x209554u;
    // 0x209554: 0x26040003  addiu       $a0, $s0, 0x3
    ctx->pc = 0x209554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x209558: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20955c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20955cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209560: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x209560u;
    SET_GPR_U32(ctx, 31, 0x209568u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x209560u, 0x209568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209568u;
label_209568:
    // 0x209568: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20956c: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x20956cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x209570: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209574: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x209574u;
    SET_GPR_U32(ctx, 31, 0x20957Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x209574u, 0x20957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20957Cu;
label_20957c:
    // 0x20957c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20957cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209580: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x209580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209584: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x209584u;
    SET_GPR_U32(ctx, 31, 0x20958Cu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x209584u, 0x20958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20958Cu;
label_20958c:
    // 0x20958c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x20958cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x209590: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x209590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209594: 0x2485012c  addiu       $a1, $a0, 0x12C
    ctx->pc = 0x209594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 300));
    // 0x209598: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x209598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20959c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20959cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2095a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2095a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2095a4: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x2095A4u;
    SET_GPR_U32(ctx, 31, 0x2095ACu);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x2095A4u, 0x2095ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2095ACu;
label_2095ac:
    // 0x2095ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2095acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2095b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2095b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2095b4: 0xe4540010  swc1        $f20, 0x10($v0)
    ctx->pc = 0x2095b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2095b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2095B8u;
    {
        const bool branch_taken_0x2095b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2095b8) {
            ctx->pc = 0x2095E8u;
            goto label_2095e8;
        }
    }
    ctx->pc = 0x2095C0u;
label_2095c0:
    // 0x2095c0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2095c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2095c4: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x2095c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2095c8: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x2095c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2095cc: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x2095ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2095d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2095d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2095d4: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x2095D4u;
    SET_GPR_U32(ctx, 31, 0x2095DCu);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x2095D4u, 0x2095DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2095DCu;
label_2095dc:
    // 0x2095dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2095dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2095e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2095e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2095e4: 0xe4540010  swc1        $f20, 0x10($v0)
    ctx->pc = 0x2095e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_2095e8:
    // 0x2095e8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2095e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2095ec: 0x27859aa8  addiu       $a1, $gp, -0x6558
    ctx->pc = 0x2095ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941352));
    // 0x2095f0: 0xc040304  jal         func_100C10
    ctx->pc = 0x2095F0u;
    SET_GPR_U32(ctx, 31, 0x2095F8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2095F0u, 0x2095F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2095F8u;
label_2095f8:
    // 0x2095f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2095f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2095fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2095fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209600: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x209600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x209604: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209608: 0xc05c618  jal         func_171860
    ctx->pc = 0x209608u;
    SET_GPR_U32(ctx, 31, 0x209610u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x209608u, 0x209610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209610u;
label_209610:
    // 0x209610: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x209610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209614: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x209614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x209618: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x209618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20961c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x20961Cu;
    SET_GPR_U32(ctx, 31, 0x209624u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x20961Cu, 0x209624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209624u;
label_209624:
    // 0x209624: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209628: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x209628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20962c: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x20962Cu;
    {
        const bool branch_taken_0x20962c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x20962c) {
            ctx->pc = 0x209690u;
            goto label_209690;
        }
    }
    ctx->pc = 0x209634u;
    // 0x209634: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x209634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x209638: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x209638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20963c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20963cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209640: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x209640u;
    SET_GPR_U32(ctx, 31, 0x209648u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x209640u, 0x209648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209648u;
label_209648:
    // 0x209648: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20964c: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x20964cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x209650: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209654: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x209654u;
    SET_GPR_U32(ctx, 31, 0x20965Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x209654u, 0x20965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20965Cu;
label_20965c:
    // 0x20965c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20965cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209660: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x209660u;
    SET_GPR_U32(ctx, 31, 0x209668u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x209660u, 0x209668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209668u;
label_209668:
    // 0x209668: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x209668u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x20966c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x20966cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209670: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x209670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x209674: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x209674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x209678: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x209678u;
    SET_GPR_U32(ctx, 31, 0x209680u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x209678u, 0x209680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209680u;
label_209680:
    // 0x209680: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x209680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209684: 0xe4940008  swc1        $f20, 0x8($a0)
    ctx->pc = 0x209684u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x209688: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x209688u;
    {
        const bool branch_taken_0x209688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209688) {
            ctx->pc = 0x2096B4u;
            goto label_2096b4;
        }
    }
    ctx->pc = 0x209690u;
label_209690:
    // 0x209690: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x209690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x209694: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x209694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x209698: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x209698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20969c: 0x2464012c  addiu       $a0, $v1, 0x12C
    ctx->pc = 0x20969cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 300));
    // 0x2096a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2096a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2096a4: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x2096A4u;
    SET_GPR_U32(ctx, 31, 0x2096ACu);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x2096A4u, 0x2096ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2096ACu;
label_2096ac:
    // 0x2096ac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2096acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2096b0: 0xe4b40008  swc1        $f20, 0x8($a1)
    ctx->pc = 0x2096b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_2096b4:
    // 0x2096b4: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x2096b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2096b8: 0x2450012c  addiu       $s0, $v0, 0x12C
    ctx->pc = 0x2096b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2096bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2096bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2096c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2096c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2096c4: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x2096C4u;
    SET_GPR_U32(ctx, 31, 0x2096CCu);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x2096C4u, 0x2096CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2096CCu;
label_2096cc:
    // 0x2096cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2096ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2096d0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2096d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2096d4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2096d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2096d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2096d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2096dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2096dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2096e0: 0x0  nop
    ctx->pc = 0x2096e0u;
    // NOP
    // 0x2096e4: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x2096e4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2096e8: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x2096e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2096ec: 0x2485012c  addiu       $a1, $a0, 0x12C
    ctx->pc = 0x2096ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 300));
    // 0x2096f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2096f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2096f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2096f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2096f8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2096f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2096fc: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x2096FCu;
    SET_GPR_U32(ctx, 31, 0x209704u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x2096FCu, 0x209704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209704u;
label_209704:
    // 0x209704: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209708: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x209708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20970c: 0xe4b4000c  swc1        $f20, 0xC($a1)
    ctx->pc = 0x20970cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x209710: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x209710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x209714: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209718: 0x27859ab0  addiu       $a1, $gp, -0x6550
    ctx->pc = 0x209718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941360));
    // 0x20971c: 0xc040304  jal         func_100C10
    ctx->pc = 0x20971Cu;
    SET_GPR_U32(ctx, 31, 0x209724u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x20971Cu, 0x209724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209724u;
label_209724:
    // 0x209724: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209728: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x209728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x20972c: 0xc05c618  jal         func_171860
    ctx->pc = 0x20972Cu;
    SET_GPR_U32(ctx, 31, 0x209734u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x20972Cu, 0x209734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209734u;
label_209734:
    // 0x209734: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x209734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209738: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x209738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x20973c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20973cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209740: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209744: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x209744u;
    SET_GPR_U32(ctx, 31, 0x20974Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x209744u, 0x20974Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20974Cu;
label_20974c:
    // 0x20974c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20974cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209750: 0x12020017  beq         $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x209750u;
    {
        const bool branch_taken_0x209750 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x209750) {
            ctx->pc = 0x2097B0u;
            goto label_2097b0;
        }
    }
    ctx->pc = 0x209758u;
    // 0x209758: 0x26050003  addiu       $a1, $s0, 0x3
    ctx->pc = 0x209758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x20975c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20975cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209764: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x209764u;
    SET_GPR_U32(ctx, 31, 0x20976Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x209764u, 0x20976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20976Cu;
label_20976c:
    // 0x20976c: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x20976cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x209770: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x209770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209774: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x209774u;
    SET_GPR_U32(ctx, 31, 0x20977Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x209774u, 0x20977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20977Cu;
label_20977c:
    // 0x20977c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20977cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209780: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x209780u;
    SET_GPR_U32(ctx, 31, 0x209788u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x209780u, 0x209788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209788u;
label_209788:
    // 0x209788: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x209788u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x20978c: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x20978cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209790: 0x2485012c  addiu       $a1, $a0, 0x12C
    ctx->pc = 0x209790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 300));
    // 0x209794: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x209794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209798: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x209798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20979c: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x20979Cu;
    SET_GPR_U32(ctx, 31, 0x2097A4u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x20979Cu, 0x2097A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2097A4u;
label_2097a4:
    // 0x2097a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2097a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2097a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2097a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2097ac: 0xe4940014  swc1        $f20, 0x14($a0)
    ctx->pc = 0x2097acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_2097b0:
    // 0x2097b0: 0x27b00140  addiu       $s0, $sp, 0x140
    ctx->pc = 0x2097b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2097b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2097b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2097b8: 0x27829ab8  addiu       $v0, $gp, -0x6548
    ctx->pc = 0x2097b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941368));
    // 0x2097bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2097bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2097c0: 0xc040304  jal         func_100C10
    ctx->pc = 0x2097C0u;
    SET_GPR_U32(ctx, 31, 0x2097C8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2097C0u, 0x2097C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2097C8u;
label_2097c8:
    // 0x2097c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2097c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2097cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2097ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2097d0: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x2097d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2097d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2097d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2097d8: 0xc05c618  jal         func_171860
    ctx->pc = 0x2097D8u;
    SET_GPR_U32(ctx, 31, 0x2097E0u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x2097D8u, 0x2097E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2097E0u;
label_2097e0:
    // 0x2097e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2097e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2097e4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2097e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2097e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2097e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2097ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2097ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2097f0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2097F0u;
    SET_GPR_U32(ctx, 31, 0x2097F8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2097F0u, 0x2097F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2097F8u;
label_2097f8:
    // 0x2097f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2097f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2097fc: 0x12020016  beq         $s0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2097FCu;
    {
        const bool branch_taken_0x2097fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2097fc) {
            ctx->pc = 0x209858u;
            goto label_209858;
        }
    }
    ctx->pc = 0x209804u;
    // 0x209804: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x209804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x209808: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x209808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20980c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20980cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209810: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x209810u;
    SET_GPR_U32(ctx, 31, 0x209818u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x209810u, 0x209818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209818u;
label_209818:
    // 0x209818: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x209818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20981c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20981cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209820: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x209820u;
    SET_GPR_U32(ctx, 31, 0x209828u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x209820u, 0x209828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209828u;
label_209828:
    // 0x209828: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20982c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x20982Cu;
    SET_GPR_U32(ctx, 31, 0x209834u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x20982Cu, 0x209834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209834u;
label_209834:
    // 0x209834: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x209834u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x209838: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x209838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20983c: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x20983cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x209840: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x209840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209844: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x209844u;
    SET_GPR_U32(ctx, 31, 0x20984Cu);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x209844u, 0x20984Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20984Cu;
label_20984c:
    // 0x20984c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20984cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209850: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x209850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x209854: 0xe4940018  swc1        $f20, 0x18($a0)
    ctx->pc = 0x209854u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_209858:
    // 0x209858: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x209858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x20985c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20985cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209860: 0x27829ac0  addiu       $v0, $gp, -0x6540
    ctx->pc = 0x209860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941376));
    // 0x209864: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209868: 0xc040304  jal         func_100C10
    ctx->pc = 0x209868u;
    SET_GPR_U32(ctx, 31, 0x209870u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x209868u, 0x209870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209870u;
label_209870:
    // 0x209870: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209874: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209878: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x209878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x20987c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20987cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209880: 0xc05c618  jal         func_171860
    ctx->pc = 0x209880u;
    SET_GPR_U32(ctx, 31, 0x209888u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x209880u, 0x209888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209888u;
label_209888:
    // 0x209888: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x209888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20988c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x20988cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x209890: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x209890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209894: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209898: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x209898u;
    SET_GPR_U32(ctx, 31, 0x2098A0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x209898u, 0x2098A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2098A0u;
label_2098a0:
    // 0x2098a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2098a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2098a4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2098a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2098a8: 0x12050015  beq         $s0, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2098A8u;
    {
        const bool branch_taken_0x2098a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        if (branch_taken_0x2098a8) {
            ctx->pc = 0x209900u;
            goto label_209900;
        }
    }
    ctx->pc = 0x2098B0u;
    // 0x2098b0: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x2098b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x2098b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2098b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2098b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2098b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2098bc: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2098BCu;
    SET_GPR_U32(ctx, 31, 0x2098C4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2098BCu, 0x2098C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2098C4u;
label_2098c4:
    // 0x2098c4: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x2098c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2098c8: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x2098C8u;
    SET_GPR_U32(ctx, 31, 0x2098D0u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x2098C8u, 0x2098D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2098D0u;
label_2098d0:
    // 0x2098d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2098d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2098d4: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x2098D4u;
    SET_GPR_U32(ctx, 31, 0x2098DCu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x2098D4u, 0x2098DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2098DCu;
label_2098dc:
    // 0x2098dc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2098dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2098e0: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x2098e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2098e4: 0x2445012c  addiu       $a1, $v0, 0x12C
    ctx->pc = 0x2098e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2098e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2098e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2098ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2098ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2098f0: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x2098F0u;
    SET_GPR_U32(ctx, 31, 0x2098F8u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x2098F0u, 0x2098F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2098F8u;
label_2098f8:
    // 0x2098f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2098f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2098fc: 0xe4b40014  swc1        $f20, 0x14($a1)
    ctx->pc = 0x2098fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_209900:
    // 0x209900: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x209900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x209904: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209908: 0x27859ac8  addiu       $a1, $gp, -0x6538
    ctx->pc = 0x209908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941384));
    // 0x20990c: 0xc040304  jal         func_100C10
    ctx->pc = 0x20990Cu;
    SET_GPR_U32(ctx, 31, 0x209914u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x20990Cu, 0x209914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209914u;
label_209914:
    // 0x209914: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209918: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x209918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x20991c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x20991cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209920: 0xc05c618  jal         func_171860
    ctx->pc = 0x209920u;
    SET_GPR_U32(ctx, 31, 0x209928u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x209920u, 0x209928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209928u;
label_209928:
    // 0x209928: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20992c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20992cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209930: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x209930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x209934: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x209934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209938: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x209938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20993c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20993cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209940: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x209940u;
    SET_GPR_U32(ctx, 31, 0x209948u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x209940u, 0x209948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209948u;
label_209948:
    // 0x209948: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20994c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x20994cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209950: 0x12050016  beq         $s0, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x209950u;
    {
        const bool branch_taken_0x209950 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        if (branch_taken_0x209950) {
            ctx->pc = 0x2099ACu;
            goto label_2099ac;
        }
    }
    ctx->pc = 0x209958u;
    // 0x209958: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x209958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x20995c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20995cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209964: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x209964u;
    SET_GPR_U32(ctx, 31, 0x20996Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x209964u, 0x20996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20996Cu;
label_20996c:
    // 0x20996c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20996cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209970: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x209970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x209974: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x209974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209978: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x209978u;
    SET_GPR_U32(ctx, 31, 0x209980u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x209978u, 0x209980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209980u;
label_209980:
    // 0x209980: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209984: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x209984u;
    SET_GPR_U32(ctx, 31, 0x20998Cu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x209984u, 0x20998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20998Cu;
label_20998c:
    // 0x20998c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x20998cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x209990: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x209990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209994: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x209994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x209998: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x209998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20999c: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x20999Cu;
    SET_GPR_U32(ctx, 31, 0x2099A4u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x20999Cu, 0x2099A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2099A4u;
label_2099a4:
    // 0x2099a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2099a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2099a8: 0xe4940018  swc1        $f20, 0x18($a0)
    ctx->pc = 0x2099a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_2099ac:
    // 0x2099ac: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2099acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2099b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2099b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2099b4: 0x27829ad0  addiu       $v0, $gp, -0x6530
    ctx->pc = 0x2099b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941392));
    // 0x2099b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2099b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2099bc: 0xc040304  jal         func_100C10
    ctx->pc = 0x2099BCu;
    SET_GPR_U32(ctx, 31, 0x2099C4u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2099BCu, 0x2099C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2099C4u;
label_2099c4:
    // 0x2099c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2099c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2099c8: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2099c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2099cc: 0xc05c618  jal         func_171860
    ctx->pc = 0x2099CCu;
    SET_GPR_U32(ctx, 31, 0x2099D4u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x2099CCu, 0x2099D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2099D4u;
label_2099d4:
    // 0x2099d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2099d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2099d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2099d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2099dc: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x2099dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2099e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2099e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2099e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2099e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2099e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2099e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2099ec: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2099ECu;
    SET_GPR_U32(ctx, 31, 0x2099F4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2099ECu, 0x2099F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2099F4u;
label_2099f4:
    // 0x2099f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2099f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2099f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2099f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2099fc: 0x12020015  beq         $s0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2099FCu;
    {
        const bool branch_taken_0x2099fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2099fc) {
            ctx->pc = 0x209A54u;
            goto label_209a54;
        }
    }
    ctx->pc = 0x209A04u;
    // 0x209a04: 0x26050003  addiu       $a1, $s0, 0x3
    ctx->pc = 0x209a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x209a08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x209a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a10: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x209A10u;
    SET_GPR_U32(ctx, 31, 0x209A18u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x209A10u, 0x209A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A18u;
label_209a18:
    // 0x209a18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x209a18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a1c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x209a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x209a20: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x209A20u;
    SET_GPR_U32(ctx, 31, 0x209A28u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x209A20u, 0x209A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A28u;
label_209a28:
    // 0x209a28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a2c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x209A2Cu;
    SET_GPR_U32(ctx, 31, 0x209A34u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x209A2Cu, 0x209A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A34u;
label_209a34:
    // 0x209a34: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x209a34u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x209a38: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x209a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209a3c: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x209a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x209a40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x209a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x209a44: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x209A44u;
    SET_GPR_U32(ctx, 31, 0x209A4Cu);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x209A44u, 0x209A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A4Cu;
label_209a4c:
    // 0x209a4c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x209a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209a50: 0xe4940014  swc1        $f20, 0x14($a0)
    ctx->pc = 0x209a50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_209a54:
    // 0x209a54: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x209a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x209a58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a5c: 0x27859ad8  addiu       $a1, $gp, -0x6528
    ctx->pc = 0x209a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941400));
    // 0x209a60: 0xc040304  jal         func_100C10
    ctx->pc = 0x209A60u;
    SET_GPR_U32(ctx, 31, 0x209A68u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x209A60u, 0x209A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A68u;
label_209a68:
    // 0x209a68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a6c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x209a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x209a70: 0xc05c618  jal         func_171860
    ctx->pc = 0x209A70u;
    SET_GPR_U32(ctx, 31, 0x209A78u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x209A70u, 0x209A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A78u;
label_209a78:
    // 0x209a78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a80: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x209a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x209a84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a88: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x209a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209a8c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x209A8Cu;
    SET_GPR_U32(ctx, 31, 0x209A94u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x209A8Cu, 0x209A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A94u;
label_209a94:
    // 0x209a94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x209a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209a9c: 0x12020014  beq         $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x209A9Cu;
    {
        const bool branch_taken_0x209a9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x209a9c) {
            ctx->pc = 0x209AF0u;
            goto label_209af0;
        }
    }
    ctx->pc = 0x209AA4u;
    // 0x209aa4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x209aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x209aa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209aac: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x209AACu;
    SET_GPR_U32(ctx, 31, 0x209AB4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x209AACu, 0x209AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209AB4u;
label_209ab4:
    // 0x209ab4: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x209ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x209ab8: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x209AB8u;
    SET_GPR_U32(ctx, 31, 0x209AC0u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x209AB8u, 0x209AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209AC0u;
label_209ac0:
    // 0x209ac0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209ac4: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x209AC4u;
    SET_GPR_U32(ctx, 31, 0x209ACCu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x209AC4u, 0x209ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209ACCu;
label_209acc:
    // 0x209acc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x209accu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x209ad0: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x209ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209ad4: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x209ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x209ad8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x209ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x209adc: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x209ADCu;
    SET_GPR_U32(ctx, 31, 0x209AE4u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x209ADCu, 0x209AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209AE4u;
label_209ae4:
    // 0x209ae4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209ae8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x209ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x209aec: 0xe4940018  swc1        $f20, 0x18($a0)
    ctx->pc = 0x209aecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_209af0:
    // 0x209af0: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x209af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x209af4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x209af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209af8: 0x27829ae0  addiu       $v0, $gp, -0x6520
    ctx->pc = 0x209af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941408));
    // 0x209afc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b00: 0xc040304  jal         func_100C10
    ctx->pc = 0x209B00u;
    SET_GPR_U32(ctx, 31, 0x209B08u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x209B00u, 0x209B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B08u;
label_209b08:
    // 0x209b08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b10: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x209b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x209b14: 0xc05c618  jal         func_171860
    ctx->pc = 0x209B14u;
    SET_GPR_U32(ctx, 31, 0x209B1Cu);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x209B14u, 0x209B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B1Cu;
label_209b1c:
    // 0x209b1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x209b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b24: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x209b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x209b28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b2c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x209b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209b30: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x209B30u;
    SET_GPR_U32(ctx, 31, 0x209B38u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x209B30u, 0x209B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B38u;
label_209b38:
    // 0x209b38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x209b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209b40: 0x1202002a  beq         $s0, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x209B40u;
    {
        const bool branch_taken_0x209b40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x209b40) {
            ctx->pc = 0x209BECu;
            goto label_209bec;
        }
    }
    ctx->pc = 0x209B48u;
    // 0x209b48: 0x26040003  addiu       $a0, $s0, 0x3
    ctx->pc = 0x209b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x209b4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b54: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x209B54u;
    SET_GPR_U32(ctx, 31, 0x209B5Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x209B54u, 0x209B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B5Cu;
label_209b5c:
    // 0x209b5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x209b5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b60: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x209b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x209b64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b68: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x209B68u;
    SET_GPR_U32(ctx, 31, 0x209B70u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x209B68u, 0x209B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B70u;
label_209b70:
    // 0x209b70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b74: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x209B74u;
    SET_GPR_U32(ctx, 31, 0x209B7Cu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x209B74u, 0x209B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B7Cu;
label_209b7c:
    // 0x209b7c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x209b7cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x209b80: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x209b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209b84: 0x2485012c  addiu       $a1, $a0, 0x12C
    ctx->pc = 0x209b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 300));
    // 0x209b88: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x209b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x209b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b90: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x209B90u;
    SET_GPR_U32(ctx, 31, 0x209B98u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x209B90u, 0x209B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B98u;
label_209b98:
    // 0x209b98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x209b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209b9c: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x209b9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x209ba0: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x209ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209ba4: 0x2462012c  addiu       $v0, $v1, 0x12C
    ctx->pc = 0x209ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 300));
    // 0x209ba8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209bac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x209bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209bb0: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x209BB0u;
    SET_GPR_U32(ctx, 31, 0x209BB8u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x209BB0u, 0x209BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209BB8u;
label_209bb8:
    // 0x209bb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x209bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209bbc: 0x3c053fa0  lui         $a1, 0x3FA0
    ctx->pc = 0x209bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16288 << 16));
    // 0x209bc0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x209bc0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x209bc4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x209bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209bc8: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x209bc8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x209bcc: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x209bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209bd0: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x209bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x209bd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x209bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209bd8: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x209BD8u;
    SET_GPR_U32(ctx, 31, 0x209BE0u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x209BD8u, 0x209BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209BE0u;
label_209be0:
    // 0x209be0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x209be0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209be4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x209be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x209be8: 0xe4940004  swc1        $f20, 0x4($a0)
    ctx->pc = 0x209be8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_209bec:
    // 0x209bec: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x209becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x209bf0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x209bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209bf4: 0x27829ae4  addiu       $v0, $gp, -0x651C
    ctx->pc = 0x209bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941412));
    // 0x209bf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209bfc: 0xc040304  jal         func_100C10
    ctx->pc = 0x209BFCu;
    SET_GPR_U32(ctx, 31, 0x209C04u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x209BFCu, 0x209C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209C04u;
label_209c04:
    // 0x209c04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209c08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209c0c: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x209c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x209c10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209c14: 0xc05c618  jal         func_171860
    ctx->pc = 0x209C14u;
    SET_GPR_U32(ctx, 31, 0x209C1Cu);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x209C14u, 0x209C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209C1Cu;
label_209c1c:
    // 0x209c1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209c20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209c24: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x209c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x209c28: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x209c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209c2c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x209c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209c30: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x209C30u;
    SET_GPR_U32(ctx, 31, 0x209C38u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x209C30u, 0x209C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209C38u;
label_209c38:
    // 0x209c38: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x209c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209c3c: 0x1204002b  beq         $s0, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x209C3Cu;
    {
        const bool branch_taken_0x209c3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x209c3c) {
            ctx->pc = 0x209CECu;
            goto label_209cec;
        }
    }
    ctx->pc = 0x209C44u;
    // 0x209c44: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x209c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x209c48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x209c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209c4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209c50: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x209C50u;
    SET_GPR_U32(ctx, 31, 0x209C58u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x209C50u, 0x209C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209C58u;
label_209c58:
    // 0x209c58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209c5c: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x209c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x209c60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209c64: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x209C64u;
    SET_GPR_U32(ctx, 31, 0x209C6Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x209C64u, 0x209C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209C6Cu;
label_209c6c:
    // 0x209c6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209c70: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x209C70u;
    SET_GPR_U32(ctx, 31, 0x209C78u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x209C70u, 0x209C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209C78u;
label_209c78:
    // 0x209c78: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x209c78u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x209c7c: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x209c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209c80: 0x2462012c  addiu       $v0, $v1, 0x12C
    ctx->pc = 0x209c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 300));
    // 0x209c84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209c88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209c8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209c90: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x209C90u;
    SET_GPR_U32(ctx, 31, 0x209C98u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x209C90u, 0x209C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209C98u;
label_209c98:
    // 0x209c98: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x209c98u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209c9c: 0xe6940000  swc1        $f20, 0x0($s4)
    ctx->pc = 0x209c9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x209ca0: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x209ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209ca4: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x209ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x209ca8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x209ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209cac: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x209CACu;
    SET_GPR_U32(ctx, 31, 0x209CB4u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x209CACu, 0x209CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209CB4u;
label_209cb4:
    // 0x209cb4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x209cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209cb8: 0x3c063fa0  lui         $a2, 0x3FA0
    ctx->pc = 0x209cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16288 << 16));
    // 0x209cbc: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x209cbcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x209cc0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x209cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209cc4: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x209cc4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x209cc8: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x209cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209ccc: 0x2485012c  addiu       $a1, $a0, 0x12C
    ctx->pc = 0x209cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 300));
    // 0x209cd0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x209cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209cd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209cd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209cdc: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x209CDCu;
    SET_GPR_U32(ctx, 31, 0x209CE4u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x209CDCu, 0x209CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209CE4u;
label_209ce4:
    // 0x209ce4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x209ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209ce8: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x209ce8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_209cec:
    // 0x209cec: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x209cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x209cf0: 0x27859ae8  addiu       $a1, $gp, -0x6518
    ctx->pc = 0x209cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941416));
    // 0x209cf4: 0xc040304  jal         func_100C10
    ctx->pc = 0x209CF4u;
    SET_GPR_U32(ctx, 31, 0x209CFCu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x209CF4u, 0x209CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209CFCu;
label_209cfc:
    // 0x209cfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d04: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x209d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x209d08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d0c: 0xc05c618  jal         func_171860
    ctx->pc = 0x209D0Cu;
    SET_GPR_U32(ctx, 31, 0x209D14u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x209D0Cu, 0x209D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209D14u;
label_209d14:
    // 0x209d14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d1c: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x209d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x209d20: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x209d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x209d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209d28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d2c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x209D2Cu;
    SET_GPR_U32(ctx, 31, 0x209D34u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x209D2Cu, 0x209D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209D34u;
label_209d34:
    // 0x209d34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d38: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x209d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209d3c: 0x1205002b  beq         $s0, $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x209D3Cu;
    {
        const bool branch_taken_0x209d3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        if (branch_taken_0x209d3c) {
            ctx->pc = 0x209DECu;
            goto label_209dec;
        }
    }
    ctx->pc = 0x209D44u;
    // 0x209d44: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x209d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x209d48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x209d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d50: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x209D50u;
    SET_GPR_U32(ctx, 31, 0x209D58u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x209D50u, 0x209D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209D58u;
label_209d58:
    // 0x209d58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d5c: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x209d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x209d60: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x209d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d64: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x209D64u;
    SET_GPR_U32(ctx, 31, 0x209D6Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x209D64u, 0x209D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209D6Cu;
label_209d6c:
    // 0x209d6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d70: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x209D70u;
    SET_GPR_U32(ctx, 31, 0x209D78u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x209D70u, 0x209D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209D78u;
label_209d78:
    // 0x209d78: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x209d78u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x209d7c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x209d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209d80: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x209d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x209d84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x209d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x209d88: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x209D88u;
    SET_GPR_U32(ctx, 31, 0x209D90u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x209D88u, 0x209D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209D90u;
label_209d90:
    // 0x209d90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x209d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209d94: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x209d94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x209d98: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x209d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209d9c: 0x2485012c  addiu       $a1, $a0, 0x12C
    ctx->pc = 0x209d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 300));
    // 0x209da0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x209da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209da4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x209da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x209da8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209dac: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x209DACu;
    SET_GPR_U32(ctx, 31, 0x209DB4u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x209DACu, 0x209DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209DB4u;
label_209db4:
    // 0x209db4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x209db4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209db8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x209db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x209dbc: 0x3c033fa0  lui         $v1, 0x3FA0
    ctx->pc = 0x209dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16288 << 16));
    // 0x209dc0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x209dc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x209dc4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x209dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209dc8: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x209dc8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x209dcc: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x209dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209dd0: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x209dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x209dd4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x209dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x209dd8: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x209DD8u;
    SET_GPR_U32(ctx, 31, 0x209DE0u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x209DD8u, 0x209DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209DE0u;
label_209de0:
    // 0x209de0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209de4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x209de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x209de8: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x209de8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_209dec:
    // 0x209dec: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x209decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209df0: 0x2485012c  addiu       $a1, $a0, 0x12C
    ctx->pc = 0x209df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 300));
    // 0x209df4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x209df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209df8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x209df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209dfc: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x209DFCu;
    SET_GPR_U32(ctx, 31, 0x209E04u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x209DFCu, 0x209E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209E04u;
label_209e04:
    // 0x209e04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x209e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x209e0c: 0xc454003c  lwc1        $f20, 0x3C($v0)
    ctx->pc = 0x209e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x209e10: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x209e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209e14: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x209e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x209e18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x209e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209e1c: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x209E1Cu;
    SET_GPR_U32(ctx, 31, 0x209E24u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x209E1Cu, 0x209E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209E24u;
label_209e24:
    // 0x209e24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e28: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x209e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x209e2c: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x209e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209e30: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x209e30u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x209e34: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x209e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209e38: 0x24a2012c  addiu       $v0, $a1, 0x12C
    ctx->pc = 0x209e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 300));
    // 0x209e3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x209e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x209e44: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x209E44u;
    SET_GPR_U32(ctx, 31, 0x209E4Cu);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x209E44u, 0x209E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209E4Cu;
label_209e4c:
    // 0x209e4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x209e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209e50: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x209e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209e54: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x209e54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x209e58: 0xe7a00308  swc1        $f0, 0x308($sp)
    ctx->pc = 0x209e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 776), bits); }
    // 0x209e5c: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x209e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209e60: 0x2482012c  addiu       $v0, $a0, 0x12C
    ctx->pc = 0x209e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 300));
    // 0x209e64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x209e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e6c: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x209E6Cu;
    SET_GPR_U32(ctx, 31, 0x209E74u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x209E6Cu, 0x209E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209E74u;
label_209e74:
    // 0x209e74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x209e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209e78: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x209e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209e7c: 0xc7a00308  lwc1        $f0, 0x308($sp)
    ctx->pc = 0x209e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209e80: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x209e80u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x209e84: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x209e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x209e88: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x209e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209e8c: 0x2485012c  addiu       $a1, $a0, 0x12C
    ctx->pc = 0x209e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 300));
    // 0x209e90: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x209e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209e98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e9c: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x209E9Cu;
    SET_GPR_U32(ctx, 31, 0x209EA4u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x209E9Cu, 0x209EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209EA4u;
label_209ea4:
    // 0x209ea4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209ea8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x209ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x209eac: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x209eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209eb0: 0xc7a00308  lwc1        $f0, 0x308($sp)
    ctx->pc = 0x209eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209eb4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x209eb4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x209eb8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x209eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x209ebc: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x209ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209ec0: 0x2464012c  addiu       $a0, $v1, 0x12C
    ctx->pc = 0x209ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 300));
    // 0x209ec4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x209ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x209ec8: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x209EC8u;
    SET_GPR_U32(ctx, 31, 0x209ED0u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x209EC8u, 0x209ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209ED0u;
label_209ed0:
    // 0x209ed0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x209ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209ed4: 0xc4a1003c  lwc1        $f1, 0x3C($a1)
    ctx->pc = 0x209ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209ed8: 0xc7a00308  lwc1        $f0, 0x308($sp)
    ctx->pc = 0x209ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209edc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x209edcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x209ee0: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x209ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x209ee4: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x209ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x209ee8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x209ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209ef0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x209ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x209ef4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x209EF4u;
    SET_GPR_U32(ctx, 31, 0x209EFCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x209EF4u, 0x209EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209EFCu;
label_209efc:
    // 0x209efc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x209efcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209f00: 0xafa30304  sw          $v1, 0x304($sp)
    ctx->pc = 0x209f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 772), GPR_U32(ctx, 3));
    // 0x209f04: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x209f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x209f08: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x209f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209f0c: 0x8fa20304  lw          $v0, 0x304($sp)
    ctx->pc = 0x209f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
    // 0x209f10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209f14: 0xc090f80  jal         func_243E00
    ctx->pc = 0x209F14u;
    SET_GPR_U32(ctx, 31, 0x209F1Cu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x209F14u, 0x209F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209F1Cu;
label_209f1c:
    // 0x209f1c: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x209f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209f20: 0x248500e8  addiu       $a1, $a0, 0xE8
    ctx->pc = 0x209f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x209f24: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x209f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209f28: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x209f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x209f2c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x209f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209f30: 0xc041d58  jal         func_107560
    ctx->pc = 0x209F30u;
    SET_GPR_U32(ctx, 31, 0x209F38u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x209F30u, 0x209F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209F38u;
label_209f38:
    // 0x209f38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209f3c: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x209f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209f40: 0xc4a100ec  lwc1        $f1, 0xEC($a1)
    ctx->pc = 0x209f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209f44: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x209f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x209f48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209f4c: 0x0  nop
    ctx->pc = 0x209f4cu;
    // NOP
    // 0x209f50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x209f50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x209f54: 0xe4a000ec  swc1        $f0, 0xEC($a1)
    ctx->pc = 0x209f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 236), bits); }
    // 0x209f58: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x209f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209f5c: 0x24a200d0  addiu       $v0, $a1, 0xD0
    ctx->pc = 0x209f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x209f60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209f64: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x209f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x209f68: 0xc082abc  jal         func_20AAF0
    ctx->pc = 0x209F68u;
    SET_GPR_U32(ctx, 31, 0x209F70u);
    ctx->pc = 0x20AAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAF0u, 0x209F68u, 0x209F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209F70u;
label_209f70:
    // 0x209f70: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x209f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209f74: 0x248200c4  addiu       $v0, $a0, 0xC4
    ctx->pc = 0x209f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 196));
    // 0x209f78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209f7c: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x209f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x209f80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209f84: 0xc082abc  jal         func_20AAF0
    ctx->pc = 0x209F84u;
    SET_GPR_U32(ctx, 31, 0x209F8Cu);
    ctx->pc = 0x20AAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAF0u, 0x209F84u, 0x209F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209F8Cu;
label_209f8c:
    // 0x209f8c: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x209f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209f90: 0x24a200b8  addiu       $v0, $a1, 0xB8
    ctx->pc = 0x209f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 184));
    // 0x209f94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209f98: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x209f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x209f9c: 0xc05f298  jal         func_17CA60
    ctx->pc = 0x209F9Cu;
    SET_GPR_U32(ctx, 31, 0x209FA4u);
    ctx->pc = 0x17CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CA60u, 0x209F9Cu, 0x209FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209FA4u;
label_209fa4:
    // 0x209fa4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x209fa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209fa8: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x209FA8u;
    {
        const bool branch_taken_0x209fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209fa8) {
            ctx->pc = 0x20A0A4u;
            goto label_20a0a4;
        }
    }
    ctx->pc = 0x209FB0u;
label_209fb0:
    // 0x209fb0: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x209fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209fb4: 0xc48100a4  lwc1        $f1, 0xA4($a0)
    ctx->pc = 0x209fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209fb8: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x209fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209fbc: 0xc4a000e8  lwc1        $f0, 0xE8($a1)
    ctx->pc = 0x209fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209fc0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x209fc0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x209fc4: 0xc78081a0  lwc1        $f0, -0x7E60($gp)
    ctx->pc = 0x209fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209fc8: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x209fc8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x209fcc: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x209fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209fd0: 0x246400d0  addiu       $a0, $v1, 0xD0
    ctx->pc = 0x209fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x209fd4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x209fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209fd8: 0xc082aa4  jal         func_20AA90
    ctx->pc = 0x209FD8u;
    SET_GPR_U32(ctx, 31, 0x209FE0u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x209FD8u, 0x209FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209FE0u;
label_209fe0:
    // 0x209fe0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x209fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209fe4: 0xe6140000  swc1        $f20, 0x0($s0)
    ctx->pc = 0x209fe4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x209fe8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x209fe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x209fec: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x209fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x209ff0: 0x244300d0  addiu       $v1, $v0, 0xD0
    ctx->pc = 0x209ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x209ff4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x209ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209ff8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x209ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209ffc: 0xc082aa4  jal         func_20AA90
    ctx->pc = 0x209FFCu;
    SET_GPR_U32(ctx, 31, 0x20A004u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x209FFCu, 0x20A004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A004u;
label_20a004:
    // 0x20a004: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x20a004u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x20a008: 0x8fb00320  lw          $s0, 0x320($sp)
    ctx->pc = 0x20a008u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a00c: 0xc60100ac  lwc1        $f1, 0xAC($s0)
    ctx->pc = 0x20a00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a010: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x20a010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a014: 0xc48000f0  lwc1        $f0, 0xF0($a0)
    ctx->pc = 0x20a014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a018: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x20a018u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20a01c: 0xc78081a0  lwc1        $f0, -0x7E60($gp)
    ctx->pc = 0x20a01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a020: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x20a020u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20a024: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x20a024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a028: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x20a028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x20a02c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a030: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20a030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a034: 0xc082aa4  jal         func_20AA90
    ctx->pc = 0x20A034u;
    SET_GPR_U32(ctx, 31, 0x20A03Cu);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20A034u, 0x20A03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A03Cu;
label_20a03c:
    // 0x20a03c: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x20a03cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x20a040: 0x6800006  bltz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x20A040u;
    {
        const bool branch_taken_0x20a040 = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x20a040) {
            ctx->pc = 0x20A05Cu;
            goto label_20a05c;
        }
    }
    ctx->pc = 0x20A048u;
    // 0x20a048: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x20a048u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a04c: 0x0  nop
    ctx->pc = 0x20a04cu;
    // NOP
    // 0x20a050: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20a050u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20a054: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20A054u;
    {
        const bool branch_taken_0x20a054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a054) {
            ctx->pc = 0x20A078u;
            goto label_20a078;
        }
    }
    ctx->pc = 0x20A05Cu;
label_20a05c:
    // 0x20a05c: 0x142842  srl         $a1, $s4, 1
    ctx->pc = 0x20a05cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x20a060: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x20a060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x20a064: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x20a064u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x20a068: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x20a068u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a06c: 0x0  nop
    ctx->pc = 0x20a06cu;
    // NOP
    // 0x20a070: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20a070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20a074: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x20a074u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_20a078:
    // 0x20a078: 0xc7808298  lwc1        $f0, -0x7D68($gp)
    ctx->pc = 0x20a078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a07c: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x20a07cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20a080: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x20a080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a084: 0x24a200b8  addiu       $v0, $a1, 0xB8
    ctx->pc = 0x20a084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 184));
    // 0x20a088: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a08c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20a08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a090: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x20A090u;
    SET_GPR_U32(ctx, 31, 0x20A098u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x20A090u, 0x20A098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A098u;
label_20a098:
    // 0x20a098: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x20a098u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20a09c: 0x26840001  addiu       $a0, $s4, 0x1
    ctx->pc = 0x20a09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x20a0a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x20a0a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20a0a4:
    // 0x20a0a4: 0x2e85004b  sltiu       $a1, $s4, 0x4B
    ctx->pc = 0x20a0a4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)75) ? 1 : 0);
    // 0x20a0a8: 0x14a0ffc1  bnez        $a1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x20A0A8u;
    {
        const bool branch_taken_0x20a0a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a0a8) {
            ctx->pc = 0x209FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209fb0;
        }
    }
    ctx->pc = 0x20A0B0u;
    // 0x20a0b0: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x20a0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x20a0b4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x20a0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20a0b8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20A0B8u;
    {
        const bool branch_taken_0x20a0b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a0b8) {
            ctx->pc = 0x20A0E0u;
            goto label_20a0e0;
        }
    }
    ctx->pc = 0x20A0C0u;
    // 0x20a0c0: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x20a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_20a0c4:
    // 0x20a0c4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x20a0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x20a0c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20a0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20a0cc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x20a0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x20a0d0: 0x0  nop
    ctx->pc = 0x20a0d0u;
    // NOP
    // 0x20a0d4: 0x0  nop
    ctx->pc = 0x20a0d4u;
    // NOP
    // 0x20a0d8: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20A0D8u;
    {
        const bool branch_taken_0x20a0d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a0d8) {
            ctx->pc = 0x20A0C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20a0c4;
        }
    }
    ctx->pc = 0x20A0E0u;
label_20a0e0:
    // 0x20a0e0: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x20a0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a0e4: 0xc48100a4  lwc1        $f1, 0xA4($a0)
    ctx->pc = 0x20a0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a0e8: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x20a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a0ec: 0xc44000e8  lwc1        $f0, 0xE8($v0)
    ctx->pc = 0x20a0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a0f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20a0f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20a0f4: 0xe7a002e0  swc1        $f0, 0x2E0($sp)
    ctx->pc = 0x20a0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 736), bits); }
    // 0x20a0f8: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x20a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a0fc: 0xc44100ac  lwc1        $f1, 0xAC($v0)
    ctx->pc = 0x20a0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a100: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x20a100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a104: 0xc48000f0  lwc1        $f0, 0xF0($a0)
    ctx->pc = 0x20a104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a108: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20a108u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20a10c: 0xe7a002e4  swc1        $f0, 0x2E4($sp)
    ctx->pc = 0x20a10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 740), bits); }
    // 0x20a110: 0xe7a002ec  swc1        $f0, 0x2EC($sp)
    ctx->pc = 0x20a110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 748), bits); }
    // 0x20a114: 0x27a202e0  addiu       $v0, $sp, 0x2E0
    ctx->pc = 0x20a114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x20a118: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a11c: 0xc104d30  jal         func_4134C0
    ctx->pc = 0x20A11Cu;
    SET_GPR_U32(ctx, 31, 0x20A124u);
    ctx->pc = 0x4134C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4134C0u, 0x20A11Cu, 0x20A124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A124u;
label_20a124:
    // 0x20a124: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x20a124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a128: 0xe46000dc  swc1        $f0, 0xDC($v1)
    ctx->pc = 0x20a128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 220), bits); }
    // 0x20a12c: 0xc78381bc  lwc1        $f3, -0x7E44($gp)
    ctx->pc = 0x20a12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20a130: 0xc7a202e0  lwc1        $f2, 0x2E0($sp)
    ctx->pc = 0x20a130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20a134: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x20a134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a138: 0xc4a100e8  lwc1        $f1, 0xE8($a1)
    ctx->pc = 0x20a138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a13c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a13cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a140: 0x0  nop
    ctx->pc = 0x20a140u;
    // NOP
    // 0x20a144: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20a144u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20a148: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20a148u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x20a14c: 0xe4a000e8  swc1        $f0, 0xE8($a1)
    ctx->pc = 0x20a14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 232), bits); }
    // 0x20a150: 0xc78381bc  lwc1        $f3, -0x7E44($gp)
    ctx->pc = 0x20a150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20a154: 0xc7a202e4  lwc1        $f2, 0x2E4($sp)
    ctx->pc = 0x20a154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20a158: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x20a158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a15c: 0xc44100f0  lwc1        $f1, 0xF0($v0)
    ctx->pc = 0x20a15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a160: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a164: 0x0  nop
    ctx->pc = 0x20a164u;
    // NOP
    // 0x20a168: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20a168u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20a16c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20a16cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x20a170: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x20a170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
    // 0x20a174: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x20a174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x20a178: 0x244293a0  addiu       $v0, $v0, -0x6C60
    ctx->pc = 0x20a178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939552));
    // 0x20a17c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a180: 0xc107156  jal         func_41C558
    ctx->pc = 0x20A180u;
    SET_GPR_U32(ctx, 31, 0x20A188u);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x20A180u, 0x20A188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A188u;
label_20a188:
    // 0x20a188: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a18c: 0x27829af0  addiu       $v0, $gp, -0x6510
    ctx->pc = 0x20a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941424));
    // 0x20a190: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a194: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20a194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a198: 0xc107fa4  jal         func_41FE90
    ctx->pc = 0x20A198u;
    SET_GPR_U32(ctx, 31, 0x20A1A0u);
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x20A198u, 0x20A1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A1A0u;
label_20a1a0:
    // 0x20a1a0: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x20a1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a1a4: 0xaca200fc  sw          $v0, 0xFC($a1)
    ctx->pc = 0x20a1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 252), GPR_U32(ctx, 2));
    // 0x20a1a8: 0x8f85c008  lw          $a1, -0x3FF8($gp)
    ctx->pc = 0x20a1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x20a1ac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20a1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a1b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20a1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a1b4: 0x240200e1  addiu       $v0, $zero, 0xE1
    ctx->pc = 0x20a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
    // 0x20a1b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20a1b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a1bc: 0xc082a74  jal         func_20A9D0
    ctx->pc = 0x20A1BCu;
    SET_GPR_U32(ctx, 31, 0x20A1C4u);
    ctx->pc = 0x20A9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A9D0u, 0x20A1BCu, 0x20A1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A1C4u;
label_20a1c4:
    // 0x20a1c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20a1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a1c8: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x20a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a1cc: 0xac4500f8  sw          $a1, 0xF8($v0)
    ctx->pc = 0x20a1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 5));
    // 0x20a1d0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x20a1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x20a1d4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x20a1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x20a1d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x20a1d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a1dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20a1dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a1e0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x20a1e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a1e4: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x20A1E4u;
    {
        const bool branch_taken_0x20a1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a1e4) {
            ctx->pc = 0x20A478u;
            goto label_20a478;
        }
    }
    ctx->pc = 0x20A1ECu;
label_20a1ec:
    // 0x20a1ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a1ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a1f0: 0x0  nop
    ctx->pc = 0x20a1f0u;
    // NOP
    // 0x20a1f4: 0xe7a002d0  swc1        $f0, 0x2D0($sp)
    ctx->pc = 0x20a1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
    // 0x20a1f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a1f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a1fc: 0x0  nop
    ctx->pc = 0x20a1fcu;
    // NOP
    // 0x20a200: 0xe7a002d4  swc1        $f0, 0x2D4($sp)
    ctx->pc = 0x20a200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 724), bits); }
    // 0x20a204: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a208: 0x0  nop
    ctx->pc = 0x20a208u;
    // NOP
    // 0x20a20c: 0xe7a002d8  swc1        $f0, 0x2D8($sp)
    ctx->pc = 0x20a20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 728), bits); }
    // 0x20a210: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x20a210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a214: 0x1220c0  sll         $a0, $s2, 3
    ctx->pc = 0x20a214u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x20a218: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x20a218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x20a21c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x20a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20a220: 0x8c6400f8  lw          $a0, 0xF8($v1)
    ctx->pc = 0x20a220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x20a224: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x20a224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20a228: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20a228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a22c: 0x27a202d0  addiu       $v0, $sp, 0x2D0
    ctx->pc = 0x20a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x20a230: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20a230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a234: 0xc041d58  jal         func_107560
    ctx->pc = 0x20A234u;
    SET_GPR_U32(ctx, 31, 0x20A23Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x20A234u, 0x20A23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A23Cu;
label_20a23c:
    // 0x20a23c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a240: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x20a240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a244: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x20a244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x20a248: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x20a248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20a24c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x20a24cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a250: 0x8ca500f8  lw          $a1, 0xF8($a1)
    ctx->pc = 0x20a250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 248)));
    // 0x20a254: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x20a254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x20a258: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x20a258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x20a25c: 0xafa40300  sw          $a0, 0x300($sp)
    ctx->pc = 0x20a25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 4));
    // 0x20a260: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x20a260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x20a264: 0xa0b30000  sb          $s3, 0x0($a1)
    ctx->pc = 0x20a264u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x20a268: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x20a268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x20a26c: 0xa0530001  sb          $s3, 0x1($v0)
    ctx->pc = 0x20a26cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 19));
    // 0x20a270: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x20a270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x20a274: 0xa0530002  sb          $s3, 0x2($v0)
    ctx->pc = 0x20a274u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x20a278: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x20a278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x20a27c: 0xa0b30003  sb          $s3, 0x3($a1)
    ctx->pc = 0x20a27cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x20a280: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a284: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x20a284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a288: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x20a288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x20a28c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x20a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20a290: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x20a290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a294: 0x8ca200f8  lw          $v0, 0xF8($a1)
    ctx->pc = 0x20a294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 248)));
    // 0x20a298: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x20a298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a29c: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x20a29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x20a2a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a2a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a2a4: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x20a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a2a8: 0x1220c0  sll         $a0, $s2, 3
    ctx->pc = 0x20a2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x20a2ac: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x20a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x20a2b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20a2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a2b4: 0x8c6400f8  lw          $a0, 0xF8($v1)
    ctx->pc = 0x20a2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x20a2b8: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x20a2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20a2bc: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x20a2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x20a2c0: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x20a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x20a2c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x20a2c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a2c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a2c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a2cc: 0x0  nop
    ctx->pc = 0x20a2ccu;
    // NOP
    // 0x20a2d0: 0xe7a002c0  swc1        $f0, 0x2C0($sp)
    ctx->pc = 0x20a2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
    // 0x20a2d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a2d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a2d8: 0x0  nop
    ctx->pc = 0x20a2d8u;
    // NOP
    // 0x20a2dc: 0xe7a002c4  swc1        $f0, 0x2C4($sp)
    ctx->pc = 0x20a2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 708), bits); }
    // 0x20a2e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a2e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a2e4: 0x0  nop
    ctx->pc = 0x20a2e4u;
    // NOP
    // 0x20a2e8: 0xe7a002c8  swc1        $f0, 0x2C8($sp)
    ctx->pc = 0x20a2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
    // 0x20a2ec: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x20a2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a2f0: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x20a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x20a2f4: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x20a2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20a2f8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x20a2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20a2fc: 0x8c8500f8  lw          $a1, 0xF8($a0)
    ctx->pc = 0x20a2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x20a300: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x20a300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x20a304: 0x27a202c0  addiu       $v0, $sp, 0x2C0
    ctx->pc = 0x20a304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x20a308: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20a308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a30c: 0xc041d58  jal         func_107560
    ctx->pc = 0x20A30Cu;
    SET_GPR_U32(ctx, 31, 0x20A314u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x20A30Cu, 0x20A314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A314u;
label_20a314:
    // 0x20a314: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20a314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a318: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x20a318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a31c: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x20a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x20a320: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x20a320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20a324: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x20a324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x20a328: 0x8c8400f8  lw          $a0, 0xF8($a0)
    ctx->pc = 0x20a328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x20a32c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x20a32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20a330: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x20a330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x20a334: 0xafa202fc  sw          $v0, 0x2FC($sp)
    ctx->pc = 0x20a334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 764), GPR_U32(ctx, 2));
    // 0x20a338: 0x8fa402fc  lw          $a0, 0x2FC($sp)
    ctx->pc = 0x20a338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 764)));
    // 0x20a33c: 0xa0930000  sb          $s3, 0x0($a0)
    ctx->pc = 0x20a33cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x20a340: 0x8fa502fc  lw          $a1, 0x2FC($sp)
    ctx->pc = 0x20a340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 764)));
    // 0x20a344: 0xa0b30001  sb          $s3, 0x1($a1)
    ctx->pc = 0x20a344u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 19));
    // 0x20a348: 0x8fa402fc  lw          $a0, 0x2FC($sp)
    ctx->pc = 0x20a348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 764)));
    // 0x20a34c: 0xa0930002  sb          $s3, 0x2($a0)
    ctx->pc = 0x20a34cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x20a350: 0x8fa402fc  lw          $a0, 0x2FC($sp)
    ctx->pc = 0x20a350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 764)));
    // 0x20a354: 0xa0930003  sb          $s3, 0x3($a0)
    ctx->pc = 0x20a354u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x20a358: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x20a358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x20a35c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x20a35cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a360: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x20a360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a364: 0x1228c0  sll         $a1, $s2, 3
    ctx->pc = 0x20a364u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x20a368: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x20a368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x20a36c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x20a36cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20a370: 0x8c4200f8  lw          $v0, 0xF8($v0)
    ctx->pc = 0x20a370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x20a374: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x20a374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20a378: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x20a378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x20a37c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a37cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a380: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x20a380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a384: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x20a384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x20a388: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x20a388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20a38c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20a38cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20a390: 0x8ca200f8  lw          $v0, 0xF8($a1)
    ctx->pc = 0x20a390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 248)));
    // 0x20a394: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x20a394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a398: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x20a398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x20a39c: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x20a39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x20a3a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20a3a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a3a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a3a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a3a8: 0x0  nop
    ctx->pc = 0x20a3a8u;
    // NOP
    // 0x20a3ac: 0xe7a002b0  swc1        $f0, 0x2B0($sp)
    ctx->pc = 0x20a3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
    // 0x20a3b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a3b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a3b4: 0x0  nop
    ctx->pc = 0x20a3b4u;
    // NOP
    // 0x20a3b8: 0xe7a002b4  swc1        $f0, 0x2B4($sp)
    ctx->pc = 0x20a3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 692), bits); }
    // 0x20a3bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a3bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a3c0: 0x0  nop
    ctx->pc = 0x20a3c0u;
    // NOP
    // 0x20a3c4: 0xe7a002b8  swc1        $f0, 0x2B8($sp)
    ctx->pc = 0x20a3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
    // 0x20a3c8: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x20a3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a3cc: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x20a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x20a3d0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x20a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20a3d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x20a3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a3d8: 0x8ca200f8  lw          $v0, 0xF8($a1)
    ctx->pc = 0x20a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 248)));
    // 0x20a3dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a3e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a3e4: 0x27a202b0  addiu       $v0, $sp, 0x2B0
    ctx->pc = 0x20a3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x20a3e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20a3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a3ec: 0xc041d58  jal         func_107560
    ctx->pc = 0x20A3ECu;
    SET_GPR_U32(ctx, 31, 0x20A3F4u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x20A3ECu, 0x20A3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A3F4u;
label_20a3f4:
    // 0x20a3f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20a3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a3f8: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x20a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a3fc: 0x1220c0  sll         $a0, $s2, 3
    ctx->pc = 0x20a3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x20a400: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x20a400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x20a404: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x20a404u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20a408: 0x8c4500f8  lw          $a1, 0xF8($v0)
    ctx->pc = 0x20a408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x20a40c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x20a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x20a410: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x20a410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x20a414: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x20a414u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a418: 0xa3d30000  sb          $s3, 0x0($fp)
    ctx->pc = 0x20a418u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x20a41c: 0xa3d30001  sb          $s3, 0x1($fp)
    ctx->pc = 0x20a41cu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 1), (uint8_t)GPR_U32(ctx, 19));
    // 0x20a420: 0xa3d30002  sb          $s3, 0x2($fp)
    ctx->pc = 0x20a420u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x20a424: 0xa3d30003  sb          $s3, 0x3($fp)
    ctx->pc = 0x20a424u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x20a428: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a42c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x20a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a430: 0x1220c0  sll         $a0, $s2, 3
    ctx->pc = 0x20a430u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x20a434: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x20a434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x20a438: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x20a438u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20a43c: 0x8c4200f8  lw          $v0, 0xF8($v0)
    ctx->pc = 0x20a43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x20a440: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x20a440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20a444: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x20a444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x20a448: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x20a448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x20a44c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20a44cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a450: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x20a450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a454: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x20a454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x20a458: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x20a458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20a45c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x20a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a460: 0x8c8200f8  lw          $v0, 0xF8($a0)
    ctx->pc = 0x20a460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x20a464: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20a464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a468: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x20a468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x20a46c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x20a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x20a470: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x20a470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a474: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x20a474u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_20a478:
    // 0x20a478: 0x2e82004b  sltiu       $v0, $s4, 0x4B
    ctx->pc = 0x20a478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)75) ? 1 : 0);
    // 0x20a47c: 0x1440ff5b  bnez        $v0, . + 4 + (-0xA5 << 2)
    ctx->pc = 0x20A47Cu;
    {
        const bool branch_taken_0x20a47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a47c) {
            ctx->pc = 0x20A1ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20a1ec;
        }
    }
    ctx->pc = 0x20A484u;
    // 0x20a484: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x20a484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x20a488: 0x248493c8  addiu       $a0, $a0, -0x6C38
    ctx->pc = 0x20a488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939592));
    // 0x20a48c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20a48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a490: 0xc107fa4  jal         func_41FE90
    ctx->pc = 0x20A490u;
    SET_GPR_U32(ctx, 31, 0x20A498u);
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x20A490u, 0x20A498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A498u;
label_20a498:
    // 0x20a498: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20a498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a49c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x20a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a4a0: 0xac450104  sw          $a1, 0x104($v0)
    ctx->pc = 0x20a4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 5));
    // 0x20a4a4: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x20a4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x20a4a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20a4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a4ac: 0x2406012c  addiu       $a2, $zero, 0x12C
    ctx->pc = 0x20a4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x20a4b0: 0xc082a74  jal         func_20A9D0
    ctx->pc = 0x20A4B0u;
    SET_GPR_U32(ctx, 31, 0x20A4B8u);
    ctx->pc = 0x20A9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A9D0u, 0x20A4B0u, 0x20A4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A4B8u;
label_20a4b8:
    // 0x20a4b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a4bc: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x20a4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a4c0: 0xaca40100  sw          $a0, 0x100($a1)
    ctx->pc = 0x20a4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 256), GPR_U32(ctx, 4));
    // 0x20a4c4: 0x8f82c008  lw          $v0, -0x3FF8($gp)
    ctx->pc = 0x20a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x20a4c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a4cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20a4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a4d0: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x20a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x20a4d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20a4d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a4d8: 0xc082a40  jal         func_20A900
    ctx->pc = 0x20A4D8u;
    SET_GPR_U32(ctx, 31, 0x20A4E0u);
    ctx->pc = 0x20A900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A900u, 0x20A4D8u, 0x20A4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A4E0u;
label_20a4e0:
    // 0x20a4e0: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x20a4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a4e4: 0xac820108  sw          $v0, 0x108($a0)
    ctx->pc = 0x20a4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 2));
    // 0x20a4e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20a4e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a4ec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x20a4ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a4f0: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x20A4F0u;
    {
        const bool branch_taken_0x20a4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a4f0) {
            ctx->pc = 0x20A770u;
            goto label_20a770;
        }
    }
    ctx->pc = 0x20A4F8u;
label_20a4f8:
    // 0x20a4f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a4f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a4fc: 0x0  nop
    ctx->pc = 0x20a4fcu;
    // NOP
    // 0x20a500: 0xe7a002a0  swc1        $f0, 0x2A0($sp)
    ctx->pc = 0x20a500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x20a504: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x20a504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a508: 0xc4a000a8  lwc1        $f0, 0xA8($a1)
    ctx->pc = 0x20a508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a50c: 0xe7a002a4  swc1        $f0, 0x2A4($sp)
    ctx->pc = 0x20a50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
    // 0x20a510: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a514: 0x0  nop
    ctx->pc = 0x20a514u;
    // NOP
    // 0x20a518: 0xe7a002a8  swc1        $f0, 0x2A8($sp)
    ctx->pc = 0x20a518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
    // 0x20a51c: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x20a51cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a520: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x20a520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x20a524: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x20a524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20a528: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20a528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20a52c: 0x8ca20100  lw          $v0, 0x100($a1)
    ctx->pc = 0x20a52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
    // 0x20a530: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x20a530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a534: 0x27a502a0  addiu       $a1, $sp, 0x2A0
    ctx->pc = 0x20a534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x20a538: 0xc041d58  jal         func_107560
    ctx->pc = 0x20A538u;
    SET_GPR_U32(ctx, 31, 0x20A540u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x20A538u, 0x20A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A540u;
label_20a540:
    // 0x20a540: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x20a540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a544: 0x1228c0  sll         $a1, $s2, 3
    ctx->pc = 0x20a544u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x20a548: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x20a548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x20a54c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a550: 0x8c840100  lw          $a0, 0x100($a0)
    ctx->pc = 0x20a550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x20a554: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x20a554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20a558: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x20a558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x20a55c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x20a55cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a560: 0xa2f30000  sb          $s3, 0x0($s7)
    ctx->pc = 0x20a560u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x20a564: 0xa2f30001  sb          $s3, 0x1($s7)
    ctx->pc = 0x20a564u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 1), (uint8_t)GPR_U32(ctx, 19));
    // 0x20a568: 0xa2f30002  sb          $s3, 0x2($s7)
    ctx->pc = 0x20a568u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x20a56c: 0xa2f30003  sb          $s3, 0x3($s7)
    ctx->pc = 0x20a56cu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x20a570: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a570u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a574: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x20a574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a578: 0x1220c0  sll         $a0, $s2, 3
    ctx->pc = 0x20a578u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x20a57c: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x20a57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x20a580: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x20a580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20a584: 0x8c630100  lw          $v1, 0x100($v1)
    ctx->pc = 0x20a584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x20a588: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20a588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20a58c: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x20a58cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x20a590: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a594: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x20a594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a598: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x20a598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x20a59c: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x20a59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20a5a0: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x20a5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20a5a4: 0x8c640100  lw          $a0, 0x100($v1)
    ctx->pc = 0x20a5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x20a5a8: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x20a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20a5ac: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x20a5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x20a5b0: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x20a5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x20a5b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20a5b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a5b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a5b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a5bc: 0x0  nop
    ctx->pc = 0x20a5bcu;
    // NOP
    // 0x20a5c0: 0xe7a00290  swc1        $f0, 0x290($sp)
    ctx->pc = 0x20a5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
    // 0x20a5c4: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x20a5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a5c8: 0xc4a000a8  lwc1        $f0, 0xA8($a1)
    ctx->pc = 0x20a5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a5cc: 0xe7a00294  swc1        $f0, 0x294($sp)
    ctx->pc = 0x20a5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 660), bits); }
    // 0x20a5d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a5d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a5d4: 0x0  nop
    ctx->pc = 0x20a5d4u;
    // NOP
    // 0x20a5d8: 0xe7a00298  swc1        $f0, 0x298($sp)
    ctx->pc = 0x20a5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
    // 0x20a5dc: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x20a5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a5e0: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x20a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x20a5e4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x20a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20a5e8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x20a5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a5ec: 0x8ca50100  lw          $a1, 0x100($a1)
    ctx->pc = 0x20a5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
    // 0x20a5f0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x20a5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x20a5f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20a5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a5f8: 0x27a20290  addiu       $v0, $sp, 0x290
    ctx->pc = 0x20a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x20a5fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20a5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a600: 0xc041d58  jal         func_107560
    ctx->pc = 0x20A600u;
    SET_GPR_U32(ctx, 31, 0x20A608u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x20A600u, 0x20A608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A608u;
label_20a608:
    // 0x20a608: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20a608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a60c: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x20a60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a610: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x20a610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x20a614: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x20a614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20a618: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20a618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a61c: 0x8c840100  lw          $a0, 0x100($a0)
    ctx->pc = 0x20a61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x20a620: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x20a620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20a624: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x20a624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x20a628: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x20a628u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a62c: 0xa2d30000  sb          $s3, 0x0($s6)
    ctx->pc = 0x20a62cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x20a630: 0xa2d30001  sb          $s3, 0x1($s6)
    ctx->pc = 0x20a630u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 19));
    // 0x20a634: 0xa2d30002  sb          $s3, 0x2($s6)
    ctx->pc = 0x20a634u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x20a638: 0xa2d30003  sb          $s3, 0x3($s6)
    ctx->pc = 0x20a638u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x20a63c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x20a63cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x20a640: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20a640u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a644: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x20a644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a648: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x20a648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x20a64c: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x20a64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x20a650: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x20a650u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20a654: 0x8c420100  lw          $v0, 0x100($v0)
    ctx->pc = 0x20a654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x20a658: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x20a658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20a65c: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x20a65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x20a660: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a664: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x20a664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a668: 0x1280c0  sll         $s0, $s2, 3
    ctx->pc = 0x20a668u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x20a66c: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x20a66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x20a670: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x20a670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20a674: 0x8c450100  lw          $a1, 0x100($v0)
    ctx->pc = 0x20a674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x20a678: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x20a678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x20a67c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x20a67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x20a680: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x20a680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x20a684: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20a684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a688: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a688u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a68c: 0x0  nop
    ctx->pc = 0x20a68cu;
    // NOP
    // 0x20a690: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x20a690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
    // 0x20a694: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x20a694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a698: 0xc4a000a8  lwc1        $f0, 0xA8($a1)
    ctx->pc = 0x20a698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a69c: 0xe7a00284  swc1        $f0, 0x284($sp)
    ctx->pc = 0x20a69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
    // 0x20a6a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a6a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a6a4: 0x0  nop
    ctx->pc = 0x20a6a4u;
    // NOP
    // 0x20a6a8: 0xe7a00288  swc1        $f0, 0x288($sp)
    ctx->pc = 0x20a6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
    // 0x20a6ac: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x20a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a6b0: 0x1220c0  sll         $a0, $s2, 3
    ctx->pc = 0x20a6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x20a6b4: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x20a6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x20a6b8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x20a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20a6bc: 0x8c650100  lw          $a1, 0x100($v1)
    ctx->pc = 0x20a6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x20a6c0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x20a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x20a6c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a6c8: 0x27a50280  addiu       $a1, $sp, 0x280
    ctx->pc = 0x20a6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x20a6cc: 0xc041d58  jal         func_107560
    ctx->pc = 0x20A6CCu;
    SET_GPR_U32(ctx, 31, 0x20A6D4u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x20A6CCu, 0x20A6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A6D4u;
label_20a6d4:
    // 0x20a6d4: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x20a6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a6d8: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x20a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x20a6dc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x20a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20a6e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a6e4: 0x8c850100  lw          $a1, 0x100($a0)
    ctx->pc = 0x20a6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x20a6e8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x20a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x20a6ec: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x20a6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x20a6f0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x20a6f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a6f4: 0xa2b30000  sb          $s3, 0x0($s5)
    ctx->pc = 0x20a6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x20a6f8: 0xa2b30001  sb          $s3, 0x1($s5)
    ctx->pc = 0x20a6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 19));
    // 0x20a6fc: 0xa2b30002  sb          $s3, 0x2($s5)
    ctx->pc = 0x20a6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x20a700: 0xa2b30003  sb          $s3, 0x3($s5)
    ctx->pc = 0x20a700u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x20a704: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a704u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a708: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x20a708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a70c: 0x1220c0  sll         $a0, $s2, 3
    ctx->pc = 0x20a70cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x20a710: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x20a710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x20a714: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x20a714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20a718: 0x8c440100  lw          $a0, 0x100($v0)
    ctx->pc = 0x20a718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x20a71c: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x20a71cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20a720: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x20a720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x20a724: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x20a724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x20a728: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20a728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a72c: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x20a72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a730: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x20a730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x20a734: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x20a734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20a738: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x20a738u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x20a73c: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x20a73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x20a740: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20a740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20a744: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x20a744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x20a748: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x20a748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x20a74c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x20a74cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a750: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a754: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x20a754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a758: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x20a758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x20a75c: 0x8ca50108  lw          $a1, 0x108($a1)
    ctx->pc = 0x20a75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x20a760: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x20a760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x20a764: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x20a764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20a768: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x20a768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x20a76c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x20a76cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20a770:
    // 0x20a770: 0x2e840064  sltiu       $a0, $s4, 0x64
    ctx->pc = 0x20a770u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x20a774: 0x1480ff60  bnez        $a0, . + 4 + (-0xA0 << 2)
    ctx->pc = 0x20A774u;
    {
        const bool branch_taken_0x20a774 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a774) {
            ctx->pc = 0x20A4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20a4f8;
        }
    }
    ctx->pc = 0x20A77Cu;
    // 0x20a77c: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x20a77cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a780: 0xaca0010c  sw          $zero, 0x10C($a1)
    ctx->pc = 0x20a780u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 268), GPR_U32(ctx, 0));
    // 0x20a784: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x20a784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x20a788: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x20A788u;
    SET_GPR_U32(ctx, 31, 0x20A790u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x20A788u, 0x20A790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A790u;
label_20a790:
    // 0x20a790: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20a790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a794: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x20a794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x20a798: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a79c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x20A79Cu;
    SET_GPR_U32(ctx, 31, 0x20A7A4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x20A79Cu, 0x20A7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A7A4u;
label_20a7a4:
    // 0x20a7a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a7a8: 0xafa402e8  sw          $a0, 0x2E8($sp)
    ctx->pc = 0x20a7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 4));
    // 0x20a7ac: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x20a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x20a7b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20A7B0u;
    {
        const bool branch_taken_0x20a7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a7b0) {
            ctx->pc = 0x20A7D0u;
            goto label_20a7d0;
        }
    }
    ctx->pc = 0x20A7B8u;
    // 0x20a7b8: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x20a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x20a7bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a7c0: 0xc122e6c  jal         func_48B9B0
    ctx->pc = 0x20A7C0u;
    SET_GPR_U32(ctx, 31, 0x20A7C8u);
    ctx->pc = 0x48B9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B9B0u, 0x20A7C0u, 0x20A7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A7C8u;
label_20a7c8:
    // 0x20a7c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a7cc: 0xafa402e8  sw          $a0, 0x2E8($sp)
    ctx->pc = 0x20a7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 4));
label_20a7d0:
    // 0x20a7d0: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x20a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x20a7d4: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x20a7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a7d8: 0xac620110  sw          $v0, 0x110($v1)
    ctx->pc = 0x20a7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 272), GPR_U32(ctx, 2));
    // 0x20a7dc: 0xc107150  jal         func_41C540
    ctx->pc = 0x20A7DCu;
    SET_GPR_U32(ctx, 31, 0x20A7E4u);
    ctx->pc = 0x41C540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C540u, 0x20A7DCu, 0x20A7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A7E4u;
label_20a7e4:
    // 0x20a7e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20a7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a7e8: 0x27a20270  addiu       $v0, $sp, 0x270
    ctx->pc = 0x20a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x20a7ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a7f0: 0xc040304  jal         func_100C10
    ctx->pc = 0x20A7F0u;
    SET_GPR_U32(ctx, 31, 0x20A7F8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x20A7F0u, 0x20A7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A7F8u;
label_20a7f8:
    // 0x20a7f8: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x20a7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x20a7fc: 0x248493e0  addiu       $a0, $a0, -0x6C20
    ctx->pc = 0x20a7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939616));
    // 0x20a800: 0xc107156  jal         func_41C558
    ctx->pc = 0x20A800u;
    SET_GPR_U32(ctx, 31, 0x20A808u);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x20A800u, 0x20A808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A808u;
label_20a808:
    // 0x20a808: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x20a808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x20a80c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a810: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x20a810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x20a814: 0x24a59410  addiu       $a1, $a1, -0x6BF0
    ctx->pc = 0x20a814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939664));
    // 0x20a818: 0xc040304  jal         func_100C10
    ctx->pc = 0x20A818u;
    SET_GPR_U32(ctx, 31, 0x20A820u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x20A818u, 0x20A820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A820u;
label_20a820:
    // 0x20a820: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20a820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a824: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x20a824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a828: 0x8c450110  lw          $a1, 0x110($v0)
    ctx->pc = 0x20a828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x20a82c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20a82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a830: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x20a830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x20a834: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20a834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a838: 0xc123008  jal         func_48C020
    ctx->pc = 0x20A838u;
    SET_GPR_U32(ctx, 31, 0x20A840u);
    ctx->pc = 0x48C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C020u, 0x20A838u, 0x20A840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A840u;
label_20a840:
    // 0x20a840: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20a840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a844: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x20a844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x20a848: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a84c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20a84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20a850: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x20a850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a854: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x20A854u;
    SET_GPR_U32(ctx, 31, 0x20A85Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x20A854u, 0x20A85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A85Cu;
label_20a85c:
    // 0x20a85c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a860: 0x27a50270  addiu       $a1, $sp, 0x270
    ctx->pc = 0x20a860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x20a864: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20a864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a868: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x20A868u;
    SET_GPR_U32(ctx, 31, 0x20A870u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x20A868u, 0x20A870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A870u;
label_20a870:
    // 0x20a870: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a874: 0xc107156  jal         func_41C558
    ctx->pc = 0x20A874u;
    SET_GPR_U32(ctx, 31, 0x20A87Cu);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x20A874u, 0x20A87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A87Cu;
label_20a87c:
    // 0x20a87c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a880: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x20a880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x20a884: 0x8ca20110  lw          $v0, 0x110($a1)
    ctx->pc = 0x20a884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 272)));
    // 0x20a888: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a88c: 0xc123208  jal         func_48C820
    ctx->pc = 0x20A88Cu;
    SET_GPR_U32(ctx, 31, 0x20A894u);
    ctx->pc = 0x48C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C820u, 0x20A88Cu, 0x20A894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A894u;
label_20a894:
    // 0x20a894: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a898: 0x93a5031f  lbu         $a1, 0x31F($sp)
    ctx->pc = 0x20a898u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 799)));
    // 0x20a89c: 0xa3a5031e  sb          $a1, 0x31E($sp)
    ctx->pc = 0x20a89cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 798), (uint8_t)GPR_U32(ctx, 5));
    // 0x20a8a0: 0x27a20270  addiu       $v0, $sp, 0x270
    ctx->pc = 0x20a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x20a8a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a8a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20a8ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20a8acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a8b0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x20A8B0u;
    SET_GPR_U32(ctx, 31, 0x20A8B8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x20A8B0u, 0x20A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A8B8u;
label_20a8b8:
    // 0x20a8b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a8bc: 0x93a5031e  lbu         $a1, 0x31E($sp)
    ctx->pc = 0x20a8bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 798)));
    // 0x20a8c0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20a8c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a8c4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x20a8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20a8c8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x20a8c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20a8cc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x20a8ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20a8d0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x20a8d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20a8d4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x20a8d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20a8d8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x20a8d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20a8dc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20a8dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20a8e0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20a8e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20a8e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20a8e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a8e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20a8e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a8ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20a8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20a8f0: 0x27bd0330  addiu       $sp, $sp, 0x330
    ctx->pc = 0x20a8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    // 0x20a8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x20A8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A8FCu;
    // 0x20a8fc: 0x0  nop
    ctx->pc = 0x20a8fcu;
    // NOP
    ctx->pc = 0x20a900u;
}
