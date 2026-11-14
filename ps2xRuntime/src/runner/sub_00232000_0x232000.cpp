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

// Function: sub_00232000
// Address: 0x232000 - 0x232370
void sub_00232000_0x232000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232000_0x232000");
#endif

    switch (ctx->pc) {
        case 0x232000u: goto label_232000;
        case 0x232004u: goto label_232004;
        case 0x232008u: goto label_232008;
        case 0x23200cu: goto label_23200c;
        case 0x232010u: goto label_232010;
        case 0x232014u: goto label_232014;
        case 0x232018u: goto label_232018;
        case 0x23201cu: goto label_23201c;
        case 0x232020u: goto label_232020;
        case 0x232024u: goto label_232024;
        case 0x232028u: goto label_232028;
        case 0x23202cu: goto label_23202c;
        case 0x232030u: goto label_232030;
        case 0x232034u: goto label_232034;
        case 0x232038u: goto label_232038;
        case 0x23203cu: goto label_23203c;
        case 0x232040u: goto label_232040;
        case 0x232044u: goto label_232044;
        case 0x232048u: goto label_232048;
        case 0x23204cu: goto label_23204c;
        case 0x232050u: goto label_232050;
        case 0x232054u: goto label_232054;
        case 0x232058u: goto label_232058;
        case 0x23205cu: goto label_23205c;
        case 0x232060u: goto label_232060;
        case 0x232064u: goto label_232064;
        case 0x232068u: goto label_232068;
        case 0x23206cu: goto label_23206c;
        case 0x232070u: goto label_232070;
        case 0x232074u: goto label_232074;
        case 0x232078u: goto label_232078;
        case 0x23207cu: goto label_23207c;
        case 0x232080u: goto label_232080;
        case 0x232084u: goto label_232084;
        case 0x232088u: goto label_232088;
        case 0x23208cu: goto label_23208c;
        case 0x232090u: goto label_232090;
        case 0x232094u: goto label_232094;
        case 0x232098u: goto label_232098;
        case 0x23209cu: goto label_23209c;
        case 0x2320a0u: goto label_2320a0;
        case 0x2320a4u: goto label_2320a4;
        case 0x2320a8u: goto label_2320a8;
        case 0x2320acu: goto label_2320ac;
        case 0x2320b0u: goto label_2320b0;
        case 0x2320b4u: goto label_2320b4;
        case 0x2320b8u: goto label_2320b8;
        case 0x2320bcu: goto label_2320bc;
        case 0x2320c0u: goto label_2320c0;
        case 0x2320c4u: goto label_2320c4;
        case 0x2320c8u: goto label_2320c8;
        case 0x2320ccu: goto label_2320cc;
        case 0x2320d0u: goto label_2320d0;
        case 0x2320d4u: goto label_2320d4;
        case 0x2320d8u: goto label_2320d8;
        case 0x2320dcu: goto label_2320dc;
        case 0x2320e0u: goto label_2320e0;
        case 0x2320e4u: goto label_2320e4;
        case 0x2320e8u: goto label_2320e8;
        case 0x2320ecu: goto label_2320ec;
        case 0x2320f0u: goto label_2320f0;
        case 0x2320f4u: goto label_2320f4;
        case 0x2320f8u: goto label_2320f8;
        case 0x2320fcu: goto label_2320fc;
        case 0x232100u: goto label_232100;
        case 0x232104u: goto label_232104;
        case 0x232108u: goto label_232108;
        case 0x23210cu: goto label_23210c;
        case 0x232110u: goto label_232110;
        case 0x232114u: goto label_232114;
        case 0x232118u: goto label_232118;
        case 0x23211cu: goto label_23211c;
        case 0x232120u: goto label_232120;
        case 0x232124u: goto label_232124;
        case 0x232128u: goto label_232128;
        case 0x23212cu: goto label_23212c;
        case 0x232130u: goto label_232130;
        case 0x232134u: goto label_232134;
        case 0x232138u: goto label_232138;
        case 0x23213cu: goto label_23213c;
        case 0x232140u: goto label_232140;
        case 0x232144u: goto label_232144;
        case 0x232148u: goto label_232148;
        case 0x23214cu: goto label_23214c;
        case 0x232150u: goto label_232150;
        case 0x232154u: goto label_232154;
        case 0x232158u: goto label_232158;
        case 0x23215cu: goto label_23215c;
        case 0x232160u: goto label_232160;
        case 0x232164u: goto label_232164;
        case 0x232168u: goto label_232168;
        case 0x23216cu: goto label_23216c;
        case 0x232170u: goto label_232170;
        case 0x232174u: goto label_232174;
        case 0x232178u: goto label_232178;
        case 0x23217cu: goto label_23217c;
        case 0x232180u: goto label_232180;
        case 0x232184u: goto label_232184;
        case 0x232188u: goto label_232188;
        case 0x23218cu: goto label_23218c;
        case 0x232190u: goto label_232190;
        case 0x232194u: goto label_232194;
        case 0x232198u: goto label_232198;
        case 0x23219cu: goto label_23219c;
        case 0x2321a0u: goto label_2321a0;
        case 0x2321a4u: goto label_2321a4;
        case 0x2321a8u: goto label_2321a8;
        case 0x2321acu: goto label_2321ac;
        case 0x2321b0u: goto label_2321b0;
        case 0x2321b4u: goto label_2321b4;
        case 0x2321b8u: goto label_2321b8;
        case 0x2321bcu: goto label_2321bc;
        case 0x2321c0u: goto label_2321c0;
        case 0x2321c4u: goto label_2321c4;
        case 0x2321c8u: goto label_2321c8;
        case 0x2321ccu: goto label_2321cc;
        case 0x2321d0u: goto label_2321d0;
        case 0x2321d4u: goto label_2321d4;
        case 0x2321d8u: goto label_2321d8;
        case 0x2321dcu: goto label_2321dc;
        case 0x2321e0u: goto label_2321e0;
        case 0x2321e4u: goto label_2321e4;
        case 0x2321e8u: goto label_2321e8;
        case 0x2321ecu: goto label_2321ec;
        case 0x2321f0u: goto label_2321f0;
        case 0x2321f4u: goto label_2321f4;
        case 0x2321f8u: goto label_2321f8;
        case 0x2321fcu: goto label_2321fc;
        case 0x232200u: goto label_232200;
        case 0x232204u: goto label_232204;
        case 0x232208u: goto label_232208;
        case 0x23220cu: goto label_23220c;
        case 0x232210u: goto label_232210;
        case 0x232214u: goto label_232214;
        case 0x232218u: goto label_232218;
        case 0x23221cu: goto label_23221c;
        case 0x232220u: goto label_232220;
        case 0x232224u: goto label_232224;
        case 0x232228u: goto label_232228;
        case 0x23222cu: goto label_23222c;
        case 0x232230u: goto label_232230;
        case 0x232234u: goto label_232234;
        case 0x232238u: goto label_232238;
        case 0x23223cu: goto label_23223c;
        case 0x232240u: goto label_232240;
        case 0x232244u: goto label_232244;
        case 0x232248u: goto label_232248;
        case 0x23224cu: goto label_23224c;
        case 0x232250u: goto label_232250;
        case 0x232254u: goto label_232254;
        case 0x232258u: goto label_232258;
        case 0x23225cu: goto label_23225c;
        case 0x232260u: goto label_232260;
        case 0x232264u: goto label_232264;
        case 0x232268u: goto label_232268;
        case 0x23226cu: goto label_23226c;
        case 0x232270u: goto label_232270;
        case 0x232274u: goto label_232274;
        case 0x232278u: goto label_232278;
        case 0x23227cu: goto label_23227c;
        case 0x232280u: goto label_232280;
        case 0x232284u: goto label_232284;
        case 0x232288u: goto label_232288;
        case 0x23228cu: goto label_23228c;
        case 0x232290u: goto label_232290;
        case 0x232294u: goto label_232294;
        case 0x232298u: goto label_232298;
        case 0x23229cu: goto label_23229c;
        case 0x2322a0u: goto label_2322a0;
        case 0x2322a4u: goto label_2322a4;
        case 0x2322a8u: goto label_2322a8;
        case 0x2322acu: goto label_2322ac;
        case 0x2322b0u: goto label_2322b0;
        case 0x2322b4u: goto label_2322b4;
        case 0x2322b8u: goto label_2322b8;
        case 0x2322bcu: goto label_2322bc;
        case 0x2322c0u: goto label_2322c0;
        case 0x2322c4u: goto label_2322c4;
        case 0x2322c8u: goto label_2322c8;
        case 0x2322ccu: goto label_2322cc;
        case 0x2322d0u: goto label_2322d0;
        case 0x2322d4u: goto label_2322d4;
        case 0x2322d8u: goto label_2322d8;
        case 0x2322dcu: goto label_2322dc;
        case 0x2322e0u: goto label_2322e0;
        case 0x2322e4u: goto label_2322e4;
        case 0x2322e8u: goto label_2322e8;
        case 0x2322ecu: goto label_2322ec;
        case 0x2322f0u: goto label_2322f0;
        case 0x2322f4u: goto label_2322f4;
        case 0x2322f8u: goto label_2322f8;
        case 0x2322fcu: goto label_2322fc;
        case 0x232300u: goto label_232300;
        case 0x232304u: goto label_232304;
        case 0x232308u: goto label_232308;
        case 0x23230cu: goto label_23230c;
        case 0x232310u: goto label_232310;
        case 0x232314u: goto label_232314;
        case 0x232318u: goto label_232318;
        case 0x23231cu: goto label_23231c;
        case 0x232320u: goto label_232320;
        case 0x232324u: goto label_232324;
        case 0x232328u: goto label_232328;
        case 0x23232cu: goto label_23232c;
        case 0x232330u: goto label_232330;
        case 0x232334u: goto label_232334;
        case 0x232338u: goto label_232338;
        case 0x23233cu: goto label_23233c;
        case 0x232340u: goto label_232340;
        case 0x232344u: goto label_232344;
        case 0x232348u: goto label_232348;
        case 0x23234cu: goto label_23234c;
        case 0x232350u: goto label_232350;
        case 0x232354u: goto label_232354;
        case 0x232358u: goto label_232358;
        case 0x23235cu: goto label_23235c;
        case 0x232360u: goto label_232360;
        case 0x232364u: goto label_232364;
        case 0x232368u: goto label_232368;
        case 0x23236cu: goto label_23236c;
        default: break;
    }

    ctx->pc = 0x232000u;

label_232000:
    // 0x232000: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x232000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_232004:
    // 0x232004: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x232004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_232008:
    // 0x232008: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x232008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23200c:
    // 0x23200c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23200cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_232010:
    // 0x232010: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x232010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_232014:
    // 0x232014: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x232014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_232018:
    // 0x232018: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x232018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_23201c:
    // 0x23201c: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x23201cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
label_232020:
    // 0x232020: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x232020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
label_232024:
    // 0x232024: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x232024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
label_232028:
    // 0x232028: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x232028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_23202c:
    // 0x23202c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x23202cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_232030:
    // 0x232030: 0xc08c200  jal         func_230800
label_232034:
    if (ctx->pc == 0x232034u) {
        ctx->pc = 0x232038u;
        goto label_232038;
    }
    ctx->pc = 0x232030u;
    SET_GPR_U32(ctx, 31, 0x232038u);
    ctx->pc = 0x230800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230800u, 0x232030u, 0x232038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232038u;
label_232038:
    // 0x232038: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_23203c:
    if (ctx->pc == 0x23203Cu) {
        ctx->pc = 0x232040u;
        goto label_232040;
    }
    ctx->pc = 0x232038u;
    {
        const bool branch_taken_0x232038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232038) {
            ctx->pc = 0x23204Cu;
            goto label_23204c;
        }
    }
    ctx->pc = 0x232040u;
label_232040:
    // 0x232040: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x232040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232044:
    // 0x232044: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_232048:
    if (ctx->pc == 0x232048u) {
        ctx->pc = 0x23204Cu;
        goto label_23204c;
    }
    ctx->pc = 0x232044u;
    {
        const bool branch_taken_0x232044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232044) {
            ctx->pc = 0x232350u;
            goto label_232350;
        }
    }
    ctx->pc = 0x23204Cu;
label_23204c:
    // 0x23204c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x23204cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_232050:
    // 0x232050: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x232050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
label_232054:
    // 0x232054: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x232054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_232058:
    // 0x232058: 0x106200bc  beq         $v1, $v0, . + 4 + (0xBC << 2)
label_23205c:
    if (ctx->pc == 0x23205Cu) {
        ctx->pc = 0x232060u;
        goto label_232060;
    }
    ctx->pc = 0x232058u;
    {
        const bool branch_taken_0x232058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x232058) {
            ctx->pc = 0x23234Cu;
            goto label_23234c;
        }
    }
    ctx->pc = 0x232060u;
label_232060:
    // 0x232060: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x232060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_232064:
    // 0x232064: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_232068:
    if (ctx->pc == 0x232068u) {
        ctx->pc = 0x23206Cu;
        goto label_23206c;
    }
    ctx->pc = 0x232064u;
    {
        const bool branch_taken_0x232064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x232064) {
            ctx->pc = 0x232074u;
            goto label_232074;
        }
    }
    ctx->pc = 0x23206Cu;
label_23206c:
    // 0x23206c: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_232070:
    if (ctx->pc == 0x232070u) {
        ctx->pc = 0x232074u;
        goto label_232074;
    }
    ctx->pc = 0x23206Cu;
    {
        const bool branch_taken_0x23206c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23206c) {
            ctx->pc = 0x23234Cu;
            goto label_23234c;
        }
    }
    ctx->pc = 0x232074u;
label_232074:
    // 0x232074: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x232074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
label_232078:
    // 0x232078: 0x2484b950  addiu       $a0, $a0, -0x46B0
    ctx->pc = 0x232078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
label_23207c:
    // 0x23207c: 0xc107156  jal         func_41C558
label_232080:
    if (ctx->pc == 0x232080u) {
        ctx->pc = 0x232084u;
        goto label_232084;
    }
    ctx->pc = 0x23207Cu;
    SET_GPR_U32(ctx, 31, 0x232084u);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x23207Cu, 0x232084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232084u;
label_232084:
    // 0x232084: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x232084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_232088:
    // 0x232088: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x232088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23208c:
    // 0x23208c: 0xc107fa4  jal         func_41FE90
label_232090:
    if (ctx->pc == 0x232090u) {
        ctx->pc = 0x232094u;
        goto label_232094;
    }
    ctx->pc = 0x23208Cu;
    SET_GPR_U32(ctx, 31, 0x232094u);
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x23208Cu, 0x232094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232094u;
label_232094:
    // 0x232094: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x232094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_232098:
    // 0x232098: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x232098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_23209c:
    // 0x23209c: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
label_2320a0:
    if (ctx->pc == 0x2320A0u) {
        ctx->pc = 0x2320A4u;
        goto label_2320a4;
    }
    ctx->pc = 0x23209Cu;
    {
        const bool branch_taken_0x23209c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23209c) {
            ctx->pc = 0x232340u;
            goto label_232340;
        }
    }
    ctx->pc = 0x2320A4u;
label_2320a4:
    // 0x2320a4: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x2320a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_2320a8:
    // 0x2320a8: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x2320a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_2320ac:
    // 0x2320ac: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x2320acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_2320b0:
    // 0x2320b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2320b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2320b4:
    // 0x2320b4: 0x34430002  ori         $v1, $v0, 0x2
    ctx->pc = 0x2320b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2320b8:
    // 0x2320b8: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x2320b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_2320bc:
    // 0x2320bc: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x2320bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
label_2320c0:
    // 0x2320c0: 0x27b2006c  addiu       $s2, $sp, 0x6C
    ctx->pc = 0x2320c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_2320c4:
    // 0x2320c4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2320c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2320c8:
    // 0x2320c8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2320c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2320cc:
    // 0x2320cc: 0x2445f000  addiu       $a1, $v0, -0x1000
    ctx->pc = 0x2320ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
label_2320d0:
    // 0x2320d0: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x2320d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_2320d4:
    // 0x2320d4: 0xc08c248  jal         func_230920
label_2320d8:
    if (ctx->pc == 0x2320D8u) {
        ctx->pc = 0x2320DCu;
        goto label_2320dc;
    }
    ctx->pc = 0x2320D4u;
    SET_GPR_U32(ctx, 31, 0x2320DCu);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x2320D4u, 0x2320DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2320DCu;
label_2320dc:
    // 0x2320dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2320dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2320e0:
    // 0x2320e0: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x2320e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2320e4:
    // 0x2320e4: 0xc11c03c  jal         func_4700F0
label_2320e8:
    if (ctx->pc == 0x2320E8u) {
        ctx->pc = 0x2320ECu;
        goto label_2320ec;
    }
    ctx->pc = 0x2320E4u;
    SET_GPR_U32(ctx, 31, 0x2320ECu);
    ctx->pc = 0x4700F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4700F0u, 0x2320E4u, 0x2320ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2320ECu;
label_2320ec:
    // 0x2320ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2320ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2320f0:
    // 0x2320f0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2320f4:
    if (ctx->pc == 0x2320F4u) {
        ctx->pc = 0x2320F8u;
        goto label_2320f8;
    }
    ctx->pc = 0x2320F0u;
    {
        const bool branch_taken_0x2320f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2320f0) {
            ctx->pc = 0x232104u;
            goto label_232104;
        }
    }
    ctx->pc = 0x2320F8u;
label_2320f8:
    // 0x2320f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2320f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2320fc:
    // 0x2320fc: 0xc10822c  jal         func_4208B0
label_232100:
    if (ctx->pc == 0x232100u) {
        ctx->pc = 0x232104u;
        goto label_232104;
    }
    ctx->pc = 0x2320FCu;
    SET_GPR_U32(ctx, 31, 0x232104u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x2320FCu, 0x232104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232104u;
label_232104:
    // 0x232104: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x232104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_232108:
    // 0x232108: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
label_23210c:
    if (ctx->pc == 0x23210Cu) {
        ctx->pc = 0x232110u;
        goto label_232110;
    }
    ctx->pc = 0x232108u;
    {
        const bool branch_taken_0x232108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232108) {
            ctx->pc = 0x232300u;
            goto label_232300;
        }
    }
    ctx->pc = 0x232110u;
label_232110:
    // 0x232110: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x232110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_232114:
    // 0x232114: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x232114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_232118:
    // 0x232118: 0x2445f000  addiu       $a1, $v0, -0x1000
    ctx->pc = 0x232118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
label_23211c:
    // 0x23211c: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x23211cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_232120:
    // 0x232120: 0xc08c248  jal         func_230920
label_232124:
    if (ctx->pc == 0x232124u) {
        ctx->pc = 0x232128u;
        goto label_232128;
    }
    ctx->pc = 0x232120u;
    SET_GPR_U32(ctx, 31, 0x232128u);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x232120u, 0x232128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232128u;
label_232128:
    // 0x232128: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x232128u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_23212c:
    // 0x23212c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x23212cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_232130:
    // 0x232130: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x232130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_232134:
    // 0x232134: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x232134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_232138:
    // 0x232138: 0xc08c744  jal         func_231D10
label_23213c:
    if (ctx->pc == 0x23213Cu) {
        ctx->pc = 0x232140u;
        goto label_232140;
    }
    ctx->pc = 0x232138u;
    SET_GPR_U32(ctx, 31, 0x232140u);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x232138u, 0x232140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232140u;
label_232140:
    // 0x232140: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x232140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_232144:
    // 0x232144: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x232144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_232148:
    // 0x232148: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x232148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_23214c:
    // 0x23214c: 0xc08c6c8  jal         func_231B20
label_232150:
    if (ctx->pc == 0x232150u) {
        ctx->pc = 0x232154u;
        goto label_232154;
    }
    ctx->pc = 0x23214Cu;
    SET_GPR_U32(ctx, 31, 0x232154u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x23214Cu, 0x232154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232154u;
label_232154:
    // 0x232154: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x232154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_232158:
    // 0x232158: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_23215c:
    if (ctx->pc == 0x23215Cu) {
        ctx->pc = 0x232160u;
        goto label_232160;
    }
    ctx->pc = 0x232158u;
    {
        const bool branch_taken_0x232158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232158) {
            ctx->pc = 0x232178u;
            goto label_232178;
        }
    }
    ctx->pc = 0x232160u;
label_232160:
    // 0x232160: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x232160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232164:
    // 0x232164: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x232164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232168:
    // 0x232168: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x232168u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23216c:
    // 0x23216c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x23216cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_232170:
    // 0x232170: 0x1000000b  b           . + 4 + (0xB << 2)
label_232174:
    if (ctx->pc == 0x232174u) {
        ctx->pc = 0x232178u;
        goto label_232178;
    }
    ctx->pc = 0x232170u;
    {
        const bool branch_taken_0x232170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232170) {
            ctx->pc = 0x2321A0u;
            goto label_2321a0;
        }
    }
    ctx->pc = 0x232178u;
label_232178:
    // 0x232178: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x232178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_23217c:
    // 0x23217c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_232180:
    if (ctx->pc == 0x232180u) {
        ctx->pc = 0x232184u;
        goto label_232184;
    }
    ctx->pc = 0x23217Cu;
    {
        const bool branch_taken_0x23217c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23217c) {
            ctx->pc = 0x2321A0u;
            goto label_2321a0;
        }
    }
    ctx->pc = 0x232184u;
label_232184:
    // 0x232184: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x232184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_232188:
    // 0x232188: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x232188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_23218c:
    // 0x23218c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23218cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_232190:
    // 0x232190: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x232190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232194:
    // 0x232194: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x232194u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_232198:
    // 0x232198: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x232198u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_23219c:
    // 0x23219c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x23219cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2321a0:
    // 0x2321a0: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x2321a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_2321a4:
    // 0x2321a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2321a8:
    if (ctx->pc == 0x2321A8u) {
        ctx->pc = 0x2321ACu;
        goto label_2321ac;
    }
    ctx->pc = 0x2321A4u;
    {
        const bool branch_taken_0x2321a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2321a4) {
            ctx->pc = 0x2321C4u;
            goto label_2321c4;
        }
    }
    ctx->pc = 0x2321ACu;
label_2321ac:
    // 0x2321ac: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2321acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2321b0:
    // 0x2321b0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2321b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2321b4:
    // 0x2321b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2321b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2321b8:
    // 0x2321b8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2321b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_2321bc:
    // 0x2321bc: 0x1000000b  b           . + 4 + (0xB << 2)
label_2321c0:
    if (ctx->pc == 0x2321C0u) {
        ctx->pc = 0x2321C4u;
        goto label_2321c4;
    }
    ctx->pc = 0x2321BCu;
    {
        const bool branch_taken_0x2321bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2321bc) {
            ctx->pc = 0x2321ECu;
            goto label_2321ec;
        }
    }
    ctx->pc = 0x2321C4u;
label_2321c4:
    // 0x2321c4: 0x32020008  andi        $v0, $s0, 0x8
    ctx->pc = 0x2321c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_2321c8:
    // 0x2321c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2321cc:
    if (ctx->pc == 0x2321CCu) {
        ctx->pc = 0x2321D0u;
        goto label_2321d0;
    }
    ctx->pc = 0x2321C8u;
    {
        const bool branch_taken_0x2321c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2321c8) {
            ctx->pc = 0x2321ECu;
            goto label_2321ec;
        }
    }
    ctx->pc = 0x2321D0u;
label_2321d0:
    // 0x2321d0: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x2321d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2321d4:
    // 0x2321d4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2321d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2321d8:
    // 0x2321d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2321d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2321dc:
    // 0x2321dc: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2321dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2321e0:
    // 0x2321e0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2321e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_2321e4:
    // 0x2321e4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2321e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2321e8:
    // 0x2321e8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2321e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_2321ec:
    // 0x2321ec: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2321ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2321f0:
    // 0x2321f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2321f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2321f4:
    // 0x2321f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2321f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2321f8:
    // 0x2321f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2321fc:
    if (ctx->pc == 0x2321FCu) {
        ctx->pc = 0x232200u;
        goto label_232200;
    }
    ctx->pc = 0x2321F8u;
    {
        const bool branch_taken_0x2321f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2321f8) {
            ctx->pc = 0x232218u;
            goto label_232218;
        }
    }
    ctx->pc = 0x232200u;
label_232200:
    // 0x232200: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x232200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232204:
    // 0x232204: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x232204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232208:
    // 0x232208: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x232208u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_23220c:
    // 0x23220c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x23220cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_232210:
    // 0x232210: 0x1000000d  b           . + 4 + (0xD << 2)
label_232214:
    if (ctx->pc == 0x232214u) {
        ctx->pc = 0x232218u;
        goto label_232218;
    }
    ctx->pc = 0x232210u;
    {
        const bool branch_taken_0x232210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232210) {
            ctx->pc = 0x232248u;
            goto label_232248;
        }
    }
    ctx->pc = 0x232218u;
label_232218:
    // 0x232218: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x232218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_23221c:
    // 0x23221c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23221cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_232220:
    // 0x232220: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x232220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_232224:
    // 0x232224: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_232228:
    if (ctx->pc == 0x232228u) {
        ctx->pc = 0x23222Cu;
        goto label_23222c;
    }
    ctx->pc = 0x232224u;
    {
        const bool branch_taken_0x232224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232224) {
            ctx->pc = 0x232248u;
            goto label_232248;
        }
    }
    ctx->pc = 0x23222Cu;
label_23222c:
    // 0x23222c: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x23222cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_232230:
    // 0x232230: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x232230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_232234:
    // 0x232234: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x232234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_232238:
    // 0x232238: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x232238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23223c:
    // 0x23223c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x23223cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_232240:
    // 0x232240: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x232240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_232244:
    // 0x232244: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x232244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_232248:
    // 0x232248: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x232248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_23224c:
    // 0x23224c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23224cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_232250:
    // 0x232250: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x232250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_232254:
    // 0x232254: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_232258:
    if (ctx->pc == 0x232258u) {
        ctx->pc = 0x23225Cu;
        goto label_23225c;
    }
    ctx->pc = 0x232254u;
    {
        const bool branch_taken_0x232254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232254) {
            ctx->pc = 0x232274u;
            goto label_232274;
        }
    }
    ctx->pc = 0x23225Cu;
label_23225c:
    // 0x23225c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x23225cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232260:
    // 0x232260: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x232260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232264:
    // 0x232264: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x232264u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_232268:
    // 0x232268: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x232268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_23226c:
    // 0x23226c: 0x1000000d  b           . + 4 + (0xD << 2)
label_232270:
    if (ctx->pc == 0x232270u) {
        ctx->pc = 0x232274u;
        goto label_232274;
    }
    ctx->pc = 0x23226Cu;
    {
        const bool branch_taken_0x23226c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23226c) {
            ctx->pc = 0x2322A4u;
            goto label_2322a4;
        }
    }
    ctx->pc = 0x232274u;
label_232274:
    // 0x232274: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x232274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_232278:
    // 0x232278: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x232278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23227c:
    // 0x23227c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x23227cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_232280:
    // 0x232280: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_232284:
    if (ctx->pc == 0x232284u) {
        ctx->pc = 0x232288u;
        goto label_232288;
    }
    ctx->pc = 0x232280u;
    {
        const bool branch_taken_0x232280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232280) {
            ctx->pc = 0x2322A4u;
            goto label_2322a4;
        }
    }
    ctx->pc = 0x232288u;
label_232288:
    // 0x232288: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x232288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23228c:
    // 0x23228c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x23228cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_232290:
    // 0x232290: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x232290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_232294:
    // 0x232294: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x232294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232298:
    // 0x232298: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x232298u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_23229c:
    // 0x23229c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x23229cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2322a0:
    // 0x2322a0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2322a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_2322a4:
    // 0x2322a4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2322a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2322a8:
    // 0x2322a8: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2322a8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2322ac:
    // 0x2322ac: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2322acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2322b0:
    // 0x2322b0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2322b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2322b4:
    // 0x2322b4: 0x2445f000  addiu       $a1, $v0, -0x1000
    ctx->pc = 0x2322b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
label_2322b8:
    // 0x2322b8: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x2322b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_2322bc:
    // 0x2322bc: 0xc08c248  jal         func_230920
label_2322c0:
    if (ctx->pc == 0x2322C0u) {
        ctx->pc = 0x2322C4u;
        goto label_2322c4;
    }
    ctx->pc = 0x2322BCu;
    SET_GPR_U32(ctx, 31, 0x2322C4u);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x2322BCu, 0x2322C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2322C4u;
label_2322c4:
    // 0x2322c4: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x2322c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
label_2322c8:
    // 0x2322c8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2322c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2322cc:
    // 0x2322cc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2322ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2322d0:
    // 0x2322d0: 0x2445f000  addiu       $a1, $v0, -0x1000
    ctx->pc = 0x2322d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
label_2322d4:
    // 0x2322d4: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x2322d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_2322d8:
    // 0x2322d8: 0xc08c248  jal         func_230920
label_2322dc:
    if (ctx->pc == 0x2322DCu) {
        ctx->pc = 0x2322E0u;
        goto label_2322e0;
    }
    ctx->pc = 0x2322D8u;
    SET_GPR_U32(ctx, 31, 0x2322E0u);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x2322D8u, 0x2322E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2322E0u;
label_2322e0:
    // 0x2322e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2322e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2322e4:
    // 0x2322e4: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x2322e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2322e8:
    // 0x2322e8: 0xc7ad0064  lwc1        $f13, 0x64($sp)
    ctx->pc = 0x2322e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2322ec:
    // 0x2322ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2322ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2322f0:
    // 0x2322f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2322f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2322f4:
    // 0x2322f4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2322f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2322f8:
    // 0x2322f8: 0x320f809  jalr        $t9
label_2322fc:
    if (ctx->pc == 0x2322FCu) {
        ctx->pc = 0x232300u;
        goto label_232300;
    }
    ctx->pc = 0x2322F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232300u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2322F8u, 0x232300u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x232300u;
label_232300:
    // 0x232300: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x232300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_232304:
    // 0x232304: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x232304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_232308:
    // 0x232308: 0x2445f000  addiu       $a1, $v0, -0x1000
    ctx->pc = 0x232308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
label_23230c:
    // 0x23230c: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x23230cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_232310:
    // 0x232310: 0xc08c248  jal         func_230920
label_232314:
    if (ctx->pc == 0x232314u) {
        ctx->pc = 0x232318u;
        goto label_232318;
    }
    ctx->pc = 0x232310u;
    SET_GPR_U32(ctx, 31, 0x232318u);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x232310u, 0x232318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232318u;
label_232318:
    // 0x232318: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x232318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23231c:
    // 0x23231c: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x23231cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_232320:
    // 0x232320: 0xc11d3e4  jal         func_474F90
label_232324:
    if (ctx->pc == 0x232324u) {
        ctx->pc = 0x232328u;
        goto label_232328;
    }
    ctx->pc = 0x232320u;
    SET_GPR_U32(ctx, 31, 0x232328u);
    ctx->pc = 0x474F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x474F90u, 0x232320u, 0x232328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232328u;
label_232328:
    // 0x232328: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x232328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_23232c:
    // 0x23232c: 0xc10822c  jal         func_4208B0
label_232330:
    if (ctx->pc == 0x232330u) {
        ctx->pc = 0x232334u;
        goto label_232334;
    }
    ctx->pc = 0x23232Cu;
    SET_GPR_U32(ctx, 31, 0x232334u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x23232Cu, 0x232334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232334u;
label_232334:
    // 0x232334: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x232334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232338:
    // 0x232338: 0x10000005  b           . + 4 + (0x5 << 2)
label_23233c:
    if (ctx->pc == 0x23233Cu) {
        ctx->pc = 0x232340u;
        goto label_232340;
    }
    ctx->pc = 0x232338u;
    {
        const bool branch_taken_0x232338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232338) {
            ctx->pc = 0x232350u;
            goto label_232350;
        }
    }
    ctx->pc = 0x232340u;
label_232340:
    // 0x232340: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x232340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232344:
    // 0x232344: 0x10000002  b           . + 4 + (0x2 << 2)
label_232348:
    if (ctx->pc == 0x232348u) {
        ctx->pc = 0x23234Cu;
        goto label_23234c;
    }
    ctx->pc = 0x232344u;
    {
        const bool branch_taken_0x232344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232344) {
            ctx->pc = 0x232350u;
            goto label_232350;
        }
    }
    ctx->pc = 0x23234Cu;
label_23234c:
    // 0x23234c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23234cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232350:
    // 0x232350: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x232350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_232354:
    // 0x232354: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x232354u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_232358:
    // 0x232358: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x232358u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23235c:
    // 0x23235c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23235cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_232360:
    // 0x232360: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x232360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_232364:
    // 0x232364: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x232364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_232368:
    // 0x232368: 0x3e00008  jr          $ra
label_23236c:
    if (ctx->pc == 0x23236Cu) {
        ctx->pc = 0x232370u;
        goto label_fallthrough_0x232368;
    }
    ctx->pc = 0x232368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x232368:
    ctx->pc = 0x232370u;
}
