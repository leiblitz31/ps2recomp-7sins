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

// Function: sub_003222C0
// Address: 0x3222c0 - 0x322560
void sub_003222C0_0x3222c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003222C0_0x3222c0");
#endif

    switch (ctx->pc) {
        case 0x3222c0u: goto label_3222c0;
        case 0x3222c4u: goto label_3222c4;
        case 0x3222c8u: goto label_3222c8;
        case 0x3222ccu: goto label_3222cc;
        case 0x3222d0u: goto label_3222d0;
        case 0x3222d4u: goto label_3222d4;
        case 0x3222d8u: goto label_3222d8;
        case 0x3222dcu: goto label_3222dc;
        case 0x3222e0u: goto label_3222e0;
        case 0x3222e4u: goto label_3222e4;
        case 0x3222e8u: goto label_3222e8;
        case 0x3222ecu: goto label_3222ec;
        case 0x3222f0u: goto label_3222f0;
        case 0x3222f4u: goto label_3222f4;
        case 0x3222f8u: goto label_3222f8;
        case 0x3222fcu: goto label_3222fc;
        case 0x322300u: goto label_322300;
        case 0x322304u: goto label_322304;
        case 0x322308u: goto label_322308;
        case 0x32230cu: goto label_32230c;
        case 0x322310u: goto label_322310;
        case 0x322314u: goto label_322314;
        case 0x322318u: goto label_322318;
        case 0x32231cu: goto label_32231c;
        case 0x322320u: goto label_322320;
        case 0x322324u: goto label_322324;
        case 0x322328u: goto label_322328;
        case 0x32232cu: goto label_32232c;
        case 0x322330u: goto label_322330;
        case 0x322334u: goto label_322334;
        case 0x322338u: goto label_322338;
        case 0x32233cu: goto label_32233c;
        case 0x322340u: goto label_322340;
        case 0x322344u: goto label_322344;
        case 0x322348u: goto label_322348;
        case 0x32234cu: goto label_32234c;
        case 0x322350u: goto label_322350;
        case 0x322354u: goto label_322354;
        case 0x322358u: goto label_322358;
        case 0x32235cu: goto label_32235c;
        case 0x322360u: goto label_322360;
        case 0x322364u: goto label_322364;
        case 0x322368u: goto label_322368;
        case 0x32236cu: goto label_32236c;
        case 0x322370u: goto label_322370;
        case 0x322374u: goto label_322374;
        case 0x322378u: goto label_322378;
        case 0x32237cu: goto label_32237c;
        case 0x322380u: goto label_322380;
        case 0x322384u: goto label_322384;
        case 0x322388u: goto label_322388;
        case 0x32238cu: goto label_32238c;
        case 0x322390u: goto label_322390;
        case 0x322394u: goto label_322394;
        case 0x322398u: goto label_322398;
        case 0x32239cu: goto label_32239c;
        case 0x3223a0u: goto label_3223a0;
        case 0x3223a4u: goto label_3223a4;
        case 0x3223a8u: goto label_3223a8;
        case 0x3223acu: goto label_3223ac;
        case 0x3223b0u: goto label_3223b0;
        case 0x3223b4u: goto label_3223b4;
        case 0x3223b8u: goto label_3223b8;
        case 0x3223bcu: goto label_3223bc;
        case 0x3223c0u: goto label_3223c0;
        case 0x3223c4u: goto label_3223c4;
        case 0x3223c8u: goto label_3223c8;
        case 0x3223ccu: goto label_3223cc;
        case 0x3223d0u: goto label_3223d0;
        case 0x3223d4u: goto label_3223d4;
        case 0x3223d8u: goto label_3223d8;
        case 0x3223dcu: goto label_3223dc;
        case 0x3223e0u: goto label_3223e0;
        case 0x3223e4u: goto label_3223e4;
        case 0x3223e8u: goto label_3223e8;
        case 0x3223ecu: goto label_3223ec;
        case 0x3223f0u: goto label_3223f0;
        case 0x3223f4u: goto label_3223f4;
        case 0x3223f8u: goto label_3223f8;
        case 0x3223fcu: goto label_3223fc;
        case 0x322400u: goto label_322400;
        case 0x322404u: goto label_322404;
        case 0x322408u: goto label_322408;
        case 0x32240cu: goto label_32240c;
        case 0x322410u: goto label_322410;
        case 0x322414u: goto label_322414;
        case 0x322418u: goto label_322418;
        case 0x32241cu: goto label_32241c;
        case 0x322420u: goto label_322420;
        case 0x322424u: goto label_322424;
        case 0x322428u: goto label_322428;
        case 0x32242cu: goto label_32242c;
        case 0x322430u: goto label_322430;
        case 0x322434u: goto label_322434;
        case 0x322438u: goto label_322438;
        case 0x32243cu: goto label_32243c;
        case 0x322440u: goto label_322440;
        case 0x322444u: goto label_322444;
        case 0x322448u: goto label_322448;
        case 0x32244cu: goto label_32244c;
        case 0x322450u: goto label_322450;
        case 0x322454u: goto label_322454;
        case 0x322458u: goto label_322458;
        case 0x32245cu: goto label_32245c;
        case 0x322460u: goto label_322460;
        case 0x322464u: goto label_322464;
        case 0x322468u: goto label_322468;
        case 0x32246cu: goto label_32246c;
        case 0x322470u: goto label_322470;
        case 0x322474u: goto label_322474;
        case 0x322478u: goto label_322478;
        case 0x32247cu: goto label_32247c;
        case 0x322480u: goto label_322480;
        case 0x322484u: goto label_322484;
        case 0x322488u: goto label_322488;
        case 0x32248cu: goto label_32248c;
        case 0x322490u: goto label_322490;
        case 0x322494u: goto label_322494;
        case 0x322498u: goto label_322498;
        case 0x32249cu: goto label_32249c;
        case 0x3224a0u: goto label_3224a0;
        case 0x3224a4u: goto label_3224a4;
        case 0x3224a8u: goto label_3224a8;
        case 0x3224acu: goto label_3224ac;
        case 0x3224b0u: goto label_3224b0;
        case 0x3224b4u: goto label_3224b4;
        case 0x3224b8u: goto label_3224b8;
        case 0x3224bcu: goto label_3224bc;
        case 0x3224c0u: goto label_3224c0;
        case 0x3224c4u: goto label_3224c4;
        case 0x3224c8u: goto label_3224c8;
        case 0x3224ccu: goto label_3224cc;
        case 0x3224d0u: goto label_3224d0;
        case 0x3224d4u: goto label_3224d4;
        case 0x3224d8u: goto label_3224d8;
        case 0x3224dcu: goto label_3224dc;
        case 0x3224e0u: goto label_3224e0;
        case 0x3224e4u: goto label_3224e4;
        case 0x3224e8u: goto label_3224e8;
        case 0x3224ecu: goto label_3224ec;
        case 0x3224f0u: goto label_3224f0;
        case 0x3224f4u: goto label_3224f4;
        case 0x3224f8u: goto label_3224f8;
        case 0x3224fcu: goto label_3224fc;
        case 0x322500u: goto label_322500;
        case 0x322504u: goto label_322504;
        case 0x322508u: goto label_322508;
        case 0x32250cu: goto label_32250c;
        case 0x322510u: goto label_322510;
        case 0x322514u: goto label_322514;
        case 0x322518u: goto label_322518;
        case 0x32251cu: goto label_32251c;
        case 0x322520u: goto label_322520;
        case 0x322524u: goto label_322524;
        case 0x322528u: goto label_322528;
        case 0x32252cu: goto label_32252c;
        case 0x322530u: goto label_322530;
        case 0x322534u: goto label_322534;
        case 0x322538u: goto label_322538;
        case 0x32253cu: goto label_32253c;
        case 0x322540u: goto label_322540;
        case 0x322544u: goto label_322544;
        case 0x322548u: goto label_322548;
        case 0x32254cu: goto label_32254c;
        case 0x322550u: goto label_322550;
        case 0x322554u: goto label_322554;
        case 0x322558u: goto label_322558;
        case 0x32255cu: goto label_32255c;
        default: break;
    }

    ctx->pc = 0x3222c0u;

label_3222c0:
    // 0x3222c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3222c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3222c4:
    // 0x3222c4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3222c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3222c8:
    // 0x3222c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3222c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3222cc:
    // 0x3222cc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3222ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3222d0:
    // 0x3222d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3222d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3222d4:
    // 0x3222d4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3222d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3222d8:
    // 0x3222d8: 0x2444b1a8  addiu       $a0, $v0, -0x4E58
    ctx->pc = 0x3222d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947240));
label_3222dc:
    // 0x3222dc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3222dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3222e0:
    // 0x3222e0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3222e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3222e4:
    // 0x3222e4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3222e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3222e8:
    // 0x3222e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3222e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3222ec:
    // 0x3222ec: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3222ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3222f0:
    // 0x3222f0: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x3222f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3222f4:
    // 0x3222f4: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x3222f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3222f8:
    // 0x3222f8: 0x1620002a  bnez        $s1, . + 4 + (0x2A << 2)
label_3222fc:
    if (ctx->pc == 0x3222FCu) {
        ctx->pc = 0x3222FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3222F8u;
        // 0x3222fc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322300u;
        goto label_322300;
    }
    ctx->pc = 0x3222F8u;
    {
        const bool branch_taken_0x3222f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3222FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3222F8u;
        // 0x3222fc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3222f8) {
            ctx->pc = 0x3223A4u;
            goto label_3223a4;
        }
    }
    ctx->pc = 0x322300u;
label_322300:
    // 0x322300: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x322300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_322304:
    // 0x322304: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x322304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_322308:
    // 0x322308: 0x8c62e998  lw          $v0, -0x1668($v1)
    ctx->pc = 0x322308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961560)));
label_32230c:
    // 0x32230c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x32230cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_322310:
    // 0x322310: 0x40f809  jalr        $v0
label_322314:
    if (ctx->pc == 0x322314u) {
        ctx->pc = 0x322314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322310u;
        // 0x322314: 0x34a50112  ori         $a1, $a1, 0x112 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)274);
        ctx->in_delay_slot = false;
        ctx->pc = 0x322318u;
        goto label_322318;
    }
    ctx->pc = 0x322310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x322318u);
        ctx->pc = 0x322314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322310u;
        // 0x322314: 0x34a50112  ori         $a1, $a1, 0x112 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)274);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322310u, 0x322318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x322318u;
label_322318:
    // 0x322318: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x322318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32231c:
    // 0x32231c: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
label_322320:
    if (ctx->pc == 0x322320u) {
        ctx->pc = 0x322320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32231Cu;
        // 0x322320: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322324u;
        goto label_322324;
    }
    ctx->pc = 0x32231Cu;
    {
        const bool branch_taken_0x32231c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x322320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32231Cu;
        // 0x322320: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32231c) {
            ctx->pc = 0x322380u;
            goto label_322380;
        }
    }
    ctx->pc = 0x322324u;
label_322324:
    // 0x322324: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x322324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_322328:
    // 0x322328: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x322328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32232c:
    // 0x32232c: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x32232cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
label_322330:
    // 0x322330: 0x24632608  addiu       $v1, $v1, 0x2608
    ctx->pc = 0x322330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9736));
label_322334:
    // 0x322334: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x322334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_322338:
    // 0x322338: 0x24a2003c  addiu       $v0, $a1, 0x3C
    ctx->pc = 0x322338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
label_32233c:
    // 0x32233c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x32233cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_322340:
    // 0x322340: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x322340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_322344:
    // 0x322344: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x322344u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
label_322348:
    // 0x322348: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x322348u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_32234c:
    // 0x32234c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x32234cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_322350:
    // 0x322350: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x322350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_322354:
    // 0x322354: 0xaca0003c  sw          $zero, 0x3C($a1)
    ctx->pc = 0x322354u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
label_322358:
    // 0x322358: 0xac40ffdc  sw          $zero, -0x24($v0)
    ctx->pc = 0x322358u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967260), GPR_U32(ctx, 0));
label_32235c:
    // 0x32235c: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x32235cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
label_322360:
    // 0x322360: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x322360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
label_322364:
    // 0x322364: 0xac40fff4  sw          $zero, -0xC($v0)
    ctx->pc = 0x322364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 0));
label_322368:
    // 0x322368: 0xac40fff0  sw          $zero, -0x10($v0)
    ctx->pc = 0x322368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), GPR_U32(ctx, 0));
label_32236c:
    // 0x32236c: 0xac40ffec  sw          $zero, -0x14($v0)
    ctx->pc = 0x32236cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967276), GPR_U32(ctx, 0));
label_322370:
    // 0x322370: 0xac40ffe8  sw          $zero, -0x18($v0)
    ctx->pc = 0x322370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967272), GPR_U32(ctx, 0));
label_322374:
    // 0x322374: 0xac40ffe4  sw          $zero, -0x1C($v0)
    ctx->pc = 0x322374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967268), GPR_U32(ctx, 0));
label_322378:
    // 0x322378: 0xac40ffe0  sw          $zero, -0x20($v0)
    ctx->pc = 0x322378u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967264), GPR_U32(ctx, 0));
label_32237c:
    // 0x32237c: 0x0  nop
    ctx->pc = 0x32237cu;
    // NOP
label_322380:
    // 0x322380: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x322380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_322384:
    // 0x322384: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_322388:
    if (ctx->pc == 0x322388u) {
        ctx->pc = 0x322388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322384u;
        // 0x322388: 0xacd10000  sw          $s1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32238Cu;
        goto label_32238c;
    }
    ctx->pc = 0x322384u;
    {
        const bool branch_taken_0x322384 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x322388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322384u;
        // 0x322388: 0xacd10000  sw          $s1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322384) {
            ctx->pc = 0x3223E4u;
            goto label_3223e4;
        }
    }
    ctx->pc = 0x32238Cu;
label_32238c:
    // 0x32238c: 0x8e500018  lw          $s0, 0x18($s2)
    ctx->pc = 0x32238cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_322390:
    // 0x322390: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_322394:
    if (ctx->pc == 0x322394u) {
        ctx->pc = 0x322394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322390u;
        // 0x322394: 0xae300018  sw          $s0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322398u;
        goto label_322398;
    }
    ctx->pc = 0x322390u;
    {
        const bool branch_taken_0x322390 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x322390) {
            ctx->pc = 0x322394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322390u;
            // 0x322394: 0xae300018  sw          $s0, 0x18($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3223A4u;
            goto label_3223a4;
        }
    }
    ctx->pc = 0x322398u;
label_322398:
    // 0x322398: 0xc0e3444  jal         func_38D110
label_32239c:
    if (ctx->pc == 0x32239Cu) {
        ctx->pc = 0x32239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322398u;
        // 0x32239c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3223A0u;
        goto label_3223a0;
    }
    ctx->pc = 0x322398u;
    SET_GPR_U32(ctx, 31, 0x3223A0u);
    ctx->pc = 0x32239Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322398u;
    // 0x32239c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D110u, 0x322398u, 0x3223A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3223A0u;
label_3223a0:
    // 0x3223a0: 0xae300018  sw          $s0, 0x18($s1)
    ctx->pc = 0x3223a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
label_3223a4:
    // 0x3223a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3223a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3223a8:
    // 0x3223a8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_3223ac:
    if (ctx->pc == 0x3223ACu) {
        ctx->pc = 0x3223ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3223A8u;
        // 0x3223ac: 0xae330008  sw          $s3, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3223B0u;
        goto label_3223b0;
    }
    ctx->pc = 0x3223A8u;
    {
        const bool branch_taken_0x3223a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3223ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3223A8u;
        // 0x3223ac: 0xae330008  sw          $s3, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3223a8) {
            ctx->pc = 0x3223E0u;
            goto label_3223e0;
        }
    }
    ctx->pc = 0x3223B0u;
label_3223b0:
    // 0x3223b0: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x3223b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_3223b4:
    // 0x3223b4: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x3223b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_3223b8:
    // 0x3223b8: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x3223b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_3223bc:
    // 0x3223bc: 0x24422730  addiu       $v0, $v0, 0x2730
    ctx->pc = 0x3223bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10032));
label_3223c0:
    // 0x3223c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3223c4:
    if (ctx->pc == 0x3223C4u) {
        ctx->pc = 0x3223C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3223C0u;
        // 0x3223c4: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3223C8u;
        goto label_3223c8;
    }
    ctx->pc = 0x3223C0u;
    {
        const bool branch_taken_0x3223c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3223C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3223C0u;
        // 0x3223c4: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3223c0) {
            ctx->pc = 0x3223D8u;
            goto label_3223d8;
        }
    }
    ctx->pc = 0x3223C8u;
label_3223c8:
    // 0x3223c8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3223c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_3223cc:
    // 0x3223cc: 0x24429850  addiu       $v0, $v0, -0x67B0
    ctx->pc = 0x3223ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940752));
label_3223d0:
    // 0x3223d0: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x3223d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
label_3223d4:
    // 0x3223d4: 0x0  nop
    ctx->pc = 0x3223d4u;
    // NOP
label_3223d8:
    // 0x3223d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3223d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3223dc:
    // 0x3223dc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3223dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3223e0:
    // 0x3223e0: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x3223e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3223e4:
    // 0x3223e4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3223e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3223e8:
    // 0x3223e8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3223e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3223ec:
    // 0x3223ec: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3223ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3223f0:
    // 0x3223f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3223f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3223f4:
    // 0x3223f4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3223f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3223f8:
    // 0x3223f8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3223f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3223fc:
    // 0x3223fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3223fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_322400:
    // 0x322400: 0x3e00008  jr          $ra
label_322404:
    if (ctx->pc == 0x322404u) {
        ctx->pc = 0x322404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322400u;
        // 0x322404: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322408u;
        goto label_322408;
    }
    ctx->pc = 0x322400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322400u;
        // 0x322404: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322408u;
label_322408:
    // 0x322408: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x322408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_32240c:
    // 0x32240c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x32240cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_322410:
    // 0x322410: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x322410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_322414:
    // 0x322414: 0x8c62b1ac  lw          $v0, -0x4E54($v1)
    ctx->pc = 0x322414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947244)));
label_322418:
    // 0x322418: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x322418u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32241c:
    // 0x32241c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x32241cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_322420:
    // 0x322420: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x322420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_322424:
    // 0x322424: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x322424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_322428:
    // 0x322428: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x322428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_32242c:
    // 0x32242c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32242cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_322430:
    // 0x322430: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x322430u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_322434:
    // 0x322434: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
label_322438:
    if (ctx->pc == 0x322438u) {
        ctx->pc = 0x322438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322434u;
        // 0x322438: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32243Cu;
        goto label_32243c;
    }
    ctx->pc = 0x322434u;
    {
        const bool branch_taken_0x322434 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x322438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322434u;
        // 0x322438: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322434) {
            ctx->pc = 0x322494u;
            goto label_322494;
        }
    }
    ctx->pc = 0x32243Cu;
label_32243c:
    // 0x32243c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x32243cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_322440:
    // 0x322440: 0x40f809  jalr        $v0
label_322444:
    if (ctx->pc == 0x322444u) {
        ctx->pc = 0x322448u;
        goto label_322448;
    }
    ctx->pc = 0x322440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x322448u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322440u, 0x322448u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x322448u;
label_322448:
    // 0x322448: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_32244c:
    if (ctx->pc == 0x32244Cu) {
        ctx->pc = 0x32244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322448u;
        // 0x32244c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322450u;
        goto label_322450;
    }
    ctx->pc = 0x322448u;
    {
        const bool branch_taken_0x322448 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x32244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322448u;
        // 0x32244c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322448) {
            ctx->pc = 0x322458u;
            goto label_322458;
        }
    }
    ctx->pc = 0x322450u;
label_322450:
    // 0x322450: 0x10000004  b           . + 4 + (0x4 << 2)
label_322454:
    if (ctx->pc == 0x322454u) {
        ctx->pc = 0x322454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322450u;
        // 0x322454: 0x8e510014  lw          $s1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322458u;
        goto label_322458;
    }
    ctx->pc = 0x322450u;
    {
        const bool branch_taken_0x322450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322450u;
        // 0x322454: 0x8e510014  lw          $s1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322450) {
            ctx->pc = 0x322464u;
            goto label_322464;
        }
    }
    ctx->pc = 0x322458u;
label_322458:
    // 0x322458: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x322458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_32245c:
    // 0x32245c: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x32245cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
label_322460:
    // 0x322460: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x322460u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_322464:
    // 0x322464: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x322464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_322468:
    // 0x322468: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x322468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_32246c:
    // 0x32246c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x32246cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_322470:
    // 0x322470: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x322470u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_322474:
    // 0x322474: 0x12030004  beq         $s0, $v1, . + 4 + (0x4 << 2)
label_322478:
    if (ctx->pc == 0x322478u) {
        ctx->pc = 0x322478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322474u;
        // 0x322478: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32247Cu;
        goto label_32247c;
    }
    ctx->pc = 0x322474u;
    {
        const bool branch_taken_0x322474 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x322478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322474u;
        // 0x322478: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322474) {
            ctx->pc = 0x322488u;
            goto label_322488;
        }
    }
    ctx->pc = 0x32247Cu;
label_32247c:
    // 0x32247c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32247cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322480:
    // 0x322480: 0xc0e2836  jal         func_38A0D8
label_322484:
    if (ctx->pc == 0x322484u) {
        ctx->pc = 0x322484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322480u;
        // 0x322484: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322488u;
        goto label_322488;
    }
    ctx->pc = 0x322480u;
    SET_GPR_U32(ctx, 31, 0x322488u);
    ctx->pc = 0x322484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322480u;
    // 0x322484: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A0D8u, 0x322480u, 0x322488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322488u;
label_322488:
    // 0x322488: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x322488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32248c:
    // 0x32248c: 0xae510014  sw          $s1, 0x14($s2)
    ctx->pc = 0x32248cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 17));
label_322490:
    // 0x322490: 0x10280a  movz        $a1, $zero, $s0
    ctx->pc = 0x322490u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_322494:
    // 0x322494: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x322494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_322498:
    // 0x322498: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x322498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32249c:
    // 0x32249c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x32249cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3224a0:
    // 0x3224a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3224a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3224a4:
    // 0x3224a4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3224a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3224a8:
    // 0x3224a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3224a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3224ac:
    // 0x3224ac: 0x3e00008  jr          $ra
label_3224b0:
    if (ctx->pc == 0x3224B0u) {
        ctx->pc = 0x3224B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3224ACu;
        // 0x3224b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3224B4u;
        goto label_3224b4;
    }
    ctx->pc = 0x3224ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3224B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3224ACu;
        // 0x3224b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3224ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3224B4u;
label_3224b4:
    // 0x3224b4: 0x0  nop
    ctx->pc = 0x3224b4u;
    // NOP
label_3224b8:
    // 0x3224b8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3224b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3224bc:
    // 0x3224bc: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3224bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3224c0:
    // 0x3224c0: 0x8c62b1ac  lw          $v0, -0x4E54($v1)
    ctx->pc = 0x3224c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947244)));
label_3224c4:
    // 0x3224c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3224c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3224c8:
    // 0x3224c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3224c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3224cc:
    // 0x3224cc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3224ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3224d0:
    // 0x3224d0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3224d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3224d4:
    // 0x3224d4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3224d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3224d8:
    // 0x3224d8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3224d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3224dc:
    // 0x3224dc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3224dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3224e0:
    // 0x3224e0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3224e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3224e4:
    // 0x3224e4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3224e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3224e8:
    // 0x3224e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3224e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3224ec:
    // 0x3224ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3224ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3224f0:
    // 0x3224f0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3224f4:
    if (ctx->pc == 0x3224F4u) {
        ctx->pc = 0x3224F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3224F0u;
        // 0x3224f4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3224F8u;
        goto label_3224f8;
    }
    ctx->pc = 0x3224F0u;
    {
        const bool branch_taken_0x3224f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3224F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3224F0u;
        // 0x3224f4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3224f0) {
            ctx->pc = 0x322538u;
            goto label_322538;
        }
    }
    ctx->pc = 0x3224F8u;
label_3224f8:
    // 0x3224f8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3224f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3224fc:
    // 0x3224fc: 0x24500018  addiu       $s0, $v0, 0x18
    ctx->pc = 0x3224fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_322500:
    // 0x322500: 0x10000002  b           . + 4 + (0x2 << 2)
label_322504:
    if (ctx->pc == 0x322504u) {
        ctx->pc = 0x322504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322500u;
        // 0x322504: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322508u;
        goto label_322508;
    }
    ctx->pc = 0x322500u;
    {
        const bool branch_taken_0x322500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322500u;
        // 0x322504: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322500) {
            ctx->pc = 0x32250Cu;
            goto label_32250c;
        }
    }
    ctx->pc = 0x322508u;
label_322508:
    // 0x322508: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x322508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32250c:
    // 0x32250c: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x32250cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
label_322510:
    // 0x322510: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_322514:
    if (ctx->pc == 0x322514u) {
        ctx->pc = 0x322514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322510u;
        // 0x322514: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322518u;
        goto label_322518;
    }
    ctx->pc = 0x322510u;
    {
        const bool branch_taken_0x322510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322510u;
        // 0x322514: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322510) {
            ctx->pc = 0x32253Cu;
            goto label_32253c;
        }
    }
    ctx->pc = 0x322518u;
label_322518:
    // 0x322518: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x322518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32251c:
    // 0x32251c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_322520:
    if (ctx->pc == 0x322520u) {
        ctx->pc = 0x322524u;
        goto label_322524;
    }
    ctx->pc = 0x32251Cu;
    {
        const bool branch_taken_0x32251c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32251c) {
            ctx->pc = 0x322530u;
            goto label_322530;
        }
    }
    ctx->pc = 0x322524u;
label_322524:
    // 0x322524: 0x260f809  jalr        $s3
label_322528:
    if (ctx->pc == 0x322528u) {
        ctx->pc = 0x322528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322524u;
        // 0x322528: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32252Cu;
        goto label_32252c;
    }
    ctx->pc = 0x322524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x32252Cu);
        ctx->pc = 0x322528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322524u;
        // 0x322528: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322524u, 0x32252Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32252Cu;
label_32252c:
    // 0x32252c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x32252cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322530:
    // 0x322530: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_322534:
    if (ctx->pc == 0x322534u) {
        ctx->pc = 0x322534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322530u;
        // 0x322534: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322538u;
        goto label_322538;
    }
    ctx->pc = 0x322530u;
    {
        const bool branch_taken_0x322530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x322534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322530u;
        // 0x322534: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322530) {
            ctx->pc = 0x322508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322508;
        }
    }
    ctx->pc = 0x322538u;
label_322538:
    // 0x322538: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x322538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32253c:
    // 0x32253c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x32253cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_322540:
    // 0x322540: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x322540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_322544:
    // 0x322544: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x322544u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_322548:
    // 0x322548: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x322548u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32254c:
    // 0x32254c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x32254cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_322550:
    // 0x322550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x322550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_322554:
    // 0x322554: 0x3e00008  jr          $ra
label_322558:
    if (ctx->pc == 0x322558u) {
        ctx->pc = 0x322558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322554u;
        // 0x322558: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32255Cu;
        goto label_32255c;
    }
    ctx->pc = 0x322554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322554u;
        // 0x322558: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32255Cu;
label_32255c:
    // 0x32255c: 0x0  nop
    ctx->pc = 0x32255cu;
    // NOP
    ctx->pc = 0x322560u;
}
