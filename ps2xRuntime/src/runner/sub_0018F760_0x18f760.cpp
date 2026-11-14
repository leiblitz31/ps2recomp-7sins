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

// Function: sub_0018F760
// Address: 0x18f760 - 0x18fc60
void sub_0018F760_0x18f760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F760_0x18f760");
#endif

    switch (ctx->pc) {
        case 0x18f760u: goto label_18f760;
        case 0x18f764u: goto label_18f764;
        case 0x18f768u: goto label_18f768;
        case 0x18f76cu: goto label_18f76c;
        case 0x18f770u: goto label_18f770;
        case 0x18f774u: goto label_18f774;
        case 0x18f778u: goto label_18f778;
        case 0x18f77cu: goto label_18f77c;
        case 0x18f780u: goto label_18f780;
        case 0x18f784u: goto label_18f784;
        case 0x18f788u: goto label_18f788;
        case 0x18f78cu: goto label_18f78c;
        case 0x18f790u: goto label_18f790;
        case 0x18f794u: goto label_18f794;
        case 0x18f798u: goto label_18f798;
        case 0x18f79cu: goto label_18f79c;
        case 0x18f7a0u: goto label_18f7a0;
        case 0x18f7a4u: goto label_18f7a4;
        case 0x18f7a8u: goto label_18f7a8;
        case 0x18f7acu: goto label_18f7ac;
        case 0x18f7b0u: goto label_18f7b0;
        case 0x18f7b4u: goto label_18f7b4;
        case 0x18f7b8u: goto label_18f7b8;
        case 0x18f7bcu: goto label_18f7bc;
        case 0x18f7c0u: goto label_18f7c0;
        case 0x18f7c4u: goto label_18f7c4;
        case 0x18f7c8u: goto label_18f7c8;
        case 0x18f7ccu: goto label_18f7cc;
        case 0x18f7d0u: goto label_18f7d0;
        case 0x18f7d4u: goto label_18f7d4;
        case 0x18f7d8u: goto label_18f7d8;
        case 0x18f7dcu: goto label_18f7dc;
        case 0x18f7e0u: goto label_18f7e0;
        case 0x18f7e4u: goto label_18f7e4;
        case 0x18f7e8u: goto label_18f7e8;
        case 0x18f7ecu: goto label_18f7ec;
        case 0x18f7f0u: goto label_18f7f0;
        case 0x18f7f4u: goto label_18f7f4;
        case 0x18f7f8u: goto label_18f7f8;
        case 0x18f7fcu: goto label_18f7fc;
        case 0x18f800u: goto label_18f800;
        case 0x18f804u: goto label_18f804;
        case 0x18f808u: goto label_18f808;
        case 0x18f80cu: goto label_18f80c;
        case 0x18f810u: goto label_18f810;
        case 0x18f814u: goto label_18f814;
        case 0x18f818u: goto label_18f818;
        case 0x18f81cu: goto label_18f81c;
        case 0x18f820u: goto label_18f820;
        case 0x18f824u: goto label_18f824;
        case 0x18f828u: goto label_18f828;
        case 0x18f82cu: goto label_18f82c;
        case 0x18f830u: goto label_18f830;
        case 0x18f834u: goto label_18f834;
        case 0x18f838u: goto label_18f838;
        case 0x18f83cu: goto label_18f83c;
        case 0x18f840u: goto label_18f840;
        case 0x18f844u: goto label_18f844;
        case 0x18f848u: goto label_18f848;
        case 0x18f84cu: goto label_18f84c;
        case 0x18f850u: goto label_18f850;
        case 0x18f854u: goto label_18f854;
        case 0x18f858u: goto label_18f858;
        case 0x18f85cu: goto label_18f85c;
        case 0x18f860u: goto label_18f860;
        case 0x18f864u: goto label_18f864;
        case 0x18f868u: goto label_18f868;
        case 0x18f86cu: goto label_18f86c;
        case 0x18f870u: goto label_18f870;
        case 0x18f874u: goto label_18f874;
        case 0x18f878u: goto label_18f878;
        case 0x18f87cu: goto label_18f87c;
        case 0x18f880u: goto label_18f880;
        case 0x18f884u: goto label_18f884;
        case 0x18f888u: goto label_18f888;
        case 0x18f88cu: goto label_18f88c;
        case 0x18f890u: goto label_18f890;
        case 0x18f894u: goto label_18f894;
        case 0x18f898u: goto label_18f898;
        case 0x18f89cu: goto label_18f89c;
        case 0x18f8a0u: goto label_18f8a0;
        case 0x18f8a4u: goto label_18f8a4;
        case 0x18f8a8u: goto label_18f8a8;
        case 0x18f8acu: goto label_18f8ac;
        case 0x18f8b0u: goto label_18f8b0;
        case 0x18f8b4u: goto label_18f8b4;
        case 0x18f8b8u: goto label_18f8b8;
        case 0x18f8bcu: goto label_18f8bc;
        case 0x18f8c0u: goto label_18f8c0;
        case 0x18f8c4u: goto label_18f8c4;
        case 0x18f8c8u: goto label_18f8c8;
        case 0x18f8ccu: goto label_18f8cc;
        case 0x18f8d0u: goto label_18f8d0;
        case 0x18f8d4u: goto label_18f8d4;
        case 0x18f8d8u: goto label_18f8d8;
        case 0x18f8dcu: goto label_18f8dc;
        case 0x18f8e0u: goto label_18f8e0;
        case 0x18f8e4u: goto label_18f8e4;
        case 0x18f8e8u: goto label_18f8e8;
        case 0x18f8ecu: goto label_18f8ec;
        case 0x18f8f0u: goto label_18f8f0;
        case 0x18f8f4u: goto label_18f8f4;
        case 0x18f8f8u: goto label_18f8f8;
        case 0x18f8fcu: goto label_18f8fc;
        case 0x18f900u: goto label_18f900;
        case 0x18f904u: goto label_18f904;
        case 0x18f908u: goto label_18f908;
        case 0x18f90cu: goto label_18f90c;
        case 0x18f910u: goto label_18f910;
        case 0x18f914u: goto label_18f914;
        case 0x18f918u: goto label_18f918;
        case 0x18f91cu: goto label_18f91c;
        case 0x18f920u: goto label_18f920;
        case 0x18f924u: goto label_18f924;
        case 0x18f928u: goto label_18f928;
        case 0x18f92cu: goto label_18f92c;
        case 0x18f930u: goto label_18f930;
        case 0x18f934u: goto label_18f934;
        case 0x18f938u: goto label_18f938;
        case 0x18f93cu: goto label_18f93c;
        case 0x18f940u: goto label_18f940;
        case 0x18f944u: goto label_18f944;
        case 0x18f948u: goto label_18f948;
        case 0x18f94cu: goto label_18f94c;
        case 0x18f950u: goto label_18f950;
        case 0x18f954u: goto label_18f954;
        case 0x18f958u: goto label_18f958;
        case 0x18f95cu: goto label_18f95c;
        case 0x18f960u: goto label_18f960;
        case 0x18f964u: goto label_18f964;
        case 0x18f968u: goto label_18f968;
        case 0x18f96cu: goto label_18f96c;
        case 0x18f970u: goto label_18f970;
        case 0x18f974u: goto label_18f974;
        case 0x18f978u: goto label_18f978;
        case 0x18f97cu: goto label_18f97c;
        case 0x18f980u: goto label_18f980;
        case 0x18f984u: goto label_18f984;
        case 0x18f988u: goto label_18f988;
        case 0x18f98cu: goto label_18f98c;
        case 0x18f990u: goto label_18f990;
        case 0x18f994u: goto label_18f994;
        case 0x18f998u: goto label_18f998;
        case 0x18f99cu: goto label_18f99c;
        case 0x18f9a0u: goto label_18f9a0;
        case 0x18f9a4u: goto label_18f9a4;
        case 0x18f9a8u: goto label_18f9a8;
        case 0x18f9acu: goto label_18f9ac;
        case 0x18f9b0u: goto label_18f9b0;
        case 0x18f9b4u: goto label_18f9b4;
        case 0x18f9b8u: goto label_18f9b8;
        case 0x18f9bcu: goto label_18f9bc;
        case 0x18f9c0u: goto label_18f9c0;
        case 0x18f9c4u: goto label_18f9c4;
        case 0x18f9c8u: goto label_18f9c8;
        case 0x18f9ccu: goto label_18f9cc;
        case 0x18f9d0u: goto label_18f9d0;
        case 0x18f9d4u: goto label_18f9d4;
        case 0x18f9d8u: goto label_18f9d8;
        case 0x18f9dcu: goto label_18f9dc;
        case 0x18f9e0u: goto label_18f9e0;
        case 0x18f9e4u: goto label_18f9e4;
        case 0x18f9e8u: goto label_18f9e8;
        case 0x18f9ecu: goto label_18f9ec;
        case 0x18f9f0u: goto label_18f9f0;
        case 0x18f9f4u: goto label_18f9f4;
        case 0x18f9f8u: goto label_18f9f8;
        case 0x18f9fcu: goto label_18f9fc;
        case 0x18fa00u: goto label_18fa00;
        case 0x18fa04u: goto label_18fa04;
        case 0x18fa08u: goto label_18fa08;
        case 0x18fa0cu: goto label_18fa0c;
        case 0x18fa10u: goto label_18fa10;
        case 0x18fa14u: goto label_18fa14;
        case 0x18fa18u: goto label_18fa18;
        case 0x18fa1cu: goto label_18fa1c;
        case 0x18fa20u: goto label_18fa20;
        case 0x18fa24u: goto label_18fa24;
        case 0x18fa28u: goto label_18fa28;
        case 0x18fa2cu: goto label_18fa2c;
        case 0x18fa30u: goto label_18fa30;
        case 0x18fa34u: goto label_18fa34;
        case 0x18fa38u: goto label_18fa38;
        case 0x18fa3cu: goto label_18fa3c;
        case 0x18fa40u: goto label_18fa40;
        case 0x18fa44u: goto label_18fa44;
        case 0x18fa48u: goto label_18fa48;
        case 0x18fa4cu: goto label_18fa4c;
        case 0x18fa50u: goto label_18fa50;
        case 0x18fa54u: goto label_18fa54;
        case 0x18fa58u: goto label_18fa58;
        case 0x18fa5cu: goto label_18fa5c;
        case 0x18fa60u: goto label_18fa60;
        case 0x18fa64u: goto label_18fa64;
        case 0x18fa68u: goto label_18fa68;
        case 0x18fa6cu: goto label_18fa6c;
        case 0x18fa70u: goto label_18fa70;
        case 0x18fa74u: goto label_18fa74;
        case 0x18fa78u: goto label_18fa78;
        case 0x18fa7cu: goto label_18fa7c;
        case 0x18fa80u: goto label_18fa80;
        case 0x18fa84u: goto label_18fa84;
        case 0x18fa88u: goto label_18fa88;
        case 0x18fa8cu: goto label_18fa8c;
        case 0x18fa90u: goto label_18fa90;
        case 0x18fa94u: goto label_18fa94;
        case 0x18fa98u: goto label_18fa98;
        case 0x18fa9cu: goto label_18fa9c;
        case 0x18faa0u: goto label_18faa0;
        case 0x18faa4u: goto label_18faa4;
        case 0x18faa8u: goto label_18faa8;
        case 0x18faacu: goto label_18faac;
        case 0x18fab0u: goto label_18fab0;
        case 0x18fab4u: goto label_18fab4;
        case 0x18fab8u: goto label_18fab8;
        case 0x18fabcu: goto label_18fabc;
        case 0x18fac0u: goto label_18fac0;
        case 0x18fac4u: goto label_18fac4;
        case 0x18fac8u: goto label_18fac8;
        case 0x18faccu: goto label_18facc;
        case 0x18fad0u: goto label_18fad0;
        case 0x18fad4u: goto label_18fad4;
        case 0x18fad8u: goto label_18fad8;
        case 0x18fadcu: goto label_18fadc;
        case 0x18fae0u: goto label_18fae0;
        case 0x18fae4u: goto label_18fae4;
        case 0x18fae8u: goto label_18fae8;
        case 0x18faecu: goto label_18faec;
        case 0x18faf0u: goto label_18faf0;
        case 0x18faf4u: goto label_18faf4;
        case 0x18faf8u: goto label_18faf8;
        case 0x18fafcu: goto label_18fafc;
        case 0x18fb00u: goto label_18fb00;
        case 0x18fb04u: goto label_18fb04;
        case 0x18fb08u: goto label_18fb08;
        case 0x18fb0cu: goto label_18fb0c;
        case 0x18fb10u: goto label_18fb10;
        case 0x18fb14u: goto label_18fb14;
        case 0x18fb18u: goto label_18fb18;
        case 0x18fb1cu: goto label_18fb1c;
        case 0x18fb20u: goto label_18fb20;
        case 0x18fb24u: goto label_18fb24;
        case 0x18fb28u: goto label_18fb28;
        case 0x18fb2cu: goto label_18fb2c;
        case 0x18fb30u: goto label_18fb30;
        case 0x18fb34u: goto label_18fb34;
        case 0x18fb38u: goto label_18fb38;
        case 0x18fb3cu: goto label_18fb3c;
        case 0x18fb40u: goto label_18fb40;
        case 0x18fb44u: goto label_18fb44;
        case 0x18fb48u: goto label_18fb48;
        case 0x18fb4cu: goto label_18fb4c;
        case 0x18fb50u: goto label_18fb50;
        case 0x18fb54u: goto label_18fb54;
        case 0x18fb58u: goto label_18fb58;
        case 0x18fb5cu: goto label_18fb5c;
        case 0x18fb60u: goto label_18fb60;
        case 0x18fb64u: goto label_18fb64;
        case 0x18fb68u: goto label_18fb68;
        case 0x18fb6cu: goto label_18fb6c;
        case 0x18fb70u: goto label_18fb70;
        case 0x18fb74u: goto label_18fb74;
        case 0x18fb78u: goto label_18fb78;
        case 0x18fb7cu: goto label_18fb7c;
        case 0x18fb80u: goto label_18fb80;
        case 0x18fb84u: goto label_18fb84;
        case 0x18fb88u: goto label_18fb88;
        case 0x18fb8cu: goto label_18fb8c;
        case 0x18fb90u: goto label_18fb90;
        case 0x18fb94u: goto label_18fb94;
        case 0x18fb98u: goto label_18fb98;
        case 0x18fb9cu: goto label_18fb9c;
        case 0x18fba0u: goto label_18fba0;
        case 0x18fba4u: goto label_18fba4;
        case 0x18fba8u: goto label_18fba8;
        case 0x18fbacu: goto label_18fbac;
        case 0x18fbb0u: goto label_18fbb0;
        case 0x18fbb4u: goto label_18fbb4;
        case 0x18fbb8u: goto label_18fbb8;
        case 0x18fbbcu: goto label_18fbbc;
        case 0x18fbc0u: goto label_18fbc0;
        case 0x18fbc4u: goto label_18fbc4;
        case 0x18fbc8u: goto label_18fbc8;
        case 0x18fbccu: goto label_18fbcc;
        case 0x18fbd0u: goto label_18fbd0;
        case 0x18fbd4u: goto label_18fbd4;
        case 0x18fbd8u: goto label_18fbd8;
        case 0x18fbdcu: goto label_18fbdc;
        case 0x18fbe0u: goto label_18fbe0;
        case 0x18fbe4u: goto label_18fbe4;
        case 0x18fbe8u: goto label_18fbe8;
        case 0x18fbecu: goto label_18fbec;
        case 0x18fbf0u: goto label_18fbf0;
        case 0x18fbf4u: goto label_18fbf4;
        case 0x18fbf8u: goto label_18fbf8;
        case 0x18fbfcu: goto label_18fbfc;
        case 0x18fc00u: goto label_18fc00;
        case 0x18fc04u: goto label_18fc04;
        case 0x18fc08u: goto label_18fc08;
        case 0x18fc0cu: goto label_18fc0c;
        case 0x18fc10u: goto label_18fc10;
        case 0x18fc14u: goto label_18fc14;
        case 0x18fc18u: goto label_18fc18;
        case 0x18fc1cu: goto label_18fc1c;
        case 0x18fc20u: goto label_18fc20;
        case 0x18fc24u: goto label_18fc24;
        case 0x18fc28u: goto label_18fc28;
        case 0x18fc2cu: goto label_18fc2c;
        case 0x18fc30u: goto label_18fc30;
        case 0x18fc34u: goto label_18fc34;
        case 0x18fc38u: goto label_18fc38;
        case 0x18fc3cu: goto label_18fc3c;
        case 0x18fc40u: goto label_18fc40;
        case 0x18fc44u: goto label_18fc44;
        case 0x18fc48u: goto label_18fc48;
        case 0x18fc4cu: goto label_18fc4c;
        case 0x18fc50u: goto label_18fc50;
        case 0x18fc54u: goto label_18fc54;
        case 0x18fc58u: goto label_18fc58;
        case 0x18fc5cu: goto label_18fc5c;
        default: break;
    }

    ctx->pc = 0x18f760u;

label_18f760:
    // 0x18f760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18f760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18f764:
    // 0x18f764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18f768:
    // 0x18f768: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18f768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_18f76c:
    // 0x18f76c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18f76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18f770:
    // 0x18f770: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x18f770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_18f774:
    // 0x18f774: 0xc0ad6a8  jal         func_2B5AA0
label_18f778:
    if (ctx->pc == 0x18F778u) {
        ctx->pc = 0x18F77Cu;
        goto label_18f77c;
    }
    ctx->pc = 0x18F774u;
    SET_GPR_U32(ctx, 31, 0x18F77Cu);
    ctx->pc = 0x2B5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AA0u, 0x18F774u, 0x18F77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F77Cu;
label_18f77c:
    // 0x18f77c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x18f77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_18f780:
    // 0x18f780: 0x246340f0  addiu       $v1, $v1, 0x40F0
    ctx->pc = 0x18f780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16624));
label_18f784:
    // 0x18f784: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18f784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18f788:
    // 0x18f788: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18f788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_18f78c:
    // 0x18f78c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18f790:
    // 0x18f790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18f794:
    // 0x18f794: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18f794u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_18f798:
    // 0x18f798: 0x3e00008  jr          $ra
label_18f79c:
    if (ctx->pc == 0x18F79Cu) {
        ctx->pc = 0x18F7A0u;
        goto label_18f7a0;
    }
    ctx->pc = 0x18F798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F7A0u;
label_18f7a0:
    // 0x18f7a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18f7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18f7a4:
    // 0x18f7a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18f7a8:
    // 0x18f7a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18f7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_18f7ac:
    // 0x18f7ac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x18f7acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_18f7b0:
    // 0x18f7b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18f7b4:
    // 0x18f7b4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_18f7b8:
    if (ctx->pc == 0x18F7B8u) {
        ctx->pc = 0x18F7BCu;
        goto label_18f7bc;
    }
    ctx->pc = 0x18F7B4u;
    {
        const bool branch_taken_0x18f7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f7b4) {
            ctx->pc = 0x18F7FCu;
            goto label_18f7fc;
        }
    }
    ctx->pc = 0x18F7BCu;
label_18f7bc:
    // 0x18f7bc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x18f7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_18f7c0:
    // 0x18f7c0: 0x246340f0  addiu       $v1, $v1, 0x40F0
    ctx->pc = 0x18f7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16624));
label_18f7c4:
    // 0x18f7c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18f7c8:
    // 0x18f7c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18f7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_18f7cc:
    // 0x18f7cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18f7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18f7d0:
    // 0x18f7d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18f7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f7d4:
    // 0x18f7d4: 0xc0ad6d4  jal         func_2B5B50
label_18f7d8:
    if (ctx->pc == 0x18F7D8u) {
        ctx->pc = 0x18F7DCu;
        goto label_18f7dc;
    }
    ctx->pc = 0x18F7D4u;
    SET_GPR_U32(ctx, 31, 0x18F7DCu);
    ctx->pc = 0x2B5B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B50u, 0x18F7D4u, 0x18F7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F7DCu;
label_18f7dc:
    // 0x18f7dc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x18f7dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_18f7e0:
    // 0x18f7e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18f7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_18f7e4:
    // 0x18f7e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18f7e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_18f7e8:
    // 0x18f7e8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_18f7ec:
    if (ctx->pc == 0x18F7ECu) {
        ctx->pc = 0x18F7F0u;
        goto label_18f7f0;
    }
    ctx->pc = 0x18F7E8u;
    {
        const bool branch_taken_0x18f7e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18f7e8) {
            ctx->pc = 0x18F7FCu;
            goto label_18f7fc;
        }
    }
    ctx->pc = 0x18F7F0u;
label_18f7f0:
    // 0x18f7f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18f7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18f7f4:
    // 0x18f7f4: 0xc0ba070  jal         func_2E81C0
label_18f7f8:
    if (ctx->pc == 0x18F7F8u) {
        ctx->pc = 0x18F7FCu;
        goto label_18f7fc;
    }
    ctx->pc = 0x18F7F4u;
    SET_GPR_U32(ctx, 31, 0x18F7FCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x18F7F4u, 0x18F7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F7FCu;
label_18f7fc:
    // 0x18f7fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18f800:
    // 0x18f800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18f804:
    // 0x18f804: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18f804u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18f808:
    // 0x18f808: 0x3e00008  jr          $ra
label_18f80c:
    if (ctx->pc == 0x18F80Cu) {
        ctx->pc = 0x18F810u;
        goto label_18f810;
    }
    ctx->pc = 0x18F808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F810u;
label_18f810:
    // 0x18f810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18f810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18f814:
    // 0x18f814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18f818:
    // 0x18f818: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x18f818u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_18f81c:
    // 0x18f81c: 0x8f83bad4  lw          $v1, -0x452C($gp)
    ctx->pc = 0x18f81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18f820:
    // 0x18f820: 0x90630034  lbu         $v1, 0x34($v1)
    ctx->pc = 0x18f820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
label_18f824:
    // 0x18f824: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_18f828:
    if (ctx->pc == 0x18F828u) {
        ctx->pc = 0x18F82Cu;
        goto label_18f82c;
    }
    ctx->pc = 0x18F824u;
    {
        const bool branch_taken_0x18f824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f824) {
            ctx->pc = 0x18F844u;
            goto label_18f844;
        }
    }
    ctx->pc = 0x18F82Cu;
label_18f82c:
    // 0x18f82c: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x18f82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18f830:
    // 0x18f830: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x18f830u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_18f834:
    // 0x18f834: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18f834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18f838:
    // 0x18f838: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x18f838u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_18f83c:
    // 0x18f83c: 0x320f809  jalr        $t9
label_18f840:
    if (ctx->pc == 0x18F840u) {
        ctx->pc = 0x18F844u;
        goto label_18f844;
    }
    ctx->pc = 0x18F83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18F844u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F83Cu, 0x18F844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F844u;
label_18f844:
    // 0x18f844: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18f848:
    // 0x18f848: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18f848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18f84c:
    // 0x18f84c: 0x3e00008  jr          $ra
label_18f850:
    if (ctx->pc == 0x18F850u) {
        ctx->pc = 0x18F854u;
        goto label_18f854;
    }
    ctx->pc = 0x18F84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F854u;
label_18f854:
    // 0x18f854: 0x0  nop
    ctx->pc = 0x18f854u;
    // NOP
label_18f858:
    // 0x18f858: 0x0  nop
    ctx->pc = 0x18f858u;
    // NOP
label_18f85c:
    // 0x18f85c: 0x0  nop
    ctx->pc = 0x18f85cu;
    // NOP
label_18f860:
    // 0x18f860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18f860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18f864:
    // 0x18f864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18f868:
    // 0x18f868: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x18f868u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_18f86c:
    // 0x18f86c: 0x8f83bad4  lw          $v1, -0x452C($gp)
    ctx->pc = 0x18f86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18f870:
    // 0x18f870: 0x90630034  lbu         $v1, 0x34($v1)
    ctx->pc = 0x18f870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
label_18f874:
    // 0x18f874: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_18f878:
    if (ctx->pc == 0x18F878u) {
        ctx->pc = 0x18F87Cu;
        goto label_18f87c;
    }
    ctx->pc = 0x18F874u;
    {
        const bool branch_taken_0x18f874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f874) {
            ctx->pc = 0x18F894u;
            goto label_18f894;
        }
    }
    ctx->pc = 0x18F87Cu;
label_18f87c:
    // 0x18f87c: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x18f87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18f880:
    // 0x18f880: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x18f880u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_18f884:
    // 0x18f884: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18f884u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18f888:
    // 0x18f888: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x18f888u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_18f88c:
    // 0x18f88c: 0x320f809  jalr        $t9
label_18f890:
    if (ctx->pc == 0x18F890u) {
        ctx->pc = 0x18F894u;
        goto label_18f894;
    }
    ctx->pc = 0x18F88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18F894u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F88Cu, 0x18F894u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F894u;
label_18f894:
    // 0x18f894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18f898:
    // 0x18f898: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18f898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18f89c:
    // 0x18f89c: 0x3e00008  jr          $ra
label_18f8a0:
    if (ctx->pc == 0x18F8A0u) {
        ctx->pc = 0x18F8A4u;
        goto label_18f8a4;
    }
    ctx->pc = 0x18F89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F8A4u;
label_18f8a4:
    // 0x18f8a4: 0x0  nop
    ctx->pc = 0x18f8a4u;
    // NOP
label_18f8a8:
    // 0x18f8a8: 0x0  nop
    ctx->pc = 0x18f8a8u;
    // NOP
label_18f8ac:
    // 0x18f8ac: 0x0  nop
    ctx->pc = 0x18f8acu;
    // NOP
label_18f8b0:
    // 0x18f8b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18f8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18f8b4:
    // 0x18f8b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18f8b8:
    // 0x18f8b8: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x18f8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_18f8bc:
    // 0x18f8bc: 0x8f83bad4  lw          $v1, -0x452C($gp)
    ctx->pc = 0x18f8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18f8c0:
    // 0x18f8c0: 0x90630034  lbu         $v1, 0x34($v1)
    ctx->pc = 0x18f8c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
label_18f8c4:
    // 0x18f8c4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_18f8c8:
    if (ctx->pc == 0x18F8C8u) {
        ctx->pc = 0x18F8CCu;
        goto label_18f8cc;
    }
    ctx->pc = 0x18F8C4u;
    {
        const bool branch_taken_0x18f8c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f8c4) {
            ctx->pc = 0x18F8E4u;
            goto label_18f8e4;
        }
    }
    ctx->pc = 0x18F8CCu;
label_18f8cc:
    // 0x18f8cc: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x18f8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18f8d0:
    // 0x18f8d0: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x18f8d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_18f8d4:
    // 0x18f8d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18f8d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18f8d8:
    // 0x18f8d8: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x18f8d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_18f8dc:
    // 0x18f8dc: 0x320f809  jalr        $t9
label_18f8e0:
    if (ctx->pc == 0x18F8E0u) {
        ctx->pc = 0x18F8E4u;
        goto label_18f8e4;
    }
    ctx->pc = 0x18F8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18F8E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F8DCu, 0x18F8E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F8E4u;
label_18f8e4:
    // 0x18f8e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18f8e8:
    // 0x18f8e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18f8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18f8ec:
    // 0x18f8ec: 0x3e00008  jr          $ra
label_18f8f0:
    if (ctx->pc == 0x18F8F0u) {
        ctx->pc = 0x18F8F4u;
        goto label_18f8f4;
    }
    ctx->pc = 0x18F8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F8F4u;
label_18f8f4:
    // 0x18f8f4: 0x0  nop
    ctx->pc = 0x18f8f4u;
    // NOP
label_18f8f8:
    // 0x18f8f8: 0x0  nop
    ctx->pc = 0x18f8f8u;
    // NOP
label_18f8fc:
    // 0x18f8fc: 0x0  nop
    ctx->pc = 0x18f8fcu;
    // NOP
label_18f900:
    // 0x18f900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18f900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18f904:
    // 0x18f904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18f908:
    // 0x18f908: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x18f908u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_18f90c:
    // 0x18f90c: 0x8f83bad4  lw          $v1, -0x452C($gp)
    ctx->pc = 0x18f90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18f910:
    // 0x18f910: 0x90630034  lbu         $v1, 0x34($v1)
    ctx->pc = 0x18f910u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
label_18f914:
    // 0x18f914: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_18f918:
    if (ctx->pc == 0x18F918u) {
        ctx->pc = 0x18F91Cu;
        goto label_18f91c;
    }
    ctx->pc = 0x18F914u;
    {
        const bool branch_taken_0x18f914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f914) {
            ctx->pc = 0x18F934u;
            goto label_18f934;
        }
    }
    ctx->pc = 0x18F91Cu;
label_18f91c:
    // 0x18f91c: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x18f91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18f920:
    // 0x18f920: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x18f920u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_18f924:
    // 0x18f924: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18f924u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18f928:
    // 0x18f928: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x18f928u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_18f92c:
    // 0x18f92c: 0x320f809  jalr        $t9
label_18f930:
    if (ctx->pc == 0x18F930u) {
        ctx->pc = 0x18F934u;
        goto label_18f934;
    }
    ctx->pc = 0x18F92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18F934u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F92Cu, 0x18F934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F934u;
label_18f934:
    // 0x18f934: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18f938:
    // 0x18f938: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18f938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18f93c:
    // 0x18f93c: 0x3e00008  jr          $ra
label_18f940:
    if (ctx->pc == 0x18F940u) {
        ctx->pc = 0x18F944u;
        goto label_18f944;
    }
    ctx->pc = 0x18F93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F93Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F944u;
label_18f944:
    // 0x18f944: 0x0  nop
    ctx->pc = 0x18f944u;
    // NOP
label_18f948:
    // 0x18f948: 0x0  nop
    ctx->pc = 0x18f948u;
    // NOP
label_18f94c:
    // 0x18f94c: 0x0  nop
    ctx->pc = 0x18f94cu;
    // NOP
label_18f950:
    // 0x18f950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18f950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18f954:
    // 0x18f954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18f958:
    // 0x18f958: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x18f958u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_18f95c:
    // 0x18f95c: 0x8f83bad4  lw          $v1, -0x452C($gp)
    ctx->pc = 0x18f95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18f960:
    // 0x18f960: 0x90630034  lbu         $v1, 0x34($v1)
    ctx->pc = 0x18f960u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
label_18f964:
    // 0x18f964: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_18f968:
    if (ctx->pc == 0x18F968u) {
        ctx->pc = 0x18F96Cu;
        goto label_18f96c;
    }
    ctx->pc = 0x18F964u;
    {
        const bool branch_taken_0x18f964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f964) {
            ctx->pc = 0x18F984u;
            goto label_18f984;
        }
    }
    ctx->pc = 0x18F96Cu;
label_18f96c:
    // 0x18f96c: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x18f96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18f970:
    // 0x18f970: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x18f970u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_18f974:
    // 0x18f974: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18f974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18f978:
    // 0x18f978: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x18f978u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_18f97c:
    // 0x18f97c: 0x320f809  jalr        $t9
label_18f980:
    if (ctx->pc == 0x18F980u) {
        ctx->pc = 0x18F984u;
        goto label_18f984;
    }
    ctx->pc = 0x18F97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18F984u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F97Cu, 0x18F984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F984u;
label_18f984:
    // 0x18f984: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18f988:
    // 0x18f988: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18f988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18f98c:
    // 0x18f98c: 0x3e00008  jr          $ra
label_18f990:
    if (ctx->pc == 0x18F990u) {
        ctx->pc = 0x18F994u;
        goto label_18f994;
    }
    ctx->pc = 0x18F98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F994u;
label_18f994:
    // 0x18f994: 0x0  nop
    ctx->pc = 0x18f994u;
    // NOP
label_18f998:
    // 0x18f998: 0x0  nop
    ctx->pc = 0x18f998u;
    // NOP
label_18f99c:
    // 0x18f99c: 0x0  nop
    ctx->pc = 0x18f99cu;
    // NOP
label_18f9a0:
    // 0x18f9a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18f9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18f9a4:
    // 0x18f9a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18f9a8:
    // 0x18f9a8: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x18f9a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_18f9ac:
    // 0x18f9ac: 0x8f83bad4  lw          $v1, -0x452C($gp)
    ctx->pc = 0x18f9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18f9b0:
    // 0x18f9b0: 0x90630034  lbu         $v1, 0x34($v1)
    ctx->pc = 0x18f9b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
label_18f9b4:
    // 0x18f9b4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_18f9b8:
    if (ctx->pc == 0x18F9B8u) {
        ctx->pc = 0x18F9BCu;
        goto label_18f9bc;
    }
    ctx->pc = 0x18F9B4u;
    {
        const bool branch_taken_0x18f9b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f9b4) {
            ctx->pc = 0x18F9D4u;
            goto label_18f9d4;
        }
    }
    ctx->pc = 0x18F9BCu;
label_18f9bc:
    // 0x18f9bc: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x18f9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18f9c0:
    // 0x18f9c0: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x18f9c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_18f9c4:
    // 0x18f9c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18f9c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18f9c8:
    // 0x18f9c8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x18f9c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_18f9cc:
    // 0x18f9cc: 0x320f809  jalr        $t9
label_18f9d0:
    if (ctx->pc == 0x18F9D0u) {
        ctx->pc = 0x18F9D4u;
        goto label_18f9d4;
    }
    ctx->pc = 0x18F9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18F9D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F9CCu, 0x18F9D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F9D4u;
label_18f9d4:
    // 0x18f9d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18f9d8:
    // 0x18f9d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18f9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18f9dc:
    // 0x18f9dc: 0x3e00008  jr          $ra
label_18f9e0:
    if (ctx->pc == 0x18F9E0u) {
        ctx->pc = 0x18F9E4u;
        goto label_18f9e4;
    }
    ctx->pc = 0x18F9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F9E4u;
label_18f9e4:
    // 0x18f9e4: 0x0  nop
    ctx->pc = 0x18f9e4u;
    // NOP
label_18f9e8:
    // 0x18f9e8: 0x0  nop
    ctx->pc = 0x18f9e8u;
    // NOP
label_18f9ec:
    // 0x18f9ec: 0x0  nop
    ctx->pc = 0x18f9ecu;
    // NOP
label_18f9f0:
    // 0x18f9f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18f9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18f9f4:
    // 0x18f9f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18f9f8:
    // 0x18f9f8: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x18f9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_18f9fc:
    // 0x18f9fc: 0x8f83bad4  lw          $v1, -0x452C($gp)
    ctx->pc = 0x18f9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18fa00:
    // 0x18fa00: 0x90630034  lbu         $v1, 0x34($v1)
    ctx->pc = 0x18fa00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
label_18fa04:
    // 0x18fa04: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_18fa08:
    if (ctx->pc == 0x18FA08u) {
        ctx->pc = 0x18FA0Cu;
        goto label_18fa0c;
    }
    ctx->pc = 0x18FA04u;
    {
        const bool branch_taken_0x18fa04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fa04) {
            ctx->pc = 0x18FA24u;
            goto label_18fa24;
        }
    }
    ctx->pc = 0x18FA0Cu;
label_18fa0c:
    // 0x18fa0c: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x18fa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18fa10:
    // 0x18fa10: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x18fa10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_18fa14:
    // 0x18fa14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18fa14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18fa18:
    // 0x18fa18: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x18fa18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_18fa1c:
    // 0x18fa1c: 0x320f809  jalr        $t9
label_18fa20:
    if (ctx->pc == 0x18FA20u) {
        ctx->pc = 0x18FA24u;
        goto label_18fa24;
    }
    ctx->pc = 0x18FA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18FA24u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FA1Cu, 0x18FA24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FA24u;
label_18fa24:
    // 0x18fa24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18fa24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18fa28:
    // 0x18fa28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18fa28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18fa2c:
    // 0x18fa2c: 0x3e00008  jr          $ra
label_18fa30:
    if (ctx->pc == 0x18FA30u) {
        ctx->pc = 0x18FA34u;
        goto label_18fa34;
    }
    ctx->pc = 0x18FA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FA2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FA34u;
label_18fa34:
    // 0x18fa34: 0x0  nop
    ctx->pc = 0x18fa34u;
    // NOP
label_18fa38:
    // 0x18fa38: 0x0  nop
    ctx->pc = 0x18fa38u;
    // NOP
label_18fa3c:
    // 0x18fa3c: 0x0  nop
    ctx->pc = 0x18fa3cu;
    // NOP
label_18fa40:
    // 0x18fa40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18fa40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18fa44:
    // 0x18fa44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18fa44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18fa48:
    // 0x18fa48: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x18fa48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_18fa4c:
    // 0x18fa4c: 0x8f83bad4  lw          $v1, -0x452C($gp)
    ctx->pc = 0x18fa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18fa50:
    // 0x18fa50: 0x90630034  lbu         $v1, 0x34($v1)
    ctx->pc = 0x18fa50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
label_18fa54:
    // 0x18fa54: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_18fa58:
    if (ctx->pc == 0x18FA58u) {
        ctx->pc = 0x18FA5Cu;
        goto label_18fa5c;
    }
    ctx->pc = 0x18FA54u;
    {
        const bool branch_taken_0x18fa54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fa54) {
            ctx->pc = 0x18FA74u;
            goto label_18fa74;
        }
    }
    ctx->pc = 0x18FA5Cu;
label_18fa5c:
    // 0x18fa5c: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x18fa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18fa60:
    // 0x18fa60: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x18fa60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_18fa64:
    // 0x18fa64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18fa64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18fa68:
    // 0x18fa68: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x18fa68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_18fa6c:
    // 0x18fa6c: 0x320f809  jalr        $t9
label_18fa70:
    if (ctx->pc == 0x18FA70u) {
        ctx->pc = 0x18FA74u;
        goto label_18fa74;
    }
    ctx->pc = 0x18FA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18FA74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FA6Cu, 0x18FA74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FA74u;
label_18fa74:
    // 0x18fa74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18fa74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18fa78:
    // 0x18fa78: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18fa78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18fa7c:
    // 0x18fa7c: 0x3e00008  jr          $ra
label_18fa80:
    if (ctx->pc == 0x18FA80u) {
        ctx->pc = 0x18FA84u;
        goto label_18fa84;
    }
    ctx->pc = 0x18FA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FA84u;
label_18fa84:
    // 0x18fa84: 0x0  nop
    ctx->pc = 0x18fa84u;
    // NOP
label_18fa88:
    // 0x18fa88: 0x0  nop
    ctx->pc = 0x18fa88u;
    // NOP
label_18fa8c:
    // 0x18fa8c: 0x0  nop
    ctx->pc = 0x18fa8cu;
    // NOP
label_18fa90:
    // 0x18fa90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18fa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18fa94:
    // 0x18fa94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18fa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18fa98:
    // 0x18fa98: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x18fa98u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_18fa9c:
    // 0x18fa9c: 0x8f83bad4  lw          $v1, -0x452C($gp)
    ctx->pc = 0x18fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18faa0:
    // 0x18faa0: 0x90630034  lbu         $v1, 0x34($v1)
    ctx->pc = 0x18faa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
label_18faa4:
    // 0x18faa4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_18faa8:
    if (ctx->pc == 0x18FAA8u) {
        ctx->pc = 0x18FAACu;
        goto label_18faac;
    }
    ctx->pc = 0x18FAA4u;
    {
        const bool branch_taken_0x18faa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18faa4) {
            ctx->pc = 0x18FAC4u;
            goto label_18fac4;
        }
    }
    ctx->pc = 0x18FAACu;
label_18faac:
    // 0x18faac: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x18faacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18fab0:
    // 0x18fab0: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x18fab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18fab4:
    // 0x18fab4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18fab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18fab8:
    // 0x18fab8: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x18fab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_18fabc:
    // 0x18fabc: 0x320f809  jalr        $t9
label_18fac0:
    if (ctx->pc == 0x18FAC0u) {
        ctx->pc = 0x18FAC4u;
        goto label_18fac4;
    }
    ctx->pc = 0x18FABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18FAC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FABCu, 0x18FAC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FAC4u;
label_18fac4:
    // 0x18fac4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18fac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18fac8:
    // 0x18fac8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18fac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18facc:
    // 0x18facc: 0x3e00008  jr          $ra
label_18fad0:
    if (ctx->pc == 0x18FAD0u) {
        ctx->pc = 0x18FAD4u;
        goto label_18fad4;
    }
    ctx->pc = 0x18FACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FAD4u;
label_18fad4:
    // 0x18fad4: 0x0  nop
    ctx->pc = 0x18fad4u;
    // NOP
label_18fad8:
    // 0x18fad8: 0x0  nop
    ctx->pc = 0x18fad8u;
    // NOP
label_18fadc:
    // 0x18fadc: 0x0  nop
    ctx->pc = 0x18fadcu;
    // NOP
label_18fae0:
    // 0x18fae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18fae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18fae4:
    // 0x18fae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18fae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18fae8:
    // 0x18fae8: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x18fae8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_18faec:
    // 0x18faec: 0x8f83bad4  lw          $v1, -0x452C($gp)
    ctx->pc = 0x18faecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18faf0:
    // 0x18faf0: 0x90630034  lbu         $v1, 0x34($v1)
    ctx->pc = 0x18faf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
label_18faf4:
    // 0x18faf4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_18faf8:
    if (ctx->pc == 0x18FAF8u) {
        ctx->pc = 0x18FAFCu;
        goto label_18fafc;
    }
    ctx->pc = 0x18FAF4u;
    {
        const bool branch_taken_0x18faf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18faf4) {
            ctx->pc = 0x18FB14u;
            goto label_18fb14;
        }
    }
    ctx->pc = 0x18FAFCu;
label_18fafc:
    // 0x18fafc: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x18fafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18fb00:
    // 0x18fb00: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x18fb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18fb04:
    // 0x18fb04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18fb04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18fb08:
    // 0x18fb08: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x18fb08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_18fb0c:
    // 0x18fb0c: 0x320f809  jalr        $t9
label_18fb10:
    if (ctx->pc == 0x18FB10u) {
        ctx->pc = 0x18FB14u;
        goto label_18fb14;
    }
    ctx->pc = 0x18FB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18FB14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FB0Cu, 0x18FB14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FB14u;
label_18fb14:
    // 0x18fb14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18fb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18fb18:
    // 0x18fb18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18fb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18fb1c:
    // 0x18fb1c: 0x3e00008  jr          $ra
label_18fb20:
    if (ctx->pc == 0x18FB20u) {
        ctx->pc = 0x18FB24u;
        goto label_18fb24;
    }
    ctx->pc = 0x18FB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FB24u;
label_18fb24:
    // 0x18fb24: 0x0  nop
    ctx->pc = 0x18fb24u;
    // NOP
label_18fb28:
    // 0x18fb28: 0x0  nop
    ctx->pc = 0x18fb28u;
    // NOP
label_18fb2c:
    // 0x18fb2c: 0x0  nop
    ctx->pc = 0x18fb2cu;
    // NOP
label_18fb30:
    // 0x18fb30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18fb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18fb34:
    // 0x18fb34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18fb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18fb38:
    // 0x18fb38: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x18fb38u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_18fb3c:
    // 0x18fb3c: 0x8f83bad4  lw          $v1, -0x452C($gp)
    ctx->pc = 0x18fb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18fb40:
    // 0x18fb40: 0x90630034  lbu         $v1, 0x34($v1)
    ctx->pc = 0x18fb40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
label_18fb44:
    // 0x18fb44: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_18fb48:
    if (ctx->pc == 0x18FB48u) {
        ctx->pc = 0x18FB4Cu;
        goto label_18fb4c;
    }
    ctx->pc = 0x18FB44u;
    {
        const bool branch_taken_0x18fb44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fb44) {
            ctx->pc = 0x18FB64u;
            goto label_18fb64;
        }
    }
    ctx->pc = 0x18FB4Cu;
label_18fb4c:
    // 0x18fb4c: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x18fb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18fb50:
    // 0x18fb50: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x18fb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18fb54:
    // 0x18fb54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18fb54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18fb58:
    // 0x18fb58: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x18fb58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_18fb5c:
    // 0x18fb5c: 0x320f809  jalr        $t9
label_18fb60:
    if (ctx->pc == 0x18FB60u) {
        ctx->pc = 0x18FB64u;
        goto label_18fb64;
    }
    ctx->pc = 0x18FB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18FB64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FB5Cu, 0x18FB64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FB64u;
label_18fb64:
    // 0x18fb64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18fb64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18fb68:
    // 0x18fb68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18fb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18fb6c:
    // 0x18fb6c: 0x3e00008  jr          $ra
label_18fb70:
    if (ctx->pc == 0x18FB70u) {
        ctx->pc = 0x18FB74u;
        goto label_18fb74;
    }
    ctx->pc = 0x18FB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FB74u;
label_18fb74:
    // 0x18fb74: 0x0  nop
    ctx->pc = 0x18fb74u;
    // NOP
label_18fb78:
    // 0x18fb78: 0x0  nop
    ctx->pc = 0x18fb78u;
    // NOP
label_18fb7c:
    // 0x18fb7c: 0x0  nop
    ctx->pc = 0x18fb7cu;
    // NOP
label_18fb80:
    // 0x18fb80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18fb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18fb84:
    // 0x18fb84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18fb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18fb88:
    // 0x18fb88: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x18fb88u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_18fb8c:
    // 0x18fb8c: 0x8f83bad4  lw          $v1, -0x452C($gp)
    ctx->pc = 0x18fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18fb90:
    // 0x18fb90: 0x90630034  lbu         $v1, 0x34($v1)
    ctx->pc = 0x18fb90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
label_18fb94:
    // 0x18fb94: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_18fb98:
    if (ctx->pc == 0x18FB98u) {
        ctx->pc = 0x18FB9Cu;
        goto label_18fb9c;
    }
    ctx->pc = 0x18FB94u;
    {
        const bool branch_taken_0x18fb94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fb94) {
            ctx->pc = 0x18FBB4u;
            goto label_18fbb4;
        }
    }
    ctx->pc = 0x18FB9Cu;
label_18fb9c:
    // 0x18fb9c: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x18fb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18fba0:
    // 0x18fba0: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x18fba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18fba4:
    // 0x18fba4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18fba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18fba8:
    // 0x18fba8: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x18fba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_18fbac:
    // 0x18fbac: 0x320f809  jalr        $t9
label_18fbb0:
    if (ctx->pc == 0x18FBB0u) {
        ctx->pc = 0x18FBB4u;
        goto label_18fbb4;
    }
    ctx->pc = 0x18FBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18FBB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FBACu, 0x18FBB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FBB4u;
label_18fbb4:
    // 0x18fbb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18fbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18fbb8:
    // 0x18fbb8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18fbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18fbbc:
    // 0x18fbbc: 0x3e00008  jr          $ra
label_18fbc0:
    if (ctx->pc == 0x18FBC0u) {
        ctx->pc = 0x18FBC4u;
        goto label_18fbc4;
    }
    ctx->pc = 0x18FBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FBC4u;
label_18fbc4:
    // 0x18fbc4: 0x0  nop
    ctx->pc = 0x18fbc4u;
    // NOP
label_18fbc8:
    // 0x18fbc8: 0x0  nop
    ctx->pc = 0x18fbc8u;
    // NOP
label_18fbcc:
    // 0x18fbcc: 0x0  nop
    ctx->pc = 0x18fbccu;
    // NOP
label_18fbd0:
    // 0x18fbd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18fbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18fbd4:
    // 0x18fbd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18fbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18fbd8:
    // 0x18fbd8: 0x8f82bad4  lw          $v0, -0x452C($gp)
    ctx->pc = 0x18fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18fbdc:
    // 0x18fbdc: 0x10020007  beq         $zero, $v0, . + 4 + (0x7 << 2)
label_18fbe0:
    if (ctx->pc == 0x18FBE0u) {
        ctx->pc = 0x18FBE4u;
        goto label_18fbe4;
    }
    ctx->pc = 0x18FBDCu;
    {
        const bool branch_taken_0x18fbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x18fbdc) {
            ctx->pc = 0x18FBFCu;
            goto label_18fbfc;
        }
    }
    ctx->pc = 0x18FBE4u;
label_18fbe4:
    // 0x18fbe4: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x18fbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18fbe8:
    // 0x18fbe8: 0x8f85bca0  lw          $a1, -0x4360($gp)
    ctx->pc = 0x18fbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950048)));
label_18fbec:
    // 0x18fbec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18fbecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18fbf0:
    // 0x18fbf0: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x18fbf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_18fbf4:
    // 0x18fbf4: 0x320f809  jalr        $t9
label_18fbf8:
    if (ctx->pc == 0x18FBF8u) {
        ctx->pc = 0x18FBFCu;
        goto label_18fbfc;
    }
    ctx->pc = 0x18FBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18FBFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FBF4u, 0x18FBFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FBFCu;
label_18fbfc:
    // 0x18fbfc: 0x8f82bca0  lw          $v0, -0x4360($gp)
    ctx->pc = 0x18fbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950048)));
label_18fc00:
    // 0x18fc00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18fc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18fc04:
    // 0x18fc04: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18fc04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_18fc08:
    // 0x18fc08: 0x3e00008  jr          $ra
label_18fc0c:
    if (ctx->pc == 0x18FC0Cu) {
        ctx->pc = 0x18FC10u;
        goto label_18fc10;
    }
    ctx->pc = 0x18FC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FC10u;
label_18fc10:
    // 0x18fc10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18fc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18fc14:
    // 0x18fc14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18fc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18fc18:
    // 0x18fc18: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x18fc18u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_18fc1c:
    // 0x18fc1c: 0x8f83bad4  lw          $v1, -0x452C($gp)
    ctx->pc = 0x18fc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18fc20:
    // 0x18fc20: 0x90630034  lbu         $v1, 0x34($v1)
    ctx->pc = 0x18fc20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
label_18fc24:
    // 0x18fc24: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_18fc28:
    if (ctx->pc == 0x18FC28u) {
        ctx->pc = 0x18FC2Cu;
        goto label_18fc2c;
    }
    ctx->pc = 0x18FC24u;
    {
        const bool branch_taken_0x18fc24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fc24) {
            ctx->pc = 0x18FC44u;
            goto label_18fc44;
        }
    }
    ctx->pc = 0x18FC2Cu;
label_18fc2c:
    // 0x18fc2c: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x18fc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_18fc30:
    // 0x18fc30: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x18fc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18fc34:
    // 0x18fc34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18fc34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18fc38:
    // 0x18fc38: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x18fc38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_18fc3c:
    // 0x18fc3c: 0x320f809  jalr        $t9
label_18fc40:
    if (ctx->pc == 0x18FC40u) {
        ctx->pc = 0x18FC44u;
        goto label_18fc44;
    }
    ctx->pc = 0x18FC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18FC44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FC3Cu, 0x18FC44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FC44u;
label_18fc44:
    // 0x18fc44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18fc44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18fc48:
    // 0x18fc48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18fc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18fc4c:
    // 0x18fc4c: 0x3e00008  jr          $ra
label_18fc50:
    if (ctx->pc == 0x18FC50u) {
        ctx->pc = 0x18FC54u;
        goto label_18fc54;
    }
    ctx->pc = 0x18FC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FC54u;
label_18fc54:
    // 0x18fc54: 0x0  nop
    ctx->pc = 0x18fc54u;
    // NOP
label_18fc58:
    // 0x18fc58: 0x0  nop
    ctx->pc = 0x18fc58u;
    // NOP
label_18fc5c:
    // 0x18fc5c: 0x0  nop
    ctx->pc = 0x18fc5cu;
    // NOP
    ctx->pc = 0x18fc60u;
}
