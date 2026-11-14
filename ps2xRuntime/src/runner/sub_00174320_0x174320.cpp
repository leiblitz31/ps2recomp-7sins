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

// Function: sub_00174320
// Address: 0x174320 - 0x174540
void sub_00174320_0x174320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174320_0x174320");
#endif

    switch (ctx->pc) {
        case 0x174320u: goto label_174320;
        case 0x174324u: goto label_174324;
        case 0x174328u: goto label_174328;
        case 0x17432cu: goto label_17432c;
        case 0x174330u: goto label_174330;
        case 0x174334u: goto label_174334;
        case 0x174338u: goto label_174338;
        case 0x17433cu: goto label_17433c;
        case 0x174340u: goto label_174340;
        case 0x174344u: goto label_174344;
        case 0x174348u: goto label_174348;
        case 0x17434cu: goto label_17434c;
        case 0x174350u: goto label_174350;
        case 0x174354u: goto label_174354;
        case 0x174358u: goto label_174358;
        case 0x17435cu: goto label_17435c;
        case 0x174360u: goto label_174360;
        case 0x174364u: goto label_174364;
        case 0x174368u: goto label_174368;
        case 0x17436cu: goto label_17436c;
        case 0x174370u: goto label_174370;
        case 0x174374u: goto label_174374;
        case 0x174378u: goto label_174378;
        case 0x17437cu: goto label_17437c;
        case 0x174380u: goto label_174380;
        case 0x174384u: goto label_174384;
        case 0x174388u: goto label_174388;
        case 0x17438cu: goto label_17438c;
        case 0x174390u: goto label_174390;
        case 0x174394u: goto label_174394;
        case 0x174398u: goto label_174398;
        case 0x17439cu: goto label_17439c;
        case 0x1743a0u: goto label_1743a0;
        case 0x1743a4u: goto label_1743a4;
        case 0x1743a8u: goto label_1743a8;
        case 0x1743acu: goto label_1743ac;
        case 0x1743b0u: goto label_1743b0;
        case 0x1743b4u: goto label_1743b4;
        case 0x1743b8u: goto label_1743b8;
        case 0x1743bcu: goto label_1743bc;
        case 0x1743c0u: goto label_1743c0;
        case 0x1743c4u: goto label_1743c4;
        case 0x1743c8u: goto label_1743c8;
        case 0x1743ccu: goto label_1743cc;
        case 0x1743d0u: goto label_1743d0;
        case 0x1743d4u: goto label_1743d4;
        case 0x1743d8u: goto label_1743d8;
        case 0x1743dcu: goto label_1743dc;
        case 0x1743e0u: goto label_1743e0;
        case 0x1743e4u: goto label_1743e4;
        case 0x1743e8u: goto label_1743e8;
        case 0x1743ecu: goto label_1743ec;
        case 0x1743f0u: goto label_1743f0;
        case 0x1743f4u: goto label_1743f4;
        case 0x1743f8u: goto label_1743f8;
        case 0x1743fcu: goto label_1743fc;
        case 0x174400u: goto label_174400;
        case 0x174404u: goto label_174404;
        case 0x174408u: goto label_174408;
        case 0x17440cu: goto label_17440c;
        case 0x174410u: goto label_174410;
        case 0x174414u: goto label_174414;
        case 0x174418u: goto label_174418;
        case 0x17441cu: goto label_17441c;
        case 0x174420u: goto label_174420;
        case 0x174424u: goto label_174424;
        case 0x174428u: goto label_174428;
        case 0x17442cu: goto label_17442c;
        case 0x174430u: goto label_174430;
        case 0x174434u: goto label_174434;
        case 0x174438u: goto label_174438;
        case 0x17443cu: goto label_17443c;
        case 0x174440u: goto label_174440;
        case 0x174444u: goto label_174444;
        case 0x174448u: goto label_174448;
        case 0x17444cu: goto label_17444c;
        case 0x174450u: goto label_174450;
        case 0x174454u: goto label_174454;
        case 0x174458u: goto label_174458;
        case 0x17445cu: goto label_17445c;
        case 0x174460u: goto label_174460;
        case 0x174464u: goto label_174464;
        case 0x174468u: goto label_174468;
        case 0x17446cu: goto label_17446c;
        case 0x174470u: goto label_174470;
        case 0x174474u: goto label_174474;
        case 0x174478u: goto label_174478;
        case 0x17447cu: goto label_17447c;
        case 0x174480u: goto label_174480;
        case 0x174484u: goto label_174484;
        case 0x174488u: goto label_174488;
        case 0x17448cu: goto label_17448c;
        case 0x174490u: goto label_174490;
        case 0x174494u: goto label_174494;
        case 0x174498u: goto label_174498;
        case 0x17449cu: goto label_17449c;
        case 0x1744a0u: goto label_1744a0;
        case 0x1744a4u: goto label_1744a4;
        case 0x1744a8u: goto label_1744a8;
        case 0x1744acu: goto label_1744ac;
        case 0x1744b0u: goto label_1744b0;
        case 0x1744b4u: goto label_1744b4;
        case 0x1744b8u: goto label_1744b8;
        case 0x1744bcu: goto label_1744bc;
        case 0x1744c0u: goto label_1744c0;
        case 0x1744c4u: goto label_1744c4;
        case 0x1744c8u: goto label_1744c8;
        case 0x1744ccu: goto label_1744cc;
        case 0x1744d0u: goto label_1744d0;
        case 0x1744d4u: goto label_1744d4;
        case 0x1744d8u: goto label_1744d8;
        case 0x1744dcu: goto label_1744dc;
        case 0x1744e0u: goto label_1744e0;
        case 0x1744e4u: goto label_1744e4;
        case 0x1744e8u: goto label_1744e8;
        case 0x1744ecu: goto label_1744ec;
        case 0x1744f0u: goto label_1744f0;
        case 0x1744f4u: goto label_1744f4;
        case 0x1744f8u: goto label_1744f8;
        case 0x1744fcu: goto label_1744fc;
        case 0x174500u: goto label_174500;
        case 0x174504u: goto label_174504;
        case 0x174508u: goto label_174508;
        case 0x17450cu: goto label_17450c;
        case 0x174510u: goto label_174510;
        case 0x174514u: goto label_174514;
        case 0x174518u: goto label_174518;
        case 0x17451cu: goto label_17451c;
        case 0x174520u: goto label_174520;
        case 0x174524u: goto label_174524;
        case 0x174528u: goto label_174528;
        case 0x17452cu: goto label_17452c;
        case 0x174530u: goto label_174530;
        case 0x174534u: goto label_174534;
        case 0x174538u: goto label_174538;
        case 0x17453cu: goto label_17453c;
        default: break;
    }

    ctx->pc = 0x174320u;

label_174320:
    // 0x174320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_174324:
    // 0x174324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_174328:
    // 0x174328: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x174328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_17432c:
    // 0x17432c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17432cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_174330:
    // 0x174330: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x174330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174334:
    // 0x174334: 0xc0557e8  jal         func_155FA0
label_174338:
    if (ctx->pc == 0x174338u) {
        ctx->pc = 0x17433Cu;
        goto label_17433c;
    }
    ctx->pc = 0x174334u;
    SET_GPR_U32(ctx, 31, 0x17433Cu);
    ctx->pc = 0x155FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FA0u, 0x174334u, 0x17433Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17433Cu;
label_17433c:
    // 0x17433c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x17433cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_174340:
    // 0x174340: 0x24633e10  addiu       $v1, $v1, 0x3E10
    ctx->pc = 0x174340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15888));
label_174344:
    // 0x174344: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x174344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_174348:
    // 0x174348: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x174348u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_17434c:
    // 0x17434c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17434cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_174350:
    // 0x174350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174354:
    // 0x174354: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x174354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_174358:
    // 0x174358: 0x3e00008  jr          $ra
label_17435c:
    if (ctx->pc == 0x17435Cu) {
        ctx->pc = 0x174360u;
        goto label_174360;
    }
    ctx->pc = 0x174358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174360u;
label_174360:
    // 0x174360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x174360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_174364:
    // 0x174364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_174368:
    // 0x174368: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x174368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_17436c:
    // 0x17436c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x17436cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_174370:
    // 0x174370: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x174370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_174374:
    // 0x174374: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_174378:
    if (ctx->pc == 0x174378u) {
        ctx->pc = 0x17437Cu;
        goto label_17437c;
    }
    ctx->pc = 0x174374u;
    {
        const bool branch_taken_0x174374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174374) {
            ctx->pc = 0x1743BCu;
            goto label_1743bc;
        }
    }
    ctx->pc = 0x17437Cu;
label_17437c:
    // 0x17437c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x17437cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_174380:
    // 0x174380: 0x24633e10  addiu       $v1, $v1, 0x3E10
    ctx->pc = 0x174380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15888));
label_174384:
    // 0x174384: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x174384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_174388:
    // 0x174388: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x174388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_17438c:
    // 0x17438c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17438cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_174390:
    // 0x174390: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174394:
    // 0x174394: 0xc055950  jal         func_156540
label_174398:
    if (ctx->pc == 0x174398u) {
        ctx->pc = 0x17439Cu;
        goto label_17439c;
    }
    ctx->pc = 0x174394u;
    SET_GPR_U32(ctx, 31, 0x17439Cu);
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x174394u, 0x17439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17439Cu;
label_17439c:
    // 0x17439c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x17439cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_1743a0:
    // 0x1743a0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1743a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1743a4:
    // 0x1743a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1743a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1743a8:
    // 0x1743a8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1743ac:
    if (ctx->pc == 0x1743ACu) {
        ctx->pc = 0x1743B0u;
        goto label_1743b0;
    }
    ctx->pc = 0x1743A8u;
    {
        const bool branch_taken_0x1743a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1743a8) {
            ctx->pc = 0x1743BCu;
            goto label_1743bc;
        }
    }
    ctx->pc = 0x1743B0u;
label_1743b0:
    // 0x1743b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1743b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1743b4:
    // 0x1743b4: 0xc0ba070  jal         func_2E81C0
label_1743b8:
    if (ctx->pc == 0x1743B8u) {
        ctx->pc = 0x1743BCu;
        goto label_1743bc;
    }
    ctx->pc = 0x1743B4u;
    SET_GPR_U32(ctx, 31, 0x1743BCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1743B4u, 0x1743BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1743BCu;
label_1743bc:
    // 0x1743bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1743bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1743c0:
    // 0x1743c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1743c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1743c4:
    // 0x1743c4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1743c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1743c8:
    // 0x1743c8: 0x3e00008  jr          $ra
label_1743cc:
    if (ctx->pc == 0x1743CCu) {
        ctx->pc = 0x1743D0u;
        goto label_1743d0;
    }
    ctx->pc = 0x1743C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1743C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1743D0u;
label_1743d0:
    // 0x1743d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1743d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1743d4:
    // 0x1743d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1743d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1743d8:
    // 0x1743d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1743d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1743dc:
    // 0x1743dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1743dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_1743e0:
    // 0x1743e0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1743e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1743e4:
    // 0x1743e4: 0xc055974  jal         func_1565D0
label_1743e8:
    if (ctx->pc == 0x1743E8u) {
        ctx->pc = 0x1743ECu;
        goto label_1743ec;
    }
    ctx->pc = 0x1743E4u;
    SET_GPR_U32(ctx, 31, 0x1743ECu);
    ctx->pc = 0x1565D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1565D0u, 0x1743E4u, 0x1743ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1743ECu;
label_1743ec:
    // 0x1743ec: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1743ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1743f0:
    // 0x1743f0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1743f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1743f4:
    // 0x1743f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1743f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1743f8:
    // 0x1743f8: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1743fc:
    if (ctx->pc == 0x1743FCu) {
        ctx->pc = 0x174400u;
        goto label_174400;
    }
    ctx->pc = 0x1743F8u;
    {
        const bool branch_taken_0x1743f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1743f8) {
            ctx->pc = 0x17441Cu;
            goto label_17441c;
        }
    }
    ctx->pc = 0x174400u;
label_174400:
    // 0x174400: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x174400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_174404:
    // 0x174404: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x174404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_174408:
    // 0x174408: 0x24a54870  addiu       $a1, $a1, 0x4870
    ctx->pc = 0x174408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18544));
label_17440c:
    // 0x17440c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17440cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_174410:
    // 0x174410: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x174410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_174414:
    // 0x174414: 0x320f809  jalr        $t9
label_174418:
    if (ctx->pc == 0x174418u) {
        ctx->pc = 0x17441Cu;
        goto label_17441c;
    }
    ctx->pc = 0x174414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17441Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174414u, 0x17441Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17441Cu;
label_17441c:
    // 0x17441c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17441cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_174420:
    // 0x174420: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x174420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_174424:
    // 0x174424: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_174428:
    // 0x174428: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x174428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_17442c:
    // 0x17442c: 0x3e00008  jr          $ra
label_174430:
    if (ctx->pc == 0x174430u) {
        ctx->pc = 0x174434u;
        goto label_174434;
    }
    ctx->pc = 0x17442Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17442Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174434u;
label_174434:
    // 0x174434: 0x0  nop
    ctx->pc = 0x174434u;
    // NOP
label_174438:
    // 0x174438: 0x0  nop
    ctx->pc = 0x174438u;
    // NOP
label_17443c:
    // 0x17443c: 0x0  nop
    ctx->pc = 0x17443cu;
    // NOP
label_174440:
    // 0x174440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x174440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_174444:
    // 0x174444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x174444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_174448:
    // 0x174448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17444c:
    // 0x17444c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x17444cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_174450:
    // 0x174450: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x174450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_174454:
    // 0x174454: 0xc0559ac  jal         func_1566B0
label_174458:
    if (ctx->pc == 0x174458u) {
        ctx->pc = 0x17445Cu;
        goto label_17445c;
    }
    ctx->pc = 0x174454u;
    SET_GPR_U32(ctx, 31, 0x17445Cu);
    ctx->pc = 0x1566B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566B0u, 0x174454u, 0x17445Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17445Cu;
label_17445c:
    // 0x17445c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17445cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_174460:
    // 0x174460: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x174460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_174464:
    // 0x174464: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x174464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_174468:
    // 0x174468: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17446c:
    // 0x17446c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17446cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_174470:
    // 0x174470: 0x3e00008  jr          $ra
label_174474:
    if (ctx->pc == 0x174474u) {
        ctx->pc = 0x174478u;
        goto label_174478;
    }
    ctx->pc = 0x174470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174478u;
label_174478:
    // 0x174478: 0x0  nop
    ctx->pc = 0x174478u;
    // NOP
label_17447c:
    // 0x17447c: 0x0  nop
    ctx->pc = 0x17447cu;
    // NOP
label_174480:
    // 0x174480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x174480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_174484:
    // 0x174484: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x174484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_174488:
    // 0x174488: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17448c:
    // 0x17448c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x17448cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_174490:
    // 0x174490: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x174490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_174494:
    // 0x174494: 0xc0559dc  jal         func_156770
label_174498:
    if (ctx->pc == 0x174498u) {
        ctx->pc = 0x17449Cu;
        goto label_17449c;
    }
    ctx->pc = 0x174494u;
    SET_GPR_U32(ctx, 31, 0x17449Cu);
    ctx->pc = 0x156770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156770u, 0x174494u, 0x17449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17449Cu;
label_17449c:
    // 0x17449c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17449cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1744a0:
    // 0x1744a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1744a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1744a4:
    // 0x1744a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1744a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1744a8:
    // 0x1744a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1744a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1744ac:
    // 0x1744ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1744acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1744b0:
    // 0x1744b0: 0x3e00008  jr          $ra
label_1744b4:
    if (ctx->pc == 0x1744B4u) {
        ctx->pc = 0x1744B8u;
        goto label_1744b8;
    }
    ctx->pc = 0x1744B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1744B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1744B8u;
label_1744b8:
    // 0x1744b8: 0x0  nop
    ctx->pc = 0x1744b8u;
    // NOP
label_1744bc:
    // 0x1744bc: 0x0  nop
    ctx->pc = 0x1744bcu;
    // NOP
label_1744c0:
    // 0x1744c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1744c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1744c4:
    // 0x1744c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1744c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1744c8:
    // 0x1744c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1744c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1744cc:
    // 0x1744cc: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1744ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_1744d0:
    // 0x1744d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1744d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1744d4:
    // 0x1744d4: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x1744d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_1744d8:
    // 0x1744d8: 0xc055a78  jal         func_1569E0
label_1744dc:
    if (ctx->pc == 0x1744DCu) {
        ctx->pc = 0x1744E0u;
        goto label_1744e0;
    }
    ctx->pc = 0x1744D8u;
    SET_GPR_U32(ctx, 31, 0x1744E0u);
    ctx->pc = 0x1569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569E0u, 0x1744D8u, 0x1744E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1744E0u;
label_1744e0:
    // 0x1744e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1744e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1744e4:
    // 0x1744e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1744e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1744e8:
    // 0x1744e8: 0x3e00008  jr          $ra
label_1744ec:
    if (ctx->pc == 0x1744ECu) {
        ctx->pc = 0x1744F0u;
        goto label_1744f0;
    }
    ctx->pc = 0x1744E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1744E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1744F0u;
label_1744f0:
    // 0x1744f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1744f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1744f4:
    // 0x1744f4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1744f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1744f8:
    // 0x1744f8: 0x3e00008  jr          $ra
label_1744fc:
    if (ctx->pc == 0x1744FCu) {
        ctx->pc = 0x174500u;
        goto label_174500;
    }
    ctx->pc = 0x1744F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1744F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174500u;
label_174500:
    // 0x174500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x174500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_174504:
    // 0x174504: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x174504u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_174508:
    // 0x174508: 0x3e00008  jr          $ra
label_17450c:
    if (ctx->pc == 0x17450Cu) {
        ctx->pc = 0x174510u;
        goto label_174510;
    }
    ctx->pc = 0x174508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174510u;
label_174510:
    // 0x174510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_174514:
    // 0x174514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_174518:
    // 0x174518: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x174518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_17451c:
    // 0x17451c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17451cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_174520:
    // 0x174520: 0xc055a84  jal         func_156A10
label_174524:
    if (ctx->pc == 0x174524u) {
        ctx->pc = 0x174528u;
        goto label_174528;
    }
    ctx->pc = 0x174520u;
    SET_GPR_U32(ctx, 31, 0x174528u);
    ctx->pc = 0x156A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156A10u, 0x174520u, 0x174528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174528u;
label_174528:
    // 0x174528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17452c:
    // 0x17452c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17452cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_174530:
    // 0x174530: 0x3e00008  jr          $ra
label_174534:
    if (ctx->pc == 0x174534u) {
        ctx->pc = 0x174538u;
        goto label_174538;
    }
    ctx->pc = 0x174530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174538u;
label_174538:
    // 0x174538: 0x0  nop
    ctx->pc = 0x174538u;
    // NOP
label_17453c:
    // 0x17453c: 0x0  nop
    ctx->pc = 0x17453cu;
    // NOP
    ctx->pc = 0x174540u;
}
