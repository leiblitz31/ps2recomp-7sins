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

// Function: sub_00195C90
// Address: 0x195c90 - 0x196da0
void sub_00195C90_0x195c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195C90_0x195c90");
#endif

    switch (ctx->pc) {
        case 0x195cc4u: goto label_195cc4;
        case 0x195ce0u: goto label_195ce0;
        case 0x195cfcu: goto label_195cfc;
        case 0x195d1cu: goto label_195d1c;
        case 0x195d38u: goto label_195d38;
        case 0x195d58u: goto label_195d58;
        case 0x195d74u: goto label_195d74;
        case 0x195d94u: goto label_195d94;
        case 0x195db0u: goto label_195db0;
        case 0x195dccu: goto label_195dcc;
        case 0x195de8u: goto label_195de8;
        case 0x195e04u: goto label_195e04;
        case 0x195e20u: goto label_195e20;
        case 0x195e3cu: goto label_195e3c;
        case 0x195e58u: goto label_195e58;
        case 0x195e74u: goto label_195e74;
        case 0x195e90u: goto label_195e90;
        case 0x195ea8u: goto label_195ea8;
        case 0x195ec4u: goto label_195ec4;
        case 0x195ee0u: goto label_195ee0;
        case 0x195ef8u: goto label_195ef8;
        case 0x195f14u: goto label_195f14;
        case 0x195f2cu: goto label_195f2c;
        case 0x195f44u: goto label_195f44;
        case 0x195f5cu: goto label_195f5c;
        case 0x195f78u: goto label_195f78;
        case 0x195f90u: goto label_195f90;
        case 0x195facu: goto label_195fac;
        case 0x195fc4u: goto label_195fc4;
        case 0x195fe0u: goto label_195fe0;
        case 0x195ff8u: goto label_195ff8;
        case 0x196014u: goto label_196014;
        case 0x19602cu: goto label_19602c;
        case 0x196048u: goto label_196048;
        case 0x196064u: goto label_196064;
        case 0x196084u: goto label_196084;
        case 0x1960a0u: goto label_1960a0;
        case 0x1960c0u: goto label_1960c0;
        case 0x1960d8u: goto label_1960d8;
        case 0x1960f4u: goto label_1960f4;
        case 0x19610cu: goto label_19610c;
        case 0x196130u: goto label_196130;
        case 0x19614cu: goto label_19614c;
        case 0x196168u: goto label_196168;
        case 0x196184u: goto label_196184;
        case 0x1961a0u: goto label_1961a0;
        case 0x1961bcu: goto label_1961bc;
        case 0x1961d8u: goto label_1961d8;
        case 0x1961f4u: goto label_1961f4;
        case 0x196210u: goto label_196210;
        case 0x19622cu: goto label_19622c;
        case 0x196248u: goto label_196248;
        case 0x196264u: goto label_196264;
        case 0x196280u: goto label_196280;
        case 0x19629cu: goto label_19629c;
        case 0x1962b8u: goto label_1962b8;
        case 0x1962d4u: goto label_1962d4;
        case 0x1962f4u: goto label_1962f4;
        case 0x19630cu: goto label_19630c;
        case 0x196334u: goto label_196334;
        case 0x196354u: goto label_196354;
        case 0x196378u: goto label_196378;
        case 0x196398u: goto label_196398;
        case 0x1963bcu: goto label_1963bc;
        case 0x1963dcu: goto label_1963dc;
        case 0x196400u: goto label_196400;
        case 0x196420u: goto label_196420;
        case 0x196444u: goto label_196444;
        case 0x196464u: goto label_196464;
        case 0x196488u: goto label_196488;
        case 0x1964a8u: goto label_1964a8;
        case 0x1964ccu: goto label_1964cc;
        case 0x1964ecu: goto label_1964ec;
        case 0x196510u: goto label_196510;
        case 0x196530u: goto label_196530;
        case 0x196554u: goto label_196554;
        case 0x196574u: goto label_196574;
        case 0x196598u: goto label_196598;
        case 0x1965b8u: goto label_1965b8;
        case 0x1965dcu: goto label_1965dc;
        case 0x1965fcu: goto label_1965fc;
        case 0x196620u: goto label_196620;
        case 0x196640u: goto label_196640;
        case 0x196664u: goto label_196664;
        case 0x196684u: goto label_196684;
        case 0x1966a8u: goto label_1966a8;
        case 0x1966c8u: goto label_1966c8;
        case 0x1966ecu: goto label_1966ec;
        case 0x19670cu: goto label_19670c;
        case 0x196730u: goto label_196730;
        case 0x196750u: goto label_196750;
        case 0x196760u: goto label_196760;
        case 0x196778u: goto label_196778;
        case 0x196794u: goto label_196794;
        case 0x1967a0u: goto label_1967a0;
        case 0x1967b8u: goto label_1967b8;
        case 0x1967d4u: goto label_1967d4;
        case 0x1967e8u: goto label_1967e8;
        case 0x1967f8u: goto label_1967f8;
        case 0x19680cu: goto label_19680c;
        case 0x196824u: goto label_196824;
        case 0x19683cu: goto label_19683c;
        case 0x19684cu: goto label_19684c;
        case 0x196868u: goto label_196868;
        case 0x196880u: goto label_196880;
        case 0x196890u: goto label_196890;
        case 0x1968acu: goto label_1968ac;
        case 0x1968c4u: goto label_1968c4;
        case 0x1968d4u: goto label_1968d4;
        case 0x1968f0u: goto label_1968f0;
        case 0x196908u: goto label_196908;
        case 0x196918u: goto label_196918;
        case 0x196934u: goto label_196934;
        case 0x19694cu: goto label_19694c;
        case 0x19695cu: goto label_19695c;
        case 0x196978u: goto label_196978;
        case 0x196990u: goto label_196990;
        case 0x1969a0u: goto label_1969a0;
        case 0x1969bcu: goto label_1969bc;
        case 0x1969d4u: goto label_1969d4;
        case 0x1969e4u: goto label_1969e4;
        case 0x196a00u: goto label_196a00;
        case 0x196a18u: goto label_196a18;
        case 0x196a28u: goto label_196a28;
        case 0x196a44u: goto label_196a44;
        case 0x196a58u: goto label_196a58;
        case 0x196a64u: goto label_196a64;
        case 0x196a80u: goto label_196a80;
        case 0x196a98u: goto label_196a98;
        case 0x196aa8u: goto label_196aa8;
        case 0x196ac4u: goto label_196ac4;
        case 0x196ae0u: goto label_196ae0;
        case 0x196aecu: goto label_196aec;
        case 0x196b08u: goto label_196b08;
        case 0x196b24u: goto label_196b24;
        case 0x196b30u: goto label_196b30;
        case 0x196b4cu: goto label_196b4c;
        case 0x196b68u: goto label_196b68;
        case 0x196b74u: goto label_196b74;
        case 0x196b90u: goto label_196b90;
        case 0x196ba8u: goto label_196ba8;
        case 0x196bbcu: goto label_196bbc;
        case 0x196bdcu: goto label_196bdc;
        case 0x196bf4u: goto label_196bf4;
        case 0x196c08u: goto label_196c08;
        case 0x196c28u: goto label_196c28;
        case 0x196c40u: goto label_196c40;
        case 0x196c54u: goto label_196c54;
        case 0x196c74u: goto label_196c74;
        case 0x196c8cu: goto label_196c8c;
        case 0x196ca0u: goto label_196ca0;
        case 0x196cc0u: goto label_196cc0;
        case 0x196cd8u: goto label_196cd8;
        case 0x196cecu: goto label_196cec;
        case 0x196cf8u: goto label_196cf8;
        case 0x196d14u: goto label_196d14;
        case 0x196d2cu: goto label_196d2c;
        case 0x196d5cu: goto label_196d5c;
        case 0x196d80u: goto label_196d80;
        default: break;
    }

    ctx->pc = 0x195c90u;

    // 0x195c90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x195c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x195c94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x195c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x195c98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x195c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x195c9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x195c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x195ca0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x195ca4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x195ca8: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x195ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x195cac: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x195cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195cb0: 0x249100a4  addiu       $s1, $a0, 0xA4
    ctx->pc = 0x195cb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x195cb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195cb8: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x195cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x195cbc: 0xc056708  jal         func_159C20
    ctx->pc = 0x195CBCu;
    SET_GPR_U32(ctx, 31, 0x195CC4u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x195CBCu, 0x195CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195CC4u;
label_195cc4:
    // 0x195cc4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x195cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195cc8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x195cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195ccc: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x195cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x195cd0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x195cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x195cd4: 0x24a55cd0  addiu       $a1, $a1, 0x5CD0
    ctx->pc = 0x195cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23760));
    // 0x195cd8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x195CD8u;
    SET_GPR_U32(ctx, 31, 0x195CE0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x195CD8u, 0x195CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195CE0u;
label_195ce0:
    // 0x195ce0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x195ce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195ce4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x195ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195ce8: 0x249300a4  addiu       $s3, $a0, 0xA4
    ctx->pc = 0x195ce8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x195cec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x195cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195cf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195cf4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x195CF4u;
    SET_GPR_U32(ctx, 31, 0x195CFCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x195CF4u, 0x195CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195CFCu;
label_195cfc:
    // 0x195cfc: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x195cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x195d00: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x195d00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195d04: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x195d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x195d08: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x195d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195d0c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x195d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x195d10: 0x24a55ce0  addiu       $a1, $a1, 0x5CE0
    ctx->pc = 0x195d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23776));
    // 0x195d14: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x195D14u;
    SET_GPR_U32(ctx, 31, 0x195D1Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x195D14u, 0x195D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195D1Cu;
label_195d1c:
    // 0x195d1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x195d1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195d20: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x195d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195d24: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x195d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x195d28: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x195d28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195d2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x195d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195d30: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x195D30u;
    SET_GPR_U32(ctx, 31, 0x195D38u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x195D30u, 0x195D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195D38u;
label_195d38:
    // 0x195d38: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x195d38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x195d3c: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x195d3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195d40: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x195d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x195d44: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x195d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195d48: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x195d48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x195d4c: 0x24a55cf8  addiu       $a1, $a1, 0x5CF8
    ctx->pc = 0x195d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23800));
    // 0x195d50: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x195D50u;
    SET_GPR_U32(ctx, 31, 0x195D58u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x195D50u, 0x195D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195D58u;
label_195d58:
    // 0x195d58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x195d58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195d5c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x195d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195d60: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x195d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x195d64: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x195d64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x195d68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x195d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195d6c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x195D6Cu;
    SET_GPR_U32(ctx, 31, 0x195D74u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x195D6Cu, 0x195D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195D74u;
label_195d74:
    // 0x195d74: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x195d74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x195d78: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x195d78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195d7c: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x195d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x195d80: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x195d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195d84: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x195d84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x195d88: 0x24a55d08  addiu       $a1, $a1, 0x5D08
    ctx->pc = 0x195d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23816));
    // 0x195d8c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x195D8Cu;
    SET_GPR_U32(ctx, 31, 0x195D94u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x195D8Cu, 0x195D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195D94u;
label_195d94:
    // 0x195d94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x195d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195d98: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x195d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195d9c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x195d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x195da0: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x195da0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x195da4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x195da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195da8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x195DA8u;
    SET_GPR_U32(ctx, 31, 0x195DB0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x195DA8u, 0x195DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195DB0u;
label_195db0:
    // 0x195db0: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x195db0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x195db4: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x195db4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195db8: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x195db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x195dbc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x195dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x195dc0: 0x24a55d20  addiu       $a1, $a1, 0x5D20
    ctx->pc = 0x195dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23840));
    // 0x195dc4: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x195DC4u;
    SET_GPR_U32(ctx, 31, 0x195DCCu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x195DC4u, 0x195DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195DCCu;
label_195dcc:
    // 0x195dcc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x195dccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195dd0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x195dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195dd4: 0x245100a4  addiu       $s1, $v0, 0xA4
    ctx->pc = 0x195dd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x195dd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195ddc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x195ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x195de0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x195DE0u;
    SET_GPR_U32(ctx, 31, 0x195DE8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x195DE0u, 0x195DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195DE8u;
label_195de8:
    // 0x195de8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x195de8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x195dec: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x195decu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195df0: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x195df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x195df4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x195df4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x195df8: 0x24a55d38  addiu       $a1, $a1, 0x5D38
    ctx->pc = 0x195df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23864));
    // 0x195dfc: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x195DFCu;
    SET_GPR_U32(ctx, 31, 0x195E04u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x195DFCu, 0x195E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195E04u;
label_195e04:
    // 0x195e04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x195e04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e08: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x195e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195e0c: 0x245200a4  addiu       $s2, $v0, 0xA4
    ctx->pc = 0x195e0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x195e10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x195e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e14: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x195e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x195e18: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x195E18u;
    SET_GPR_U32(ctx, 31, 0x195E20u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x195E18u, 0x195E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195E20u;
label_195e20:
    // 0x195e20: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x195e20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x195e24: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x195e24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195e28: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x195e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x195e2c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x195e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x195e30: 0x24a55d48  addiu       $a1, $a1, 0x5D48
    ctx->pc = 0x195e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23880));
    // 0x195e34: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x195E34u;
    SET_GPR_U32(ctx, 31, 0x195E3Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x195E34u, 0x195E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195E3Cu;
label_195e3c:
    // 0x195e3c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x195e3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e40: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x195e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195e44: 0x245100a4  addiu       $s1, $v0, 0xA4
    ctx->pc = 0x195e44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x195e48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e4c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x195e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x195e50: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x195E50u;
    SET_GPR_U32(ctx, 31, 0x195E58u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x195E50u, 0x195E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195E58u;
label_195e58:
    // 0x195e58: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x195e58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x195e5c: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x195e5cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195e60: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x195e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x195e64: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x195e64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x195e68: 0x24a55d58  addiu       $a1, $a1, 0x5D58
    ctx->pc = 0x195e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23896));
    // 0x195e6c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x195E6Cu;
    SET_GPR_U32(ctx, 31, 0x195E74u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x195E6Cu, 0x195E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195E74u;
label_195e74:
    // 0x195e74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x195e74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e78: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x195e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195e7c: 0x245200a4  addiu       $s2, $v0, 0xA4
    ctx->pc = 0x195e7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x195e80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x195e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e84: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x195e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x195e88: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x195E88u;
    SET_GPR_U32(ctx, 31, 0x195E90u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x195E88u, 0x195E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195E90u;
label_195e90:
    // 0x195e90: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x195e90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x195e94: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x195e94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195e98: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x195e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x195e9c: 0x278592a0  addiu       $a1, $gp, -0x6D60
    ctx->pc = 0x195e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939296));
    // 0x195ea0: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x195EA0u;
    SET_GPR_U32(ctx, 31, 0x195EA8u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x195EA0u, 0x195EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195EA8u;
label_195ea8:
    // 0x195ea8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x195ea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195eac: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x195eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195eb0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x195eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x195eb4: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x195eb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x195eb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x195eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195ebc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x195EBCu;
    SET_GPR_U32(ctx, 31, 0x195EC4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x195EBCu, 0x195EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195EC4u;
label_195ec4:
    // 0x195ec4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x195ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x195ec8: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x195ec8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195ecc: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x195eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x195ed0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x195ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x195ed4: 0x24a55d68  addiu       $a1, $a1, 0x5D68
    ctx->pc = 0x195ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23912));
    // 0x195ed8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x195ED8u;
    SET_GPR_U32(ctx, 31, 0x195EE0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x195ED8u, 0x195EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195EE0u;
label_195ee0:
    // 0x195ee0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x195ee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195ee4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x195ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195ee8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x195ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x195eec: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x195eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x195ef0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x195EF0u;
    SET_GPR_U32(ctx, 31, 0x195EF8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x195EF0u, 0x195EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195EF8u;
label_195ef8:
    // 0x195ef8: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x195ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x195efc: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x195efcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195f00: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x195f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x195f04: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x195f04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x195f08: 0x24a55d78  addiu       $a1, $a1, 0x5D78
    ctx->pc = 0x195f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23928));
    // 0x195f0c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x195F0Cu;
    SET_GPR_U32(ctx, 31, 0x195F14u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x195F0Cu, 0x195F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195F14u;
label_195f14:
    // 0x195f14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x195f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f18: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x195f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195f1c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x195f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x195f20: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x195f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x195f24: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x195F24u;
    SET_GPR_U32(ctx, 31, 0x195F2Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x195F24u, 0x195F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195F2Cu;
label_195f2c:
    // 0x195f2c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x195f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x195f30: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x195f30u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195f34: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x195f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x195f38: 0x278592a8  addiu       $a1, $gp, -0x6D58
    ctx->pc = 0x195f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939304));
    // 0x195f3c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x195F3Cu;
    SET_GPR_U32(ctx, 31, 0x195F44u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x195F3Cu, 0x195F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195F44u;
label_195f44:
    // 0x195f44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x195f44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f48: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x195f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195f4c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x195f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x195f50: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x195f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x195f54: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x195F54u;
    SET_GPR_U32(ctx, 31, 0x195F5Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x195F54u, 0x195F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195F5Cu;
label_195f5c:
    // 0x195f5c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x195f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x195f60: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x195f60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195f64: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x195f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x195f68: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x195f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x195f6c: 0x24a55d88  addiu       $a1, $a1, 0x5D88
    ctx->pc = 0x195f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23944));
    // 0x195f70: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x195F70u;
    SET_GPR_U32(ctx, 31, 0x195F78u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x195F70u, 0x195F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195F78u;
label_195f78:
    // 0x195f78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x195f78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f7c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x195f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195f80: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x195f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x195f84: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x195f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x195f88: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x195F88u;
    SET_GPR_U32(ctx, 31, 0x195F90u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x195F88u, 0x195F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195F90u;
label_195f90:
    // 0x195f90: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x195f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x195f94: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x195f94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195f98: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x195f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x195f9c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x195f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x195fa0: 0x24a55d98  addiu       $a1, $a1, 0x5D98
    ctx->pc = 0x195fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23960));
    // 0x195fa4: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x195FA4u;
    SET_GPR_U32(ctx, 31, 0x195FACu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x195FA4u, 0x195FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195FACu;
label_195fac:
    // 0x195fac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x195facu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195fb0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x195fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195fb4: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x195fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x195fb8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x195fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x195fbc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x195FBCu;
    SET_GPR_U32(ctx, 31, 0x195FC4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x195FBCu, 0x195FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195FC4u;
label_195fc4:
    // 0x195fc4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x195fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x195fc8: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x195fc8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195fcc: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x195fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x195fd0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x195fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x195fd4: 0x24a55da8  addiu       $a1, $a1, 0x5DA8
    ctx->pc = 0x195fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23976));
    // 0x195fd8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x195FD8u;
    SET_GPR_U32(ctx, 31, 0x195FE0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x195FD8u, 0x195FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195FE0u;
label_195fe0:
    // 0x195fe0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x195fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195fe4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x195fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195fe8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x195fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x195fec: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x195fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x195ff0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x195FF0u;
    SET_GPR_U32(ctx, 31, 0x195FF8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x195FF0u, 0x195FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195FF8u;
label_195ff8:
    // 0x195ff8: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x195ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x195ffc: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x195ffcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196000: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x196000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x196004: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x196004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x196008: 0x24a55db8  addiu       $a1, $a1, 0x5DB8
    ctx->pc = 0x196008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23992));
    // 0x19600c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x19600Cu;
    SET_GPR_U32(ctx, 31, 0x196014u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x19600Cu, 0x196014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196014u;
label_196014:
    // 0x196014: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x196014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196018: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x196018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19601c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19601cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x196020: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x196020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x196024: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196024u;
    SET_GPR_U32(ctx, 31, 0x19602Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196024u, 0x19602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19602Cu;
label_19602c:
    // 0x19602c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x19602cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x196030: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x196030u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196034: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x196034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x196038: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x196038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x19603c: 0x24a55dc8  addiu       $a1, $a1, 0x5DC8
    ctx->pc = 0x19603cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24008));
    // 0x196040: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x196040u;
    SET_GPR_U32(ctx, 31, 0x196048u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x196040u, 0x196048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196048u;
label_196048:
    // 0x196048: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x196048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19604c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x19604cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196050: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x196050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x196054: 0x24120011  addiu       $s2, $zero, 0x11
    ctx->pc = 0x196054u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x196058: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x196058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19605c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19605Cu;
    SET_GPR_U32(ctx, 31, 0x196064u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19605Cu, 0x196064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196064u;
label_196064:
    // 0x196064: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x196064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x196068: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19606c: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x19606cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x196070: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x196070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196074: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x196074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x196078: 0x24a55dd8  addiu       $a1, $a1, 0x5DD8
    ctx->pc = 0x196078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24024));
    // 0x19607c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x19607Cu;
    SET_GPR_U32(ctx, 31, 0x196084u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x19607Cu, 0x196084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196084u;
label_196084:
    // 0x196084: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x196084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196088: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x196088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19608c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19608cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x196090: 0x24120012  addiu       $s2, $zero, 0x12
    ctx->pc = 0x196090u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x196094: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x196094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196098: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196098u;
    SET_GPR_U32(ctx, 31, 0x1960A0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196098u, 0x1960A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1960A0u;
label_1960a0:
    // 0x1960a0: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1960a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1960a4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1960a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1960a8: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1960a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1960ac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1960acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1960b0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1960b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1960b4: 0x24a55de8  addiu       $a1, $a1, 0x5DE8
    ctx->pc = 0x1960b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24040));
    // 0x1960b8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1960B8u;
    SET_GPR_U32(ctx, 31, 0x1960C0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1960B8u, 0x1960C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1960C0u;
label_1960c0:
    // 0x1960c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1960c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1960c4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1960c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1960c8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1960c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1960cc: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1960ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1960d0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1960D0u;
    SET_GPR_U32(ctx, 31, 0x1960D8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1960D0u, 0x1960D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1960D8u;
label_1960d8:
    // 0x1960d8: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1960d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1960dc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1960dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1960e0: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x1960e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1960e4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1960e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1960e8: 0x24a55df8  addiu       $a1, $a1, 0x5DF8
    ctx->pc = 0x1960e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24056));
    // 0x1960ec: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1960ECu;
    SET_GPR_U32(ctx, 31, 0x1960F4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1960ECu, 0x1960F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1960F4u;
label_1960f4:
    // 0x1960f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1960f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1960f8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1960f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1960fc: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1960fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x196100: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x196100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x196104: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196104u;
    SET_GPR_U32(ctx, 31, 0x19610Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196104u, 0x19610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19610Cu;
label_19610c:
    // 0x19610c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x19610cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x196110: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x196110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196114: 0x8ca60030  lw          $a2, 0x30($a1)
    ctx->pc = 0x196114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x196118: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x196118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19611c: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x19611cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x196120: 0x24e75e08  addiu       $a3, $a3, 0x5E08
    ctx->pc = 0x196120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24072));
    // 0x196124: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x196124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196128: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x196128u;
    SET_GPR_U32(ctx, 31, 0x196130u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x196128u, 0x196130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196130u;
label_196130:
    // 0x196130: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196130u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196134: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196138: 0x249100a4  addiu       $s1, $a0, 0xA4
    ctx->pc = 0x196138u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x19613c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19613cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196140: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x196140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x196144: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196144u;
    SET_GPR_U32(ctx, 31, 0x19614Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196144u, 0x19614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19614Cu;
label_19614c:
    // 0x19614c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x19614cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x196150: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x196150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196154: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x196154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x196158: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x196158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x19615c: 0x24a55e18  addiu       $a1, $a1, 0x5E18
    ctx->pc = 0x19615cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24088));
    // 0x196160: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x196160u;
    SET_GPR_U32(ctx, 31, 0x196168u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x196160u, 0x196168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196168u;
label_196168:
    // 0x196168: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196168u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19616c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x19616cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196170: 0x249100a4  addiu       $s1, $a0, 0xA4
    ctx->pc = 0x196170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x196174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196178: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x196178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x19617c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19617Cu;
    SET_GPR_U32(ctx, 31, 0x196184u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19617Cu, 0x196184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196184u;
label_196184:
    // 0x196184: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x196184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x196188: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x196188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19618c: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x19618cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x196190: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x196190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x196194: 0x24a55e28  addiu       $a1, $a1, 0x5E28
    ctx->pc = 0x196194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24104));
    // 0x196198: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x196198u;
    SET_GPR_U32(ctx, 31, 0x1961A0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x196198u, 0x1961A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1961A0u;
label_1961a0:
    // 0x1961a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1961a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1961a4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1961a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1961a8: 0x249100a4  addiu       $s1, $a0, 0xA4
    ctx->pc = 0x1961a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1961ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1961acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1961b0: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x1961b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1961b4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1961B4u;
    SET_GPR_U32(ctx, 31, 0x1961BCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1961B4u, 0x1961BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1961BCu;
label_1961bc:
    // 0x1961bc: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1961bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1961c0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1961c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1961c4: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1961c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1961c8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1961c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1961cc: 0x24a55e38  addiu       $a1, $a1, 0x5E38
    ctx->pc = 0x1961ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24120));
    // 0x1961d0: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1961D0u;
    SET_GPR_U32(ctx, 31, 0x1961D8u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1961D0u, 0x1961D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1961D8u;
label_1961d8:
    // 0x1961d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1961d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1961dc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1961dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1961e0: 0x249100a4  addiu       $s1, $a0, 0xA4
    ctx->pc = 0x1961e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1961e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1961e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1961e8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1961e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1961ec: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1961ECu;
    SET_GPR_U32(ctx, 31, 0x1961F4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1961ECu, 0x1961F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1961F4u;
label_1961f4:
    // 0x1961f4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1961f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1961f8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1961f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1961fc: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1961fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x196200: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x196200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x196204: 0x24a55e48  addiu       $a1, $a1, 0x5E48
    ctx->pc = 0x196204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24136));
    // 0x196208: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x196208u;
    SET_GPR_U32(ctx, 31, 0x196210u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x196208u, 0x196210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196210u;
label_196210:
    // 0x196210: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196214: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196218: 0x249100a4  addiu       $s1, $a0, 0xA4
    ctx->pc = 0x196218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x19621c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19621cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196220: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x196220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x196224: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196224u;
    SET_GPR_U32(ctx, 31, 0x19622Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196224u, 0x19622Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19622Cu;
label_19622c:
    // 0x19622c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x19622cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x196230: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x196230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196234: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x196234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x196238: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x196238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x19623c: 0x24a55e60  addiu       $a1, $a1, 0x5E60
    ctx->pc = 0x19623cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24160));
    // 0x196240: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x196240u;
    SET_GPR_U32(ctx, 31, 0x196248u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x196240u, 0x196248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196248u;
label_196248:
    // 0x196248: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19624c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x19624cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196250: 0x249100a4  addiu       $s1, $a0, 0xA4
    ctx->pc = 0x196250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x196254: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196258: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x196258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x19625c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19625Cu;
    SET_GPR_U32(ctx, 31, 0x196264u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19625Cu, 0x196264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196264u;
label_196264:
    // 0x196264: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x196264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x196268: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x196268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19626c: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x19626cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x196270: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x196270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x196274: 0x24a55e70  addiu       $a1, $a1, 0x5E70
    ctx->pc = 0x196274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24176));
    // 0x196278: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x196278u;
    SET_GPR_U32(ctx, 31, 0x196280u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x196278u, 0x196280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196280u;
label_196280:
    // 0x196280: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196284: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196288: 0x249100a4  addiu       $s1, $a0, 0xA4
    ctx->pc = 0x196288u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x19628c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19628cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196290: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x196290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x196294: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196294u;
    SET_GPR_U32(ctx, 31, 0x19629Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196294u, 0x19629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19629Cu;
label_19629c:
    // 0x19629c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x19629cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1962a0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1962a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1962a4: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1962a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1962a8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1962a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1962ac: 0x24a55e80  addiu       $a1, $a1, 0x5E80
    ctx->pc = 0x1962acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24192));
    // 0x1962b0: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1962B0u;
    SET_GPR_U32(ctx, 31, 0x1962B8u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1962B0u, 0x1962B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1962B8u;
label_1962b8:
    // 0x1962b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1962b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1962bc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1962bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1962c0: 0x249100a4  addiu       $s1, $a0, 0xA4
    ctx->pc = 0x1962c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1962c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1962c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1962c8: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1962c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1962cc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1962CCu;
    SET_GPR_U32(ctx, 31, 0x1962D4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1962CCu, 0x1962D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1962D4u;
label_1962d4:
    // 0x1962d4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1962d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1962d8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1962d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1962dc: 0x8c910030  lw          $s1, 0x30($a0)
    ctx->pc = 0x1962dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1962e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1962e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1962e4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1962e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1962e8: 0x24a55e90  addiu       $a1, $a1, 0x5E90
    ctx->pc = 0x1962e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24208));
    // 0x1962ec: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1962ECu;
    SET_GPR_U32(ctx, 31, 0x1962F4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1962ECu, 0x1962F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1962F4u;
label_1962f4:
    // 0x1962f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1962f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1962f8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1962f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1962fc: 0x24a400a4  addiu       $a0, $a1, 0xA4
    ctx->pc = 0x1962fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x196300: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x196300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x196304: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196304u;
    SET_GPR_U32(ctx, 31, 0x19630Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196304u, 0x19630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19630Cu;
label_19630c:
    // 0x19630c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19630cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196310: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x196310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x196314: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196318: 0x8c930030  lw          $s3, 0x30($a0)
    ctx->pc = 0x196318u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x19631c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19631cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196320: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x196320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x196324: 0x24425ea0  addiu       $v0, $v0, 0x5EA0
    ctx->pc = 0x196324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24224));
    // 0x196328: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x196328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19632c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x19632Cu;
    SET_GPR_U32(ctx, 31, 0x196334u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x19632Cu, 0x196334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196334u;
label_196334:
    // 0x196334: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196338: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x196338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19633c: 0x24a500a4  addiu       $a1, $a1, 0xA4
    ctx->pc = 0x19633cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x196340: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x196340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196344: 0x2411001e  addiu       $s1, $zero, 0x1E
    ctx->pc = 0x196344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x196348: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19634c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19634Cu;
    SET_GPR_U32(ctx, 31, 0x196354u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19634Cu, 0x196354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196354u;
label_196354:
    // 0x196354: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x196354u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x196358: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19635c: 0x8c930030  lw          $s3, 0x30($a0)
    ctx->pc = 0x19635cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x196360: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x196360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196364: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x196364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x196368: 0x24425eb0  addiu       $v0, $v0, 0x5EB0
    ctx->pc = 0x196368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24240));
    // 0x19636c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19636cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196370: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x196370u;
    SET_GPR_U32(ctx, 31, 0x196378u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x196370u, 0x196378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196378u;
label_196378:
    // 0x196378: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196378u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19637c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x19637cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196380: 0x24a500a4  addiu       $a1, $a1, 0xA4
    ctx->pc = 0x196380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x196384: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x196384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196388: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x196388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x19638c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19638cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196390: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196390u;
    SET_GPR_U32(ctx, 31, 0x196398u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196390u, 0x196398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196398u;
label_196398:
    // 0x196398: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x196398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x19639c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x19639cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1963a0: 0x8c930030  lw          $s3, 0x30($a0)
    ctx->pc = 0x1963a0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1963a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1963a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963a8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1963a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1963ac: 0x24425ec0  addiu       $v0, $v0, 0x5EC0
    ctx->pc = 0x1963acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24256));
    // 0x1963b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1963b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963b4: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1963B4u;
    SET_GPR_U32(ctx, 31, 0x1963BCu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1963B4u, 0x1963BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1963BCu;
label_1963bc:
    // 0x1963bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1963bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963c0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1963c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1963c4: 0x24a500a4  addiu       $a1, $a1, 0xA4
    ctx->pc = 0x1963c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x1963c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1963c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963cc: 0x24110020  addiu       $s1, $zero, 0x20
    ctx->pc = 0x1963ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1963d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1963d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963d4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1963D4u;
    SET_GPR_U32(ctx, 31, 0x1963DCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1963D4u, 0x1963DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1963DCu;
label_1963dc:
    // 0x1963dc: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1963dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1963e0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1963e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1963e4: 0x8c920030  lw          $s2, 0x30($a0)
    ctx->pc = 0x1963e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1963e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1963e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963ec: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1963ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1963f0: 0x24425ee0  addiu       $v0, $v0, 0x5EE0
    ctx->pc = 0x1963f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24288));
    // 0x1963f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1963f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963f8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1963F8u;
    SET_GPR_U32(ctx, 31, 0x196400u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1963F8u, 0x196400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196400u;
label_196400:
    // 0x196400: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x196400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196404: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196408: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x196408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x19640c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19640cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196410: 0x24120021  addiu       $s2, $zero, 0x21
    ctx->pc = 0x196410u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x196414: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x196414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196418: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196418u;
    SET_GPR_U32(ctx, 31, 0x196420u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196418u, 0x196420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196420u;
label_196420:
    // 0x196420: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x196420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x196424: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x196424u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196428: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x196428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x19642c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19642cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196430: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x196430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x196434: 0x24425f00  addiu       $v0, $v0, 0x5F00
    ctx->pc = 0x196434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24320));
    // 0x196438: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x196438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19643c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x19643Cu;
    SET_GPR_U32(ctx, 31, 0x196444u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x19643Cu, 0x196444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196444u;
label_196444:
    // 0x196444: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196448: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19644c: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x19644cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x196450: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x196450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196454: 0x24110022  addiu       $s1, $zero, 0x22
    ctx->pc = 0x196454u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x196458: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19645c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19645Cu;
    SET_GPR_U32(ctx, 31, 0x196464u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19645Cu, 0x196464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196464u;
label_196464:
    // 0x196464: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x196464u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x196468: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x196468u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19646c: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x19646cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x196470: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x196470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196474: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x196474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x196478: 0x24425f20  addiu       $v0, $v0, 0x5F20
    ctx->pc = 0x196478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24352));
    // 0x19647c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19647cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196480: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x196480u;
    SET_GPR_U32(ctx, 31, 0x196488u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x196480u, 0x196488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196488u;
label_196488:
    // 0x196488: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x196488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19648c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x19648cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196490: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x196490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x196494: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x196494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196498: 0x24120023  addiu       $s2, $zero, 0x23
    ctx->pc = 0x196498u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x19649c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19649cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964a0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1964A0u;
    SET_GPR_U32(ctx, 31, 0x1964A8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1964A0u, 0x1964A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1964A8u;
label_1964a8:
    // 0x1964a8: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1964a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1964ac: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x1964acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1964b0: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x1964b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1964b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1964b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964b8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1964b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1964bc: 0x24425f40  addiu       $v0, $v0, 0x5F40
    ctx->pc = 0x1964bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24384));
    // 0x1964c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1964c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964c4: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1964C4u;
    SET_GPR_U32(ctx, 31, 0x1964CCu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1964C4u, 0x1964CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1964CCu;
label_1964cc:
    // 0x1964cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1964ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964d0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1964d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1964d4: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x1964d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1964d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1964d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964dc: 0x24110024  addiu       $s1, $zero, 0x24
    ctx->pc = 0x1964dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1964e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1964e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964e4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1964E4u;
    SET_GPR_U32(ctx, 31, 0x1964ECu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1964E4u, 0x1964ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1964ECu;
label_1964ec:
    // 0x1964ec: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1964ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1964f0: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x1964f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1964f4: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x1964f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1964f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1964f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964fc: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1964fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x196500: 0x24425f60  addiu       $v0, $v0, 0x5F60
    ctx->pc = 0x196500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24416));
    // 0x196504: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x196504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196508: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x196508u;
    SET_GPR_U32(ctx, 31, 0x196510u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x196508u, 0x196510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196510u;
label_196510:
    // 0x196510: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x196510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196514: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196518: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x196518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x19651c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19651cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196520: 0x24120025  addiu       $s2, $zero, 0x25
    ctx->pc = 0x196520u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x196524: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x196524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196528: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196528u;
    SET_GPR_U32(ctx, 31, 0x196530u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196528u, 0x196530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196530u;
label_196530:
    // 0x196530: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x196530u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x196534: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196538: 0x8c910030  lw          $s1, 0x30($a0)
    ctx->pc = 0x196538u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x19653c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19653cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196540: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x196540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x196544: 0x24425f80  addiu       $v0, $v0, 0x5F80
    ctx->pc = 0x196544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24448));
    // 0x196548: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x196548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19654c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x19654Cu;
    SET_GPR_U32(ctx, 31, 0x196554u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x19654Cu, 0x196554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196554u;
label_196554:
    // 0x196554: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196558: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19655c: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x19655cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x196560: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x196560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196564: 0x24110026  addiu       $s1, $zero, 0x26
    ctx->pc = 0x196564u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x196568: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19656c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19656Cu;
    SET_GPR_U32(ctx, 31, 0x196574u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19656Cu, 0x196574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196574u;
label_196574:
    // 0x196574: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x196574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x196578: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19657c: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x19657cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x196580: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x196580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196584: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x196584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x196588: 0x24425fa0  addiu       $v0, $v0, 0x5FA0
    ctx->pc = 0x196588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24480));
    // 0x19658c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19658cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196590: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x196590u;
    SET_GPR_U32(ctx, 31, 0x196598u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x196590u, 0x196598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196598u;
label_196598:
    // 0x196598: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196598u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19659c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x19659cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1965a0: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x1965a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1965a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1965a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965a8: 0x24110027  addiu       $s1, $zero, 0x27
    ctx->pc = 0x1965a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1965ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1965acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965b0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1965B0u;
    SET_GPR_U32(ctx, 31, 0x1965B8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1965B0u, 0x1965B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1965B8u;
label_1965b8:
    // 0x1965b8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1965b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1965bc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1965bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1965c0: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1965c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1965c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1965c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965c8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1965c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1965cc: 0x24425fc0  addiu       $v0, $v0, 0x5FC0
    ctx->pc = 0x1965ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24512));
    // 0x1965d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1965d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965d4: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1965D4u;
    SET_GPR_U32(ctx, 31, 0x1965DCu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1965D4u, 0x1965DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1965DCu;
label_1965dc:
    // 0x1965dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1965dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965e0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1965e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1965e4: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x1965e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1965e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1965e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965ec: 0x24110028  addiu       $s1, $zero, 0x28
    ctx->pc = 0x1965ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1965f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1965f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965f4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1965F4u;
    SET_GPR_U32(ctx, 31, 0x1965FCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1965F4u, 0x1965FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1965FCu;
label_1965fc:
    // 0x1965fc: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1965fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x196600: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196604: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x196604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x196608: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x196608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19660c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x19660cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x196610: 0x24425fe0  addiu       $v0, $v0, 0x5FE0
    ctx->pc = 0x196610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24544));
    // 0x196614: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x196614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196618: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x196618u;
    SET_GPR_U32(ctx, 31, 0x196620u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x196618u, 0x196620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196620u;
label_196620:
    // 0x196620: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196620u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196624: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196628: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x196628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x19662c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19662cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196630: 0x24110029  addiu       $s1, $zero, 0x29
    ctx->pc = 0x196630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x196634: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196638: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196638u;
    SET_GPR_U32(ctx, 31, 0x196640u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196638u, 0x196640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196640u;
label_196640:
    // 0x196640: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x196640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x196644: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196648: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x196648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x19664c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19664cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196650: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x196650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x196654: 0x24426000  addiu       $v0, $v0, 0x6000
    ctx->pc = 0x196654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24576));
    // 0x196658: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x196658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19665c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x19665Cu;
    SET_GPR_U32(ctx, 31, 0x196664u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x19665Cu, 0x196664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196664u;
label_196664:
    // 0x196664: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196668: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19666c: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x19666cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x196670: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x196670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196674: 0x2411002a  addiu       $s1, $zero, 0x2A
    ctx->pc = 0x196674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x196678: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19667c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19667Cu;
    SET_GPR_U32(ctx, 31, 0x196684u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19667Cu, 0x196684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196684u;
label_196684:
    // 0x196684: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x196684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x196688: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19668c: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x19668cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x196690: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x196690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196694: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x196694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x196698: 0x24426020  addiu       $v0, $v0, 0x6020
    ctx->pc = 0x196698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24608));
    // 0x19669c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19669cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966a0: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1966A0u;
    SET_GPR_U32(ctx, 31, 0x1966A8u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1966A0u, 0x1966A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1966A8u;
label_1966a8:
    // 0x1966a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1966a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966ac: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1966acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1966b0: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x1966b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1966b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1966b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966b8: 0x2411002b  addiu       $s1, $zero, 0x2B
    ctx->pc = 0x1966b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1966bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1966bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966c0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1966C0u;
    SET_GPR_U32(ctx, 31, 0x1966C8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1966C0u, 0x1966C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1966C8u;
label_1966c8:
    // 0x1966c8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1966c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1966cc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1966ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1966d0: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1966d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1966d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1966d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966d8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1966d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1966dc: 0x24426040  addiu       $v0, $v0, 0x6040
    ctx->pc = 0x1966dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24640));
    // 0x1966e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1966e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966e4: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1966E4u;
    SET_GPR_U32(ctx, 31, 0x1966ECu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1966E4u, 0x1966ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1966ECu;
label_1966ec:
    // 0x1966ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1966ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966f0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1966f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1966f4: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x1966f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1966f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1966f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966fc: 0x2411002c  addiu       $s1, $zero, 0x2C
    ctx->pc = 0x1966fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x196700: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196704: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196704u;
    SET_GPR_U32(ctx, 31, 0x19670Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196704u, 0x19670Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19670Cu;
label_19670c:
    // 0x19670c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x19670cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x196710: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196714: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x196714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x196718: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x196718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19671c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x19671cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x196720: 0x24426058  addiu       $v0, $v0, 0x6058
    ctx->pc = 0x196720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24664));
    // 0x196724: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x196724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196728: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x196728u;
    SET_GPR_U32(ctx, 31, 0x196730u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x196728u, 0x196730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196730u;
label_196730:
    // 0x196730: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196734: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196738: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x196738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x19673c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19673cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196740: 0x2411002d  addiu       $s1, $zero, 0x2D
    ctx->pc = 0x196740u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x196744: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196748: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196748u;
    SET_GPR_U32(ctx, 31, 0x196750u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196748u, 0x196750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196750u;
label_196750:
    // 0x196750: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x196750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x196754: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196758: 0xc06479c  jal         func_191E70
    ctx->pc = 0x196758u;
    SET_GPR_U32(ctx, 31, 0x196760u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x196758u, 0x196760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196760u;
label_196760:
    // 0x196760: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196764: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x196764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196768: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x196768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19676c: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x19676cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x196770: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196770u;
    SET_GPR_U32(ctx, 31, 0x196778u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196770u, 0x196778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196778u;
label_196778:
    // 0x196778: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x196778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19677c: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x19677cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x196780: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x196780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196784: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x196784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196788: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19678c: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x19678Cu;
    SET_GPR_U32(ctx, 31, 0x196794u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x19678Cu, 0x196794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196794u;
label_196794:
    // 0x196794: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196798: 0xc06479c  jal         func_191E70
    ctx->pc = 0x196798u;
    SET_GPR_U32(ctx, 31, 0x1967A0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x196798u, 0x1967A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1967A0u;
label_1967a0:
    // 0x1967a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1967a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1967a4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1967a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1967a8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1967a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1967ac: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x1967acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1967b0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1967B0u;
    SET_GPR_U32(ctx, 31, 0x1967B8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1967B0u, 0x1967B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1967B8u;
label_1967b8:
    // 0x1967b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1967b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1967bc: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x1967bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1967c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1967c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1967c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1967c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1967c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1967c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1967cc: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1967CCu;
    SET_GPR_U32(ctx, 31, 0x1967D4u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1967CCu, 0x1967D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1967D4u;
label_1967d4:
    // 0x1967d4: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1967d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x1967d8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1967d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1967dc: 0x24a56070  addiu       $a1, $a1, 0x6070
    ctx->pc = 0x1967dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24688));
    // 0x1967e0: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x1967E0u;
    SET_GPR_U32(ctx, 31, 0x1967E8u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1967E0u, 0x1967E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1967E8u;
label_1967e8:
    // 0x1967e8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1967e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1967ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1967ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1967f0: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x1967F0u;
    SET_GPR_U32(ctx, 31, 0x1967F8u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x1967F0u, 0x1967F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1967F8u;
label_1967f8:
    // 0x1967f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1967f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1967fc: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1967fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196800: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x196800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196804: 0xc06479c  jal         func_191E70
    ctx->pc = 0x196804u;
    SET_GPR_U32(ctx, 31, 0x19680Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x196804u, 0x19680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19680Cu;
label_19680c:
    // 0x19680c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19680cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196810: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x196810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196814: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x196814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x196818: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x196818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x19681c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19681Cu;
    SET_GPR_U32(ctx, 31, 0x196824u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19681Cu, 0x196824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196824u;
label_196824:
    // 0x196824: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x196824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x196828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19682c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x19682cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x196830: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x196830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196834: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x196834u;
    SET_GPR_U32(ctx, 31, 0x19683Cu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x196834u, 0x19683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19683Cu;
label_19683c:
    // 0x19683c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19683cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196840: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196844: 0xc06479c  jal         func_191E70
    ctx->pc = 0x196844u;
    SET_GPR_U32(ctx, 31, 0x19684Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x196844u, 0x19684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19684Cu;
label_19684c:
    // 0x19684c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19684cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196850: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x196850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196854: 0x24a200a4  addiu       $v0, $a1, 0xA4
    ctx->pc = 0x196854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x196858: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19685c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x19685cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x196860: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196860u;
    SET_GPR_U32(ctx, 31, 0x196868u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196860u, 0x196868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196868u;
label_196868:
    // 0x196868: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19686c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x19686cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196870: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196874: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196878: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x196878u;
    SET_GPR_U32(ctx, 31, 0x196880u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x196878u, 0x196880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196880u;
label_196880:
    // 0x196880: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196880u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196884: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196888: 0xc06479c  jal         func_191E70
    ctx->pc = 0x196888u;
    SET_GPR_U32(ctx, 31, 0x196890u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x196888u, 0x196890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196890u;
label_196890:
    // 0x196890: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x196890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196894: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x196894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196898: 0x24a200a4  addiu       $v0, $a1, 0xA4
    ctx->pc = 0x196898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x19689c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19689cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968a0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1968a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1968a4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1968A4u;
    SET_GPR_U32(ctx, 31, 0x1968ACu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1968A4u, 0x1968ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1968ACu;
label_1968ac:
    // 0x1968ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1968acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968b0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1968b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1968b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1968b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1968b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968bc: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1968BCu;
    SET_GPR_U32(ctx, 31, 0x1968C4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1968BCu, 0x1968C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1968C4u;
label_1968c4:
    // 0x1968c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1968c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968c8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1968c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1968cc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1968CCu;
    SET_GPR_U32(ctx, 31, 0x1968D4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1968CCu, 0x1968D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1968D4u;
label_1968d4:
    // 0x1968d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1968d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968d8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1968d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1968dc: 0x24a200a4  addiu       $v0, $a1, 0xA4
    ctx->pc = 0x1968dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x1968e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1968e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968e4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1968e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1968e8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1968E8u;
    SET_GPR_U32(ctx, 31, 0x1968F0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1968E8u, 0x1968F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1968F0u;
label_1968f0:
    // 0x1968f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1968f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968f4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1968f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1968f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1968f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1968fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196900: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x196900u;
    SET_GPR_U32(ctx, 31, 0x196908u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x196900u, 0x196908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196908u;
label_196908:
    // 0x196908: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196908u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19690c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x19690cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196910: 0xc06479c  jal         func_191E70
    ctx->pc = 0x196910u;
    SET_GPR_U32(ctx, 31, 0x196918u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x196910u, 0x196918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196918u;
label_196918:
    // 0x196918: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x196918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19691c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x19691cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196920: 0x24a200a4  addiu       $v0, $a1, 0xA4
    ctx->pc = 0x196920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x196924: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196928: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x196928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x19692c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19692Cu;
    SET_GPR_U32(ctx, 31, 0x196934u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19692Cu, 0x196934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196934u;
label_196934:
    // 0x196934: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196938: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x196938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19693c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19693cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196940: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196944: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x196944u;
    SET_GPR_U32(ctx, 31, 0x19694Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x196944u, 0x19694Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19694Cu;
label_19694c:
    // 0x19694c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19694cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196950: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196954: 0xc06479c  jal         func_191E70
    ctx->pc = 0x196954u;
    SET_GPR_U32(ctx, 31, 0x19695Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x196954u, 0x19695Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19695Cu;
label_19695c:
    // 0x19695c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19695cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196960: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x196960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196964: 0x24a200a4  addiu       $v0, $a1, 0xA4
    ctx->pc = 0x196964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x196968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19696c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x19696cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x196970: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196970u;
    SET_GPR_U32(ctx, 31, 0x196978u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196970u, 0x196978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196978u;
label_196978:
    // 0x196978: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19697c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x19697cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196984: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196988: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x196988u;
    SET_GPR_U32(ctx, 31, 0x196990u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x196988u, 0x196990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196990u;
label_196990:
    // 0x196990: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196990u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196994: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196998: 0xc06479c  jal         func_191E70
    ctx->pc = 0x196998u;
    SET_GPR_U32(ctx, 31, 0x1969A0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x196998u, 0x1969A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1969A0u;
label_1969a0:
    // 0x1969a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1969a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1969a4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1969a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1969a8: 0x24a200a4  addiu       $v0, $a1, 0xA4
    ctx->pc = 0x1969a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x1969ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1969acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1969b0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1969b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1969b4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1969B4u;
    SET_GPR_U32(ctx, 31, 0x1969BCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1969B4u, 0x1969BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1969BCu;
label_1969bc:
    // 0x1969bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1969bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1969c0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1969c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1969c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1969c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1969c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1969c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1969cc: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1969CCu;
    SET_GPR_U32(ctx, 31, 0x1969D4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1969CCu, 0x1969D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1969D4u;
label_1969d4:
    // 0x1969d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1969d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1969d8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1969d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1969dc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1969DCu;
    SET_GPR_U32(ctx, 31, 0x1969E4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1969DCu, 0x1969E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1969E4u;
label_1969e4:
    // 0x1969e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1969e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1969e8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1969e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1969ec: 0x24a200a4  addiu       $v0, $a1, 0xA4
    ctx->pc = 0x1969ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x1969f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1969f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1969f4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1969f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1969f8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1969F8u;
    SET_GPR_U32(ctx, 31, 0x196A00u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1969F8u, 0x196A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A00u;
label_196a00:
    // 0x196a00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a04: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x196a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196a08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a10: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x196A10u;
    SET_GPR_U32(ctx, 31, 0x196A18u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x196A10u, 0x196A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A18u;
label_196a18:
    // 0x196a18: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196a18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a1c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196a20: 0xc06479c  jal         func_191E70
    ctx->pc = 0x196A20u;
    SET_GPR_U32(ctx, 31, 0x196A28u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x196A20u, 0x196A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A28u;
label_196a28:
    // 0x196a28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x196a28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a2c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x196a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196a30: 0x24a200a4  addiu       $v0, $a1, 0xA4
    ctx->pc = 0x196a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x196a34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a38: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x196a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x196a3c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196A3Cu;
    SET_GPR_U32(ctx, 31, 0x196A44u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196A3Cu, 0x196A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A44u;
label_196a44:
    // 0x196a44: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x196a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x196a48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196a4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a50: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x196A50u;
    SET_GPR_U32(ctx, 31, 0x196A58u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x196A50u, 0x196A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A58u;
label_196a58:
    // 0x196a58: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196a5c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x196A5Cu;
    SET_GPR_U32(ctx, 31, 0x196A64u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x196A5Cu, 0x196A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A64u;
label_196a64:
    // 0x196a64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x196a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a68: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x196a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196a6c: 0x24b200a4  addiu       $s2, $a1, 0xA4
    ctx->pc = 0x196a6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x196a70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x196a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a74: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x196a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x196a78: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196A78u;
    SET_GPR_U32(ctx, 31, 0x196A80u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196A78u, 0x196A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A80u;
label_196a80:
    // 0x196a80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a84: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x196a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196a88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a90: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x196A90u;
    SET_GPR_U32(ctx, 31, 0x196A98u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x196A90u, 0x196A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A98u;
label_196a98:
    // 0x196a98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x196a98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a9c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196aa0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x196AA0u;
    SET_GPR_U32(ctx, 31, 0x196AA8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x196AA0u, 0x196AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196AA8u;
label_196aa8:
    // 0x196aa8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x196aa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196aac: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x196aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196ab0: 0x245200a4  addiu       $s2, $v0, 0xA4
    ctx->pc = 0x196ab0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x196ab4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x196ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ab8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x196ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x196abc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196ABCu;
    SET_GPR_U32(ctx, 31, 0x196AC4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196ABCu, 0x196AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196AC4u;
label_196ac4:
    // 0x196ac4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x196ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ac8: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x196ac8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x196acc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x196accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ad0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ad4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ad8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x196AD8u;
    SET_GPR_U32(ctx, 31, 0x196AE0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x196AD8u, 0x196AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196AE0u;
label_196ae0:
    // 0x196ae0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196ae4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x196AE4u;
    SET_GPR_U32(ctx, 31, 0x196AECu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x196AE4u, 0x196AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196AECu;
label_196aec:
    // 0x196aec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x196aecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196af0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x196af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196af4: 0x245200a4  addiu       $s2, $v0, 0xA4
    ctx->pc = 0x196af4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x196af8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x196af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196afc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x196afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x196b00: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196B00u;
    SET_GPR_U32(ctx, 31, 0x196B08u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196B00u, 0x196B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B08u;
label_196b08:
    // 0x196b08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x196b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b0c: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x196b0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x196b10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x196b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b1c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x196B1Cu;
    SET_GPR_U32(ctx, 31, 0x196B24u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x196B1Cu, 0x196B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B24u;
label_196b24:
    // 0x196b24: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196b28: 0xc06479c  jal         func_191E70
    ctx->pc = 0x196B28u;
    SET_GPR_U32(ctx, 31, 0x196B30u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x196B28u, 0x196B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B30u;
label_196b30:
    // 0x196b30: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x196b30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b34: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x196b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196b38: 0x245200a4  addiu       $s2, $v0, 0xA4
    ctx->pc = 0x196b38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x196b3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x196b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b40: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x196b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x196b44: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196B44u;
    SET_GPR_U32(ctx, 31, 0x196B4Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196B44u, 0x196B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B4Cu;
label_196b4c:
    // 0x196b4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x196b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b50: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x196b50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x196b54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x196b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b60: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x196B60u;
    SET_GPR_U32(ctx, 31, 0x196B68u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x196B60u, 0x196B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B68u;
label_196b68:
    // 0x196b68: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196b6c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x196B6Cu;
    SET_GPR_U32(ctx, 31, 0x196B74u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x196B6Cu, 0x196B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B74u;
label_196b74:
    // 0x196b74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196b74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b78: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x196b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196b7c: 0x245100a4  addiu       $s1, $v0, 0xA4
    ctx->pc = 0x196b7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x196b80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x196b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b88: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196B88u;
    SET_GPR_U32(ctx, 31, 0x196B90u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196B88u, 0x196B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B90u;
label_196b90:
    // 0x196b90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b94: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x196b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196b98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x196b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ba0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x196BA0u;
    SET_GPR_U32(ctx, 31, 0x196BA8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x196BA0u, 0x196BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196BA8u;
label_196ba8:
    // 0x196ba8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196ba8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196bac: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x196bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196bb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196bb4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x196BB4u;
    SET_GPR_U32(ctx, 31, 0x196BBCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x196BB4u, 0x196BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196BBCu;
label_196bbc:
    // 0x196bbc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x196bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196bc0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x196bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196bc4: 0x24a200a4  addiu       $v0, $a1, 0xA4
    ctx->pc = 0x196bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x196bc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196bcc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x196bccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196bd0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x196bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196bd4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196BD4u;
    SET_GPR_U32(ctx, 31, 0x196BDCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196BD4u, 0x196BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196BDCu;
label_196bdc:
    // 0x196bdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196be0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x196be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196be4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196be8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196bec: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x196BECu;
    SET_GPR_U32(ctx, 31, 0x196BF4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x196BECu, 0x196BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196BF4u;
label_196bf4:
    // 0x196bf4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x196bf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196bf8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x196bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196bfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c00: 0xc06479c  jal         func_191E70
    ctx->pc = 0x196C00u;
    SET_GPR_U32(ctx, 31, 0x196C08u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x196C00u, 0x196C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196C08u;
label_196c08:
    // 0x196c08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196c08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c0c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x196c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196c10: 0x24a200a4  addiu       $v0, $a1, 0xA4
    ctx->pc = 0x196c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x196c14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c18: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x196c18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196c1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c20: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196C20u;
    SET_GPR_U32(ctx, 31, 0x196C28u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196C20u, 0x196C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196C28u;
label_196c28:
    // 0x196c28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c2c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x196c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196c30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x196c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c38: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x196C38u;
    SET_GPR_U32(ctx, 31, 0x196C40u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x196C38u, 0x196C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196C40u;
label_196c40:
    // 0x196c40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196c40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c44: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x196c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196c48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c4c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x196C4Cu;
    SET_GPR_U32(ctx, 31, 0x196C54u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x196C4Cu, 0x196C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196C54u;
label_196c54:
    // 0x196c54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x196c54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c58: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x196c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196c5c: 0x24a200a4  addiu       $v0, $a1, 0xA4
    ctx->pc = 0x196c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x196c60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c64: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x196c64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x196c68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x196c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c6c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196C6Cu;
    SET_GPR_U32(ctx, 31, 0x196C74u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196C6Cu, 0x196C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196C74u;
label_196c74:
    // 0x196c74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c78: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x196c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196c7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c84: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x196C84u;
    SET_GPR_U32(ctx, 31, 0x196C8Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x196C84u, 0x196C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196C8Cu;
label_196c8c:
    // 0x196c8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x196c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c90: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x196c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196c94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c98: 0xc06479c  jal         func_191E70
    ctx->pc = 0x196C98u;
    SET_GPR_U32(ctx, 31, 0x196CA0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x196C98u, 0x196CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196CA0u;
label_196ca0:
    // 0x196ca0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196ca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ca4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x196ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196ca8: 0x24a200a4  addiu       $v0, $a1, 0xA4
    ctx->pc = 0x196ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x196cac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196cb0: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x196cb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196cb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196cb8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196CB8u;
    SET_GPR_U32(ctx, 31, 0x196CC0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196CB8u, 0x196CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196CC0u;
label_196cc0:
    // 0x196cc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196cc4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x196cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196cc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x196cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ccc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196cd0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x196CD0u;
    SET_GPR_U32(ctx, 31, 0x196CD8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x196CD0u, 0x196CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196CD8u;
label_196cd8:
    // 0x196cd8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196cd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196cdc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x196cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x196ce0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x196ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ce4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x196CE4u;
    {
        const bool branch_taken_0x196ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196ce4) {
            ctx->pc = 0x196D38u;
            goto label_196d38;
        }
    }
    ctx->pc = 0x196CECu;
label_196cec:
    // 0x196cec: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196cf0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x196CF0u;
    SET_GPR_U32(ctx, 31, 0x196CF8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x196CF0u, 0x196CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196CF8u;
label_196cf8:
    // 0x196cf8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x196cf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196cfc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x196cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196d00: 0x245200a4  addiu       $s2, $v0, 0xA4
    ctx->pc = 0x196d00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x196d04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x196d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196d08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x196d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196d0c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196D0Cu;
    SET_GPR_U32(ctx, 31, 0x196D14u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196D0Cu, 0x196D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196D14u;
label_196d14:
    // 0x196d14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196d18: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x196d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196d1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196d20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196d20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196d24: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x196D24u;
    SET_GPR_U32(ctx, 31, 0x196D2Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x196D24u, 0x196D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196D2Cu;
label_196d2c:
    // 0x196d2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x196d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196d30: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x196d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x196d34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x196d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196d38:
    // 0x196d38: 0x2e01002c  sltiu       $at, $s0, 0x2C
    ctx->pc = 0x196d38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)44) ? 1 : 0);
    // 0x196d3c: 0x1420ffeb  bnez        $at, . + 4 + (-0x15 << 2)
    ctx->pc = 0x196D3Cu;
    {
        const bool branch_taken_0x196d3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x196d3c) {
            ctx->pc = 0x196CECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196cec;
        }
    }
    ctx->pc = 0x196D44u;
    // 0x196d44: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196d48: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x196d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x196d4c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x196d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196d50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x196d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196d54: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x196D54u;
    SET_GPR_U32(ctx, 31, 0x196D5Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x196D54u, 0x196D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196D5Cu;
label_196d5c:
    // 0x196d5c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x196d5cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x196d60: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x196d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196d64: 0xac9200b0  sw          $s2, 0xB0($a0)
    ctx->pc = 0x196d64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 18));
    // 0x196d68: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x196d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x196d6c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x196d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196d70: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x196d70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x196d74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196d78: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x196D78u;
    SET_GPR_U32(ctx, 31, 0x196D80u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x196D78u, 0x196D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196D80u;
label_196d80:
    // 0x196d80: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x196d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x196d84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x196d84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196d88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x196d88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196d8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x196d8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196d90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196d94: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x196d94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x196d98: 0x3e00008  jr          $ra
    ctx->pc = 0x196D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196DA0u;
}
