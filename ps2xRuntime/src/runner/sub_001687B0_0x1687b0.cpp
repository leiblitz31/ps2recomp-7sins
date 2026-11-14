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

// Function: sub_001687B0
// Address: 0x1687b0 - 0x168b00
void sub_001687B0_0x1687b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001687B0_0x1687b0");
#endif

    switch (ctx->pc) {
        case 0x1687b0u: goto label_1687b0;
        case 0x1687b4u: goto label_1687b4;
        case 0x1687b8u: goto label_1687b8;
        case 0x1687bcu: goto label_1687bc;
        case 0x1687c0u: goto label_1687c0;
        case 0x1687c4u: goto label_1687c4;
        case 0x1687c8u: goto label_1687c8;
        case 0x1687ccu: goto label_1687cc;
        case 0x1687d0u: goto label_1687d0;
        case 0x1687d4u: goto label_1687d4;
        case 0x1687d8u: goto label_1687d8;
        case 0x1687dcu: goto label_1687dc;
        case 0x1687e0u: goto label_1687e0;
        case 0x1687e4u: goto label_1687e4;
        case 0x1687e8u: goto label_1687e8;
        case 0x1687ecu: goto label_1687ec;
        case 0x1687f0u: goto label_1687f0;
        case 0x1687f4u: goto label_1687f4;
        case 0x1687f8u: goto label_1687f8;
        case 0x1687fcu: goto label_1687fc;
        case 0x168800u: goto label_168800;
        case 0x168804u: goto label_168804;
        case 0x168808u: goto label_168808;
        case 0x16880cu: goto label_16880c;
        case 0x168810u: goto label_168810;
        case 0x168814u: goto label_168814;
        case 0x168818u: goto label_168818;
        case 0x16881cu: goto label_16881c;
        case 0x168820u: goto label_168820;
        case 0x168824u: goto label_168824;
        case 0x168828u: goto label_168828;
        case 0x16882cu: goto label_16882c;
        case 0x168830u: goto label_168830;
        case 0x168834u: goto label_168834;
        case 0x168838u: goto label_168838;
        case 0x16883cu: goto label_16883c;
        case 0x168840u: goto label_168840;
        case 0x168844u: goto label_168844;
        case 0x168848u: goto label_168848;
        case 0x16884cu: goto label_16884c;
        case 0x168850u: goto label_168850;
        case 0x168854u: goto label_168854;
        case 0x168858u: goto label_168858;
        case 0x16885cu: goto label_16885c;
        case 0x168860u: goto label_168860;
        case 0x168864u: goto label_168864;
        case 0x168868u: goto label_168868;
        case 0x16886cu: goto label_16886c;
        case 0x168870u: goto label_168870;
        case 0x168874u: goto label_168874;
        case 0x168878u: goto label_168878;
        case 0x16887cu: goto label_16887c;
        case 0x168880u: goto label_168880;
        case 0x168884u: goto label_168884;
        case 0x168888u: goto label_168888;
        case 0x16888cu: goto label_16888c;
        case 0x168890u: goto label_168890;
        case 0x168894u: goto label_168894;
        case 0x168898u: goto label_168898;
        case 0x16889cu: goto label_16889c;
        case 0x1688a0u: goto label_1688a0;
        case 0x1688a4u: goto label_1688a4;
        case 0x1688a8u: goto label_1688a8;
        case 0x1688acu: goto label_1688ac;
        case 0x1688b0u: goto label_1688b0;
        case 0x1688b4u: goto label_1688b4;
        case 0x1688b8u: goto label_1688b8;
        case 0x1688bcu: goto label_1688bc;
        case 0x1688c0u: goto label_1688c0;
        case 0x1688c4u: goto label_1688c4;
        case 0x1688c8u: goto label_1688c8;
        case 0x1688ccu: goto label_1688cc;
        case 0x1688d0u: goto label_1688d0;
        case 0x1688d4u: goto label_1688d4;
        case 0x1688d8u: goto label_1688d8;
        case 0x1688dcu: goto label_1688dc;
        case 0x1688e0u: goto label_1688e0;
        case 0x1688e4u: goto label_1688e4;
        case 0x1688e8u: goto label_1688e8;
        case 0x1688ecu: goto label_1688ec;
        case 0x1688f0u: goto label_1688f0;
        case 0x1688f4u: goto label_1688f4;
        case 0x1688f8u: goto label_1688f8;
        case 0x1688fcu: goto label_1688fc;
        case 0x168900u: goto label_168900;
        case 0x168904u: goto label_168904;
        case 0x168908u: goto label_168908;
        case 0x16890cu: goto label_16890c;
        case 0x168910u: goto label_168910;
        case 0x168914u: goto label_168914;
        case 0x168918u: goto label_168918;
        case 0x16891cu: goto label_16891c;
        case 0x168920u: goto label_168920;
        case 0x168924u: goto label_168924;
        case 0x168928u: goto label_168928;
        case 0x16892cu: goto label_16892c;
        case 0x168930u: goto label_168930;
        case 0x168934u: goto label_168934;
        case 0x168938u: goto label_168938;
        case 0x16893cu: goto label_16893c;
        case 0x168940u: goto label_168940;
        case 0x168944u: goto label_168944;
        case 0x168948u: goto label_168948;
        case 0x16894cu: goto label_16894c;
        case 0x168950u: goto label_168950;
        case 0x168954u: goto label_168954;
        case 0x168958u: goto label_168958;
        case 0x16895cu: goto label_16895c;
        case 0x168960u: goto label_168960;
        case 0x168964u: goto label_168964;
        case 0x168968u: goto label_168968;
        case 0x16896cu: goto label_16896c;
        case 0x168970u: goto label_168970;
        case 0x168974u: goto label_168974;
        case 0x168978u: goto label_168978;
        case 0x16897cu: goto label_16897c;
        case 0x168980u: goto label_168980;
        case 0x168984u: goto label_168984;
        case 0x168988u: goto label_168988;
        case 0x16898cu: goto label_16898c;
        case 0x168990u: goto label_168990;
        case 0x168994u: goto label_168994;
        case 0x168998u: goto label_168998;
        case 0x16899cu: goto label_16899c;
        case 0x1689a0u: goto label_1689a0;
        case 0x1689a4u: goto label_1689a4;
        case 0x1689a8u: goto label_1689a8;
        case 0x1689acu: goto label_1689ac;
        case 0x1689b0u: goto label_1689b0;
        case 0x1689b4u: goto label_1689b4;
        case 0x1689b8u: goto label_1689b8;
        case 0x1689bcu: goto label_1689bc;
        case 0x1689c0u: goto label_1689c0;
        case 0x1689c4u: goto label_1689c4;
        case 0x1689c8u: goto label_1689c8;
        case 0x1689ccu: goto label_1689cc;
        case 0x1689d0u: goto label_1689d0;
        case 0x1689d4u: goto label_1689d4;
        case 0x1689d8u: goto label_1689d8;
        case 0x1689dcu: goto label_1689dc;
        case 0x1689e0u: goto label_1689e0;
        case 0x1689e4u: goto label_1689e4;
        case 0x1689e8u: goto label_1689e8;
        case 0x1689ecu: goto label_1689ec;
        case 0x1689f0u: goto label_1689f0;
        case 0x1689f4u: goto label_1689f4;
        case 0x1689f8u: goto label_1689f8;
        case 0x1689fcu: goto label_1689fc;
        case 0x168a00u: goto label_168a00;
        case 0x168a04u: goto label_168a04;
        case 0x168a08u: goto label_168a08;
        case 0x168a0cu: goto label_168a0c;
        case 0x168a10u: goto label_168a10;
        case 0x168a14u: goto label_168a14;
        case 0x168a18u: goto label_168a18;
        case 0x168a1cu: goto label_168a1c;
        case 0x168a20u: goto label_168a20;
        case 0x168a24u: goto label_168a24;
        case 0x168a28u: goto label_168a28;
        case 0x168a2cu: goto label_168a2c;
        case 0x168a30u: goto label_168a30;
        case 0x168a34u: goto label_168a34;
        case 0x168a38u: goto label_168a38;
        case 0x168a3cu: goto label_168a3c;
        case 0x168a40u: goto label_168a40;
        case 0x168a44u: goto label_168a44;
        case 0x168a48u: goto label_168a48;
        case 0x168a4cu: goto label_168a4c;
        case 0x168a50u: goto label_168a50;
        case 0x168a54u: goto label_168a54;
        case 0x168a58u: goto label_168a58;
        case 0x168a5cu: goto label_168a5c;
        case 0x168a60u: goto label_168a60;
        case 0x168a64u: goto label_168a64;
        case 0x168a68u: goto label_168a68;
        case 0x168a6cu: goto label_168a6c;
        case 0x168a70u: goto label_168a70;
        case 0x168a74u: goto label_168a74;
        case 0x168a78u: goto label_168a78;
        case 0x168a7cu: goto label_168a7c;
        case 0x168a80u: goto label_168a80;
        case 0x168a84u: goto label_168a84;
        case 0x168a88u: goto label_168a88;
        case 0x168a8cu: goto label_168a8c;
        case 0x168a90u: goto label_168a90;
        case 0x168a94u: goto label_168a94;
        case 0x168a98u: goto label_168a98;
        case 0x168a9cu: goto label_168a9c;
        case 0x168aa0u: goto label_168aa0;
        case 0x168aa4u: goto label_168aa4;
        case 0x168aa8u: goto label_168aa8;
        case 0x168aacu: goto label_168aac;
        case 0x168ab0u: goto label_168ab0;
        case 0x168ab4u: goto label_168ab4;
        case 0x168ab8u: goto label_168ab8;
        case 0x168abcu: goto label_168abc;
        case 0x168ac0u: goto label_168ac0;
        case 0x168ac4u: goto label_168ac4;
        case 0x168ac8u: goto label_168ac8;
        case 0x168accu: goto label_168acc;
        case 0x168ad0u: goto label_168ad0;
        case 0x168ad4u: goto label_168ad4;
        case 0x168ad8u: goto label_168ad8;
        case 0x168adcu: goto label_168adc;
        case 0x168ae0u: goto label_168ae0;
        case 0x168ae4u: goto label_168ae4;
        case 0x168ae8u: goto label_168ae8;
        case 0x168aecu: goto label_168aec;
        case 0x168af0u: goto label_168af0;
        case 0x168af4u: goto label_168af4;
        case 0x168af8u: goto label_168af8;
        case 0x168afcu: goto label_168afc;
        default: break;
    }

    ctx->pc = 0x1687b0u;

label_1687b0:
    // 0x1687b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1687b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1687b4:
    // 0x1687b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1687b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1687b8:
    // 0x1687b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1687b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1687bc:
    // 0x1687bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1687bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1687c0:
    // 0x1687c0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1687c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1687c4:
    // 0x1687c4: 0xc0557e8  jal         func_155FA0
label_1687c8:
    if (ctx->pc == 0x1687C8u) {
        ctx->pc = 0x1687CCu;
        goto label_1687cc;
    }
    ctx->pc = 0x1687C4u;
    SET_GPR_U32(ctx, 31, 0x1687CCu);
    ctx->pc = 0x155FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FA0u, 0x1687C4u, 0x1687CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1687CCu;
label_1687cc:
    // 0x1687cc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1687ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1687d0:
    // 0x1687d0: 0x24633c30  addiu       $v1, $v1, 0x3C30
    ctx->pc = 0x1687d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15408));
label_1687d4:
    // 0x1687d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1687d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1687d8:
    // 0x1687d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1687d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1687dc:
    // 0x1687dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1687dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1687e0:
    // 0x1687e0: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x1687e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_1687e4:
    // 0x1687e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1687e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1687e8:
    // 0x1687e8: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x1687e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
label_1687ec:
    // 0x1687ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1687ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1687f0:
    // 0x1687f0: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x1687f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_1687f4:
    // 0x1687f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1687f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1687f8:
    // 0x1687f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1687f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1687fc:
    // 0x1687fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1687fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_168800:
    // 0x168800: 0x3e00008  jr          $ra
label_168804:
    if (ctx->pc == 0x168804u) {
        ctx->pc = 0x168808u;
        goto label_168808;
    }
    ctx->pc = 0x168800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168808u;
label_168808:
    // 0x168808: 0x0  nop
    ctx->pc = 0x168808u;
    // NOP
label_16880c:
    // 0x16880c: 0x0  nop
    ctx->pc = 0x16880cu;
    // NOP
label_168810:
    // 0x168810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_168814:
    // 0x168814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_168818:
    // 0x168818: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x168818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_16881c:
    // 0x16881c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x16881cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_168820:
    // 0x168820: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x168820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_168824:
    // 0x168824: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_168828:
    if (ctx->pc == 0x168828u) {
        ctx->pc = 0x16882Cu;
        goto label_16882c;
    }
    ctx->pc = 0x168824u;
    {
        const bool branch_taken_0x168824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168824) {
            ctx->pc = 0x16886Cu;
            goto label_16886c;
        }
    }
    ctx->pc = 0x16882Cu;
label_16882c:
    // 0x16882c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x16882cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_168830:
    // 0x168830: 0x24633c30  addiu       $v1, $v1, 0x3C30
    ctx->pc = 0x168830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15408));
label_168834:
    // 0x168834: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x168834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_168838:
    // 0x168838: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x168838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_16883c:
    // 0x16883c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16883cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_168840:
    // 0x168840: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168844:
    // 0x168844: 0xc055950  jal         func_156540
label_168848:
    if (ctx->pc == 0x168848u) {
        ctx->pc = 0x16884Cu;
        goto label_16884c;
    }
    ctx->pc = 0x168844u;
    SET_GPR_U32(ctx, 31, 0x16884Cu);
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x168844u, 0x16884Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16884Cu;
label_16884c:
    // 0x16884c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x16884cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_168850:
    // 0x168850: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x168850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_168854:
    // 0x168854: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x168854u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_168858:
    // 0x168858: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_16885c:
    if (ctx->pc == 0x16885Cu) {
        ctx->pc = 0x168860u;
        goto label_168860;
    }
    ctx->pc = 0x168858u;
    {
        const bool branch_taken_0x168858 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x168858) {
            ctx->pc = 0x16886Cu;
            goto label_16886c;
        }
    }
    ctx->pc = 0x168860u;
label_168860:
    // 0x168860: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x168860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_168864:
    // 0x168864: 0xc0ba070  jal         func_2E81C0
label_168868:
    if (ctx->pc == 0x168868u) {
        ctx->pc = 0x16886Cu;
        goto label_16886c;
    }
    ctx->pc = 0x168864u;
    SET_GPR_U32(ctx, 31, 0x16886Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x168864u, 0x16886Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16886Cu;
label_16886c:
    // 0x16886c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16886cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_168870:
    // 0x168870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_168874:
    // 0x168874: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x168874u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_168878:
    // 0x168878: 0x3e00008  jr          $ra
label_16887c:
    if (ctx->pc == 0x16887Cu) {
        ctx->pc = 0x168880u;
        goto label_168880;
    }
    ctx->pc = 0x168878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168880u;
label_168880:
    // 0x168880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_168884:
    // 0x168884: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x168884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_168888:
    // 0x168888: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16888c:
    // 0x16888c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x16888cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_168890:
    // 0x168890: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x168890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_168894:
    // 0x168894: 0xc055974  jal         func_1565D0
label_168898:
    if (ctx->pc == 0x168898u) {
        ctx->pc = 0x16889Cu;
        goto label_16889c;
    }
    ctx->pc = 0x168894u;
    SET_GPR_U32(ctx, 31, 0x16889Cu);
    ctx->pc = 0x1565D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1565D0u, 0x168894u, 0x16889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16889Cu;
label_16889c:
    // 0x16889c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16889cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1688a0:
    // 0x1688a0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1688a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1688a4:
    // 0x1688a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1688a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1688a8:
    // 0x1688a8: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
label_1688ac:
    if (ctx->pc == 0x1688ACu) {
        ctx->pc = 0x1688B0u;
        goto label_1688b0;
    }
    ctx->pc = 0x1688A8u;
    {
        const bool branch_taken_0x1688a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1688a8) {
            ctx->pc = 0x16891Cu;
            goto label_16891c;
        }
    }
    ctx->pc = 0x1688B0u;
label_1688b0:
    // 0x1688b0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1688b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1688b4:
    // 0x1688b4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1688b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1688b8:
    // 0x1688b8: 0x24a54090  addiu       $a1, $a1, 0x4090
    ctx->pc = 0x1688b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16528));
label_1688bc:
    // 0x1688bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1688bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1688c0:
    // 0x1688c0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1688c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1688c4:
    // 0x1688c4: 0x320f809  jalr        $t9
label_1688c8:
    if (ctx->pc == 0x1688C8u) {
        ctx->pc = 0x1688CCu;
        goto label_1688cc;
    }
    ctx->pc = 0x1688C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1688CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1688C4u, 0x1688CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1688CCu;
label_1688cc:
    // 0x1688cc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1688ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1688d0:
    // 0x1688d0: 0x27858ec0  addiu       $a1, $gp, -0x7140
    ctx->pc = 0x1688d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938304));
label_1688d4:
    // 0x1688d4: 0xc0552e4  jal         func_154B90
label_1688d8:
    if (ctx->pc == 0x1688D8u) {
        ctx->pc = 0x1688DCu;
        goto label_1688dc;
    }
    ctx->pc = 0x1688D4u;
    SET_GPR_U32(ctx, 31, 0x1688DCu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x1688D4u, 0x1688DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1688DCu;
label_1688dc:
    // 0x1688dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1688dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1688e0:
    // 0x1688e0: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1688e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1688e4:
    // 0x1688e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1688e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1688e8:
    // 0x1688e8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1688e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1688ec:
    // 0x1688ec: 0x24a540b0  addiu       $a1, $a1, 0x40B0
    ctx->pc = 0x1688ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16560));
label_1688f0:
    // 0x1688f0: 0xc0552e4  jal         func_154B90
label_1688f4:
    if (ctx->pc == 0x1688F4u) {
        ctx->pc = 0x1688F8u;
        goto label_1688f8;
    }
    ctx->pc = 0x1688F0u;
    SET_GPR_U32(ctx, 31, 0x1688F8u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x1688F0u, 0x1688F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1688F8u;
label_1688f8:
    // 0x1688f8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1688f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1688fc:
    // 0x1688fc: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x1688fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
label_168900:
    // 0x168900: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x168900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_168904:
    // 0x168904: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x168904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_168908:
    // 0x168908: 0x24a540c0  addiu       $a1, $a1, 0x40C0
    ctx->pc = 0x168908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16576));
label_16890c:
    // 0x16890c: 0xc0552e4  jal         func_154B90
label_168910:
    if (ctx->pc == 0x168910u) {
        ctx->pc = 0x168914u;
        goto label_168914;
    }
    ctx->pc = 0x16890Cu;
    SET_GPR_U32(ctx, 31, 0x168914u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x16890Cu, 0x168914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168914u;
label_168914:
    // 0x168914: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x168914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_168918:
    // 0x168918: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x168918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
label_16891c:
    // 0x16891c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16891cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_168920:
    // 0x168920: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x168920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_168924:
    // 0x168924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_168928:
    // 0x168928: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x168928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_16892c:
    // 0x16892c: 0x3e00008  jr          $ra
label_168930:
    if (ctx->pc == 0x168930u) {
        ctx->pc = 0x168934u;
        goto label_168934;
    }
    ctx->pc = 0x16892Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16892Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168934u;
label_168934:
    // 0x168934: 0x0  nop
    ctx->pc = 0x168934u;
    // NOP
label_168938:
    // 0x168938: 0x0  nop
    ctx->pc = 0x168938u;
    // NOP
label_16893c:
    // 0x16893c: 0x0  nop
    ctx->pc = 0x16893cu;
    // NOP
label_168940:
    // 0x168940: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x168940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_168944:
    // 0x168944: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x168944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_168948:
    // 0x168948: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x168948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16894c:
    // 0x16894c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16894cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_168950:
    // 0x168950: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_168954:
    // 0x168954: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x168954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_168958:
    // 0x168958: 0xa3a50050  sb          $a1, 0x50($sp)
    ctx->pc = 0x168958u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 5));
label_16895c:
    // 0x16895c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x16895cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_168960:
    // 0x168960: 0x93a50050  lbu         $a1, 0x50($sp)
    ctx->pc = 0x168960u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
label_168964:
    // 0x168964: 0xc055a78  jal         func_1569E0
label_168968:
    if (ctx->pc == 0x168968u) {
        ctx->pc = 0x16896Cu;
        goto label_16896c;
    }
    ctx->pc = 0x168964u;
    SET_GPR_U32(ctx, 31, 0x16896Cu);
    ctx->pc = 0x1569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569E0u, 0x168964u, 0x16896Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16896Cu;
label_16896c:
    // 0x16896c: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x16896cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
label_168970:
    // 0x168970: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x168970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_168974:
    // 0x168974: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x168974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_168978:
    // 0x168978: 0x1462002b  bne         $v1, $v0, . + 4 + (0x2B << 2)
label_16897c:
    if (ctx->pc == 0x16897Cu) {
        ctx->pc = 0x168980u;
        goto label_168980;
    }
    ctx->pc = 0x168978u;
    {
        const bool branch_taken_0x168978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x168978) {
            ctx->pc = 0x168A28u;
            goto label_168a28;
        }
    }
    ctx->pc = 0x168980u;
label_168980:
    // 0x168980: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x168980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_168984:
    // 0x168984: 0x27858ec8  addiu       $a1, $gp, -0x7138
    ctx->pc = 0x168984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938312));
label_168988:
    // 0x168988: 0xc0552e4  jal         func_154B90
label_16898c:
    if (ctx->pc == 0x16898Cu) {
        ctx->pc = 0x168990u;
        goto label_168990;
    }
    ctx->pc = 0x168988u;
    SET_GPR_U32(ctx, 31, 0x168990u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x168988u, 0x168990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168990u;
label_168990:
    // 0x168990: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x168990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_168994:
    // 0x168994: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
label_168998:
    if (ctx->pc == 0x168998u) {
        ctx->pc = 0x16899Cu;
        goto label_16899c;
    }
    ctx->pc = 0x168994u;
    {
        const bool branch_taken_0x168994 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x168994) {
            ctx->pc = 0x168A10u;
            goto label_168a10;
        }
    }
    ctx->pc = 0x16899Cu;
label_16899c:
    // 0x16899c: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x16899cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1689a0:
    // 0x1689a0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x1689a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1689a4:
    // 0x1689a4: 0x24050541  addiu       $a1, $zero, 0x541
    ctx->pc = 0x1689a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1345));
label_1689a8:
    // 0x1689a8: 0x27868ed0  addiu       $a2, $gp, -0x7130
    ctx->pc = 0x1689a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938320));
label_1689ac:
    // 0x1689ac: 0xc041a50  jal         func_106940
label_1689b0:
    if (ctx->pc == 0x1689B0u) {
        ctx->pc = 0x1689B4u;
        goto label_1689b4;
    }
    ctx->pc = 0x1689ACu;
    SET_GPR_U32(ctx, 31, 0x1689B4u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x1689ACu, 0x1689B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1689B4u;
label_1689b4:
    // 0x1689b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1689b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1689b8:
    // 0x1689b8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1689b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1689bc:
    // 0x1689bc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1689bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1689c0:
    // 0x1689c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1689c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1689c4:
    // 0x1689c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1689c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1689c8:
    // 0x1689c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1689c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1689cc:
    // 0x1689cc: 0xc08c800  jal         func_232000
label_1689d0:
    if (ctx->pc == 0x1689D0u) {
        ctx->pc = 0x1689D4u;
        goto label_1689d4;
    }
    ctx->pc = 0x1689CCu;
    SET_GPR_U32(ctx, 31, 0x1689D4u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x1689CCu, 0x1689D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1689D4u;
label_1689d4:
    // 0x1689d4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1689d8:
    if (ctx->pc == 0x1689D8u) {
        ctx->pc = 0x1689DCu;
        goto label_1689dc;
    }
    ctx->pc = 0x1689D4u;
    {
        const bool branch_taken_0x1689d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1689d4) {
            ctx->pc = 0x1689F8u;
            goto label_1689f8;
        }
    }
    ctx->pc = 0x1689DCu;
label_1689dc:
    // 0x1689dc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1689dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1689e0:
    // 0x1689e0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1689e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1689e4:
    // 0x1689e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1689e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1689e8:
    // 0x1689e8: 0x27868ed8  addiu       $a2, $gp, -0x7128
    ctx->pc = 0x1689e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938328));
label_1689ec:
    // 0x1689ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1689ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1689f0:
    // 0x1689f0: 0xc08c800  jal         func_232000
label_1689f4:
    if (ctx->pc == 0x1689F4u) {
        ctx->pc = 0x1689F8u;
        goto label_1689f8;
    }
    ctx->pc = 0x1689F0u;
    SET_GPR_U32(ctx, 31, 0x1689F8u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x1689F0u, 0x1689F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1689F8u;
label_1689f8:
    // 0x1689f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1689f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1689fc:
    // 0x1689fc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1689fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_168a00:
    // 0x168a00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x168a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_168a04:
    // 0x168a04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x168a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_168a08:
    // 0x168a08: 0xc08c8dc  jal         func_232370
label_168a0c:
    if (ctx->pc == 0x168A0Cu) {
        ctx->pc = 0x168A10u;
        goto label_168a10;
    }
    ctx->pc = 0x168A08u;
    SET_GPR_U32(ctx, 31, 0x168A10u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x168A08u, 0x168A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A10u;
label_168a10:
    // 0x168a10: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x168a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_168a14:
    // 0x168a14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168a18:
    // 0x168a18: 0xc05a2c0  jal         func_168B00
label_168a1c:
    if (ctx->pc == 0x168A1Cu) {
        ctx->pc = 0x168A20u;
        goto label_168a20;
    }
    ctx->pc = 0x168A18u;
    SET_GPR_U32(ctx, 31, 0x168A20u);
    ctx->pc = 0x168B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168B00u, 0x168A18u, 0x168A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A20u;
label_168a20:
    // 0x168a20: 0x10000016  b           . + 4 + (0x16 << 2)
label_168a24:
    if (ctx->pc == 0x168A24u) {
        ctx->pc = 0x168A28u;
        goto label_168a28;
    }
    ctx->pc = 0x168A20u;
    {
        const bool branch_taken_0x168a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168a20) {
            ctx->pc = 0x168A7Cu;
            goto label_168a7c;
        }
    }
    ctx->pc = 0x168A28u;
label_168a28:
    // 0x168a28: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x168a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_168a2c:
    // 0x168a2c: 0x27858ec8  addiu       $a1, $gp, -0x7138
    ctx->pc = 0x168a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938312));
label_168a30:
    // 0x168a30: 0xc0552e4  jal         func_154B90
label_168a34:
    if (ctx->pc == 0x168A34u) {
        ctx->pc = 0x168A38u;
        goto label_168a38;
    }
    ctx->pc = 0x168A30u;
    SET_GPR_U32(ctx, 31, 0x168A38u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x168A30u, 0x168A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A38u;
label_168a38:
    // 0x168a38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x168a38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_168a3c:
    // 0x168a3c: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_168a40:
    if (ctx->pc == 0x168A40u) {
        ctx->pc = 0x168A44u;
        goto label_168a44;
    }
    ctx->pc = 0x168A3Cu;
    {
        const bool branch_taken_0x168a3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x168a3c) {
            ctx->pc = 0x168A7Cu;
            goto label_168a7c;
        }
    }
    ctx->pc = 0x168A44u;
label_168a44:
    // 0x168a44: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x168a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_168a48:
    // 0x168a48: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x168a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_168a4c:
    // 0x168a4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x168a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_168a50:
    // 0x168a50: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x168a50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_168a54:
    // 0x168a54: 0x24c640d0  addiu       $a2, $a2, 0x40D0
    ctx->pc = 0x168a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16592));
label_168a58:
    // 0x168a58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x168a58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168a5c:
    // 0x168a5c: 0xc08c800  jal         func_232000
label_168a60:
    if (ctx->pc == 0x168A60u) {
        ctx->pc = 0x168A64u;
        goto label_168a64;
    }
    ctx->pc = 0x168A5Cu;
    SET_GPR_U32(ctx, 31, 0x168A64u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x168A5Cu, 0x168A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A64u;
label_168a64:
    // 0x168a64: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x168a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_168a68:
    // 0x168a68: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x168a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_168a6c:
    // 0x168a6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x168a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_168a70:
    // 0x168a70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x168a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168a74:
    // 0x168a74: 0xc08c8dc  jal         func_232370
label_168a78:
    if (ctx->pc == 0x168A78u) {
        ctx->pc = 0x168A7Cu;
        goto label_168a7c;
    }
    ctx->pc = 0x168A74u;
    SET_GPR_U32(ctx, 31, 0x168A7Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x168A74u, 0x168A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A7Cu;
label_168a7c:
    // 0x168a7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x168a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_168a80:
    // 0x168a80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x168a80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_168a84:
    // 0x168a84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168a84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_168a88:
    // 0x168a88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_168a8c:
    // 0x168a8c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x168a8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_168a90:
    // 0x168a90: 0x3e00008  jr          $ra
label_168a94:
    if (ctx->pc == 0x168A94u) {
        ctx->pc = 0x168A98u;
        goto label_168a98;
    }
    ctx->pc = 0x168A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168A98u;
label_168a98:
    // 0x168a98: 0x0  nop
    ctx->pc = 0x168a98u;
    // NOP
label_168a9c:
    // 0x168a9c: 0x0  nop
    ctx->pc = 0x168a9cu;
    // NOP
label_168aa0:
    // 0x168aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_168aa4:
    // 0x168aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_168aa8:
    // 0x168aa8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x168aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_168aac:
    // 0x168aac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x168aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_168ab0:
    // 0x168ab0: 0xc055a84  jal         func_156A10
label_168ab4:
    if (ctx->pc == 0x168AB4u) {
        ctx->pc = 0x168AB8u;
        goto label_168ab8;
    }
    ctx->pc = 0x168AB0u;
    SET_GPR_U32(ctx, 31, 0x168AB8u);
    ctx->pc = 0x156A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156A10u, 0x168AB0u, 0x168AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168AB8u;
label_168ab8:
    // 0x168ab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_168abc:
    // 0x168abc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x168abcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_168ac0:
    // 0x168ac0: 0x3e00008  jr          $ra
label_168ac4:
    if (ctx->pc == 0x168AC4u) {
        ctx->pc = 0x168AC8u;
        goto label_168ac8;
    }
    ctx->pc = 0x168AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168AC8u;
label_168ac8:
    // 0x168ac8: 0x0  nop
    ctx->pc = 0x168ac8u;
    // NOP
label_168acc:
    // 0x168acc: 0x0  nop
    ctx->pc = 0x168accu;
    // NOP
label_168ad0:
    // 0x168ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_168ad4:
    // 0x168ad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_168ad8:
    // 0x168ad8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x168ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_168adc:
    // 0x168adc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x168adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_168ae0:
    // 0x168ae0: 0xc055b3c  jal         func_156CF0
label_168ae4:
    if (ctx->pc == 0x168AE4u) {
        ctx->pc = 0x168AE8u;
        goto label_168ae8;
    }
    ctx->pc = 0x168AE0u;
    SET_GPR_U32(ctx, 31, 0x168AE8u);
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x168AE0u, 0x168AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168AE8u;
label_168ae8:
    // 0x168ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_168aec:
    // 0x168aec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x168aecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_168af0:
    // 0x168af0: 0x3e00008  jr          $ra
label_168af4:
    if (ctx->pc == 0x168AF4u) {
        ctx->pc = 0x168AF8u;
        goto label_168af8;
    }
    ctx->pc = 0x168AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168AF8u;
label_168af8:
    // 0x168af8: 0x0  nop
    ctx->pc = 0x168af8u;
    // NOP
label_168afc:
    // 0x168afc: 0x0  nop
    ctx->pc = 0x168afcu;
    // NOP
    ctx->pc = 0x168b00u;
}
