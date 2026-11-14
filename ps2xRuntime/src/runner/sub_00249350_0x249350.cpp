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

// Function: sub_00249350
// Address: 0x249350 - 0x24a0d0
void sub_00249350_0x249350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249350_0x249350");
#endif

    switch (ctx->pc) {
        case 0x2493a4u: goto label_2493a4;
        case 0x2493b4u: goto label_2493b4;
        case 0x2493e8u: goto label_2493e8;
        case 0x24940cu: goto label_24940c;
        case 0x249458u: goto label_249458;
        case 0x249488u: goto label_249488;
        case 0x24949cu: goto label_24949c;
        case 0x2494acu: goto label_2494ac;
        case 0x2494e8u: goto label_2494e8;
        case 0x24950cu: goto label_24950c;
        case 0x24951cu: goto label_24951c;
        case 0x249528u: goto label_249528;
        case 0x24955cu: goto label_24955c;
        case 0x24956cu: goto label_24956c;
        case 0x249584u: goto label_249584;
        case 0x2495bcu: goto label_2495bc;
        case 0x2495ccu: goto label_2495cc;
        case 0x2495d8u: goto label_2495d8;
        case 0x249604u: goto label_249604;
        case 0x249630u: goto label_249630;
        case 0x249648u: goto label_249648;
        case 0x249688u: goto label_249688;
        case 0x249748u: goto label_249748;
        case 0x249788u: goto label_249788;
        case 0x2497b8u: goto label_2497b8;
        case 0x249848u: goto label_249848;
        case 0x249880u: goto label_249880;
        case 0x24989cu: goto label_24989c;
        case 0x2498d4u: goto label_2498d4;
        case 0x2498fcu: goto label_2498fc;
        case 0x249924u: goto label_249924;
        case 0x249950u: goto label_249950;
        case 0x249970u: goto label_249970;
        case 0x249984u: goto label_249984;
        case 0x249994u: goto label_249994;
        case 0x24999cu: goto label_24999c;
        case 0x2499b0u: goto label_2499b0;
        case 0x2499ccu: goto label_2499cc;
        case 0x2499e0u: goto label_2499e0;
        case 0x2499f0u: goto label_2499f0;
        case 0x249a08u: goto label_249a08;
        case 0x249a38u: goto label_249a38;
        case 0x249a48u: goto label_249a48;
        case 0x249a58u: goto label_249a58;
        case 0x249a68u: goto label_249a68;
        case 0x249a84u: goto label_249a84;
        case 0x249a98u: goto label_249a98;
        case 0x249aa8u: goto label_249aa8;
        case 0x249ac8u: goto label_249ac8;
        case 0x249ad4u: goto label_249ad4;
        case 0x249ae4u: goto label_249ae4;
        case 0x249af0u: goto label_249af0;
        case 0x249b18u: goto label_249b18;
        case 0x249b30u: goto label_249b30;
        case 0x249b4cu: goto label_249b4c;
        case 0x249b88u: goto label_249b88;
        case 0x249b94u: goto label_249b94;
        case 0x249ba8u: goto label_249ba8;
        case 0x249bccu: goto label_249bcc;
        case 0x249bdcu: goto label_249bdc;
        case 0x249bf8u: goto label_249bf8;
        case 0x249c0cu: goto label_249c0c;
        case 0x249c24u: goto label_249c24;
        case 0x249c38u: goto label_249c38;
        case 0x249c48u: goto label_249c48;
        case 0x249c58u: goto label_249c58;
        case 0x249c6cu: goto label_249c6c;
        case 0x249c88u: goto label_249c88;
        case 0x249ca4u: goto label_249ca4;
        case 0x249d7cu: goto label_249d7c;
        case 0x249e40u: goto label_249e40;
        case 0x249e6cu: goto label_249e6c;
        case 0x249ec0u: goto label_249ec0;
        case 0x249ef4u: goto label_249ef4;
        case 0x249f0cu: goto label_249f0c;
        case 0x249f28u: goto label_249f28;
        case 0x249f54u: goto label_249f54;
        case 0x249f6cu: goto label_249f6c;
        case 0x249f78u: goto label_249f78;
        case 0x249f84u: goto label_249f84;
        case 0x249fb4u: goto label_249fb4;
        case 0x249fccu: goto label_249fcc;
        case 0x249fd8u: goto label_249fd8;
        case 0x249fe8u: goto label_249fe8;
        case 0x24a018u: goto label_24a018;
        case 0x24a088u: goto label_24a088;
        default: break;
    }

    ctx->pc = 0x249350u;

    // 0x249350: 0x27bdfd10  addiu       $sp, $sp, -0x2F0
    ctx->pc = 0x249350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966544));
    // 0x249354: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x249354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x249358: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x249358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x24935c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x24935cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x249360: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x249360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x249364: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x249364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x249368: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x249368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x24936c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24936cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x249370: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x249370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x249374: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x249374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x249378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x249378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24937c: 0xafa402b0  sw          $a0, 0x2B0($sp)
    ctx->pc = 0x24937cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 4));
    // 0x249380: 0xafa502c0  sw          $a1, 0x2C0($sp)
    ctx->pc = 0x249380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 5));
    // 0x249384: 0xafa602d0  sw          $a2, 0x2D0($sp)
    ctx->pc = 0x249384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 6));
    // 0x249388: 0xa3a702e0  sb          $a3, 0x2E0($sp)
    ctx->pc = 0x249388u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 736), (uint8_t)GPR_U32(ctx, 7));
    // 0x24938c: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x24938cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x249390: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x249390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x249394: 0x7ba40120  lq          $a0, 0x120($sp)
    ctx->pc = 0x249394u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x249398: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x249398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x24939c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x24939Cu;
    SET_GPR_U32(ctx, 31, 0x2493A4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x24939Cu, 0x2493A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2493A4u;
label_2493a4:
    // 0x2493a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2493a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2493a8: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x2493a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2493ac: 0xc085530  jal         func_2154C0
    ctx->pc = 0x2493ACu;
    SET_GPR_U32(ctx, 31, 0x2493B4u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x2493ACu, 0x2493B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2493B4u;
label_2493b4:
    // 0x2493b4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2493b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2493b8: 0x10440153  beq         $v0, $a0, . + 4 + (0x153 << 2)
    ctx->pc = 0x2493B8u;
    {
        const bool branch_taken_0x2493b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2493b8) {
            ctx->pc = 0x249908u;
            goto label_249908;
        }
    }
    ctx->pc = 0x2493C0u;
    // 0x2493c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2493c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2493c4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2493C4u;
    {
        const bool branch_taken_0x2493c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2493c4) {
            ctx->pc = 0x2493D4u;
            goto label_2493d4;
        }
    }
    ctx->pc = 0x2493CCu;
    // 0x2493cc: 0x10000331  b           . + 4 + (0x331 << 2)
    ctx->pc = 0x2493CCu;
    {
        const bool branch_taken_0x2493cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2493cc) {
            ctx->pc = 0x24A094u;
            goto label_24a094;
        }
    }
    ctx->pc = 0x2493D4u;
label_2493d4:
    // 0x2493d4: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x2493d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2493d8: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2493d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2493dc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2493dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2493e0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2493E0u;
    SET_GPR_U32(ctx, 31, 0x2493E8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2493E0u, 0x2493E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2493E8u;
label_2493e8:
    // 0x2493e8: 0xafa202a8  sw          $v0, 0x2A8($sp)
    ctx->pc = 0x2493e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 2));
    // 0x2493ec: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x2493ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2493f0: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x2493f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2493f4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2493F4u;
    {
        const bool branch_taken_0x2493f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2493f4) {
            ctx->pc = 0x249418u;
            goto label_249418;
        }
    }
    ctx->pc = 0x2493FCu;
    // 0x2493fc: 0x8fa402b0  lw          $a0, 0x2B0($sp)
    ctx->pc = 0x2493fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x249400: 0x8fa502c0  lw          $a1, 0x2C0($sp)
    ctx->pc = 0x249400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x249404: 0xc092870  jal         func_24A1C0
    ctx->pc = 0x249404u;
    SET_GPR_U32(ctx, 31, 0x24940Cu);
    ctx->pc = 0x24A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A1C0u, 0x249404u, 0x24940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24940Cu;
label_24940c:
    // 0x24940c: 0xa3a202af  sb          $v0, 0x2AF($sp)
    ctx->pc = 0x24940cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 687), (uint8_t)GPR_U32(ctx, 2));
    // 0x249410: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x249410u;
    {
        const bool branch_taken_0x249410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249410) {
            ctx->pc = 0x249420u;
            goto label_249420;
        }
    }
    ctx->pc = 0x249418u;
label_249418:
    // 0x249418: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x249418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24941c: 0xa3a302af  sb          $v1, 0x2AF($sp)
    ctx->pc = 0x24941cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 687), (uint8_t)GPR_U32(ctx, 3));
label_249420:
    // 0x249420: 0x93a202af  lbu         $v0, 0x2AF($sp)
    ctx->pc = 0x249420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 687)));
    // 0x249424: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x249424u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x249428: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x249428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x24942c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24942cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249430: 0x14620057  bne         $v1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x249430u;
    {
        const bool branch_taken_0x249430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x249430) {
            ctx->pc = 0x249590u;
            goto label_249590;
        }
    }
    ctx->pc = 0x249438u;
    // 0x249438: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x249438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x24943c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x24943cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x249440: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x249440u;
    {
        const bool branch_taken_0x249440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249440) {
            ctx->pc = 0x249590u;
            goto label_249590;
        }
    }
    ctx->pc = 0x249448u;
    // 0x249448: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x249448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x24944c: 0x8fa502a8  lw          $a1, 0x2A8($sp)
    ctx->pc = 0x24944cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x249450: 0xc090f80  jal         func_243E00
    ctx->pc = 0x249450u;
    SET_GPR_U32(ctx, 31, 0x249458u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x249450u, 0x249458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249458u;
label_249458:
    // 0x249458: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x249458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x24945c: 0x27a20208  addiu       $v0, $sp, 0x208
    ctx->pc = 0x24945cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
    // 0x249460: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x249460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x249464: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x249464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249468: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x249468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24946c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x24946cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x249470: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x249470u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x249474: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x249474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x249478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24947c: 0x27a50208  addiu       $a1, $sp, 0x208
    ctx->pc = 0x24947cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
    // 0x249480: 0xc09106c  jal         func_2441B0
    ctx->pc = 0x249480u;
    SET_GPR_U32(ctx, 31, 0x249488u);
    ctx->pc = 0x2441B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2441B0u, 0x249480u, 0x249488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249488u;
label_249488:
    // 0x249488: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x249488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x24948c: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24948cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x249490: 0x8fa502c0  lw          $a1, 0x2C0($sp)
    ctx->pc = 0x249490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x249494: 0xc094320  jal         func_250C80
    ctx->pc = 0x249494u;
    SET_GPR_U32(ctx, 31, 0x24949Cu);
    ctx->pc = 0x250C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250C80u, 0x249494u, 0x24949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24949Cu;
label_24949c:
    // 0x24949c: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x24949cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2494a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2494a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2494a4: 0xc09107c  jal         func_2441F0
    ctx->pc = 0x2494A4u;
    SET_GPR_U32(ctx, 31, 0x2494ACu);
    ctx->pc = 0x2441F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2441F0u, 0x2494A4u, 0x2494ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2494ACu;
label_2494ac:
    // 0x2494ac: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x2494acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2494b0: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2494B0u;
    {
        const bool branch_taken_0x2494b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2494b0) {
            ctx->pc = 0x2494D8u;
            goto label_2494d8;
        }
    }
    ctx->pc = 0x2494B8u;
    // 0x2494b8: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x2494b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2494bc: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2494BCu;
    {
        const bool branch_taken_0x2494bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2494bc) {
            ctx->pc = 0x2494D8u;
            goto label_2494d8;
        }
    }
    ctx->pc = 0x2494C4u;
    // 0x2494c4: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x2494c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2494c8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2494C8u;
    {
        const bool branch_taken_0x2494c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2494c8) {
            ctx->pc = 0x2494D8u;
            goto label_2494d8;
        }
    }
    ctx->pc = 0x2494D0u;
    // 0x2494d0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2494D0u;
    {
        const bool branch_taken_0x2494d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2494d0) {
            ctx->pc = 0x249574u;
            goto label_249574;
        }
    }
    ctx->pc = 0x2494D8u;
label_2494d8:
    // 0x2494d8: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x2494d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2494dc: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2494dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2494e0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2494E0u;
    SET_GPR_U32(ctx, 31, 0x2494E8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2494E0u, 0x2494E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2494E8u;
label_2494e8:
    // 0x2494e8: 0xafa202a4  sw          $v0, 0x2A4($sp)
    ctx->pc = 0x2494e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 2));
    // 0x2494ec: 0x8fa202a4  lw          $v0, 0x2A4($sp)
    ctx->pc = 0x2494ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
    // 0x2494f0: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x2494f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x2494f4: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x2494f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2494f8: 0x1002001e  beq         $zero, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2494F8u;
    {
        const bool branch_taken_0x2494f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2494f8) {
            ctx->pc = 0x249574u;
            goto label_249574;
        }
    }
    ctx->pc = 0x249500u;
    // 0x249500: 0x8fa402a4  lw          $a0, 0x2A4($sp)
    ctx->pc = 0x249500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
    // 0x249504: 0xc090dc4  jal         func_243710
    ctx->pc = 0x249504u;
    SET_GPR_U32(ctx, 31, 0x24950Cu);
    ctx->pc = 0x243710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243710u, 0x249504u, 0x24950Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24950Cu;
label_24950c:
    // 0x24950c: 0xafa202a0  sw          $v0, 0x2A0($sp)
    ctx->pc = 0x24950cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 2));
    // 0x249510: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x249510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x249514: 0xc041160  jal         func_104580
    ctx->pc = 0x249514u;
    SET_GPR_U32(ctx, 31, 0x24951Cu);
    ctx->pc = 0x104580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104580u, 0x249514u, 0x24951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24951Cu;
label_24951c:
    // 0x24951c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24951cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249520: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x249520u;
    {
        const bool branch_taken_0x249520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249520) {
            ctx->pc = 0x249560u;
            goto label_249560;
        }
    }
    ctx->pc = 0x249528u;
label_249528:
    // 0x249528: 0x92420004  lbu         $v0, 0x4($s2)
    ctx->pc = 0x249528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x24952c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x24952cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x249530: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249534: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x249534u;
    {
        const bool branch_taken_0x249534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x249534) {
            ctx->pc = 0x24955Cu;
            goto label_24955c;
        }
    }
    ctx->pc = 0x24953Cu;
    // 0x24953c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x24953cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x249540: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x249540u;
    {
        const bool branch_taken_0x249540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249540) {
            ctx->pc = 0x24955Cu;
            goto label_24955c;
        }
    }
    ctx->pc = 0x249548u;
    // 0x249548: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x249548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x24954c: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24954cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x249550: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x249550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x249554: 0xc094320  jal         func_250C80
    ctx->pc = 0x249554u;
    SET_GPR_U32(ctx, 31, 0x24955Cu);
    ctx->pc = 0x250C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250C80u, 0x249554u, 0x24955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24955Cu;
label_24955c:
    // 0x24955c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x24955cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_249560:
    // 0x249560: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x249560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x249564: 0xc063dc8  jal         func_18F720
    ctx->pc = 0x249564u;
    SET_GPR_U32(ctx, 31, 0x24956Cu);
    ctx->pc = 0x18F720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F720u, 0x249564u, 0x24956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24956Cu;
label_24956c:
    // 0x24956c: 0x1642ffee  bne         $s2, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x24956Cu;
    {
        const bool branch_taken_0x24956c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x24956c) {
            ctx->pc = 0x249528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249528;
        }
    }
    ctx->pc = 0x249574u;
label_249574:
    // 0x249574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249578: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x249578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24957c: 0xc09102c  jal         func_2440B0
    ctx->pc = 0x24957Cu;
    SET_GPR_U32(ctx, 31, 0x249584u);
    ctx->pc = 0x2440B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2440B0u, 0x24957Cu, 0x249584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249584u;
label_249584:
    // 0x249584: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x249584u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249588: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x249588u;
    {
        const bool branch_taken_0x249588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249588) {
            ctx->pc = 0x249594u;
            goto label_249594;
        }
    }
    ctx->pc = 0x249590u;
label_249590:
    // 0x249590: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x249590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_249594:
    // 0x249594: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x249594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x249598: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x249598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x24959c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24959Cu;
    {
        const bool branch_taken_0x24959c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24959c) {
            ctx->pc = 0x2495B0u;
            goto label_2495b0;
        }
    }
    ctx->pc = 0x2495A4u;
    // 0x2495a4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2495a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2495a8: 0x100002bb  b           . + 4 + (0x2BB << 2)
    ctx->pc = 0x2495A8u;
    {
        const bool branch_taken_0x2495a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2495a8) {
            ctx->pc = 0x24A098u;
            goto label_24a098;
        }
    }
    ctx->pc = 0x2495B0u;
label_2495b0:
    // 0x2495b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2495b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2495b4: 0xc090fa0  jal         func_243E80
    ctx->pc = 0x2495B4u;
    SET_GPR_U32(ctx, 31, 0x2495BCu);
    ctx->pc = 0x243E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E80u, 0x2495B4u, 0x2495BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2495BCu;
label_2495bc:
    // 0x2495bc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2495bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2495c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2495c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2495c4: 0xc09283c  jal         func_24A0F0
    ctx->pc = 0x2495C4u;
    SET_GPR_U32(ctx, 31, 0x2495CCu);
    ctx->pc = 0x24A0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A0F0u, 0x2495C4u, 0x2495CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2495CCu;
label_2495cc:
    // 0x2495cc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2495ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2495d0: 0xc094f24  jal         func_253C90
    ctx->pc = 0x2495D0u;
    SET_GPR_U32(ctx, 31, 0x2495D8u);
    ctx->pc = 0x253C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253C90u, 0x2495D0u, 0x2495D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2495D8u;
label_2495d8:
    // 0x2495d8: 0x27a30200  addiu       $v1, $sp, 0x200
    ctx->pc = 0x2495d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2495dc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2495dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2495e0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2495e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2495e4: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2495e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2495e8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2495e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2495ec: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x2495ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2495f0: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x2495f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x2495f4: 0x7ba40100  lq          $a0, 0x100($sp)
    ctx->pc = 0x2495f4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2495f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2495f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2495fc: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2495FCu;
    SET_GPR_U32(ctx, 31, 0x249604u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2495FCu, 0x249604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249604u;
label_249604:
    // 0x249604: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x249604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x249608: 0x27a201f0  addiu       $v0, $sp, 0x1F0
    ctx->pc = 0x249608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x24960c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x24960cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x249610: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x249610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249614: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x249614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249618: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x249618u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24961c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x24961cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x249620: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x249620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x249624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249628: 0xc091040  jal         func_244100
    ctx->pc = 0x249628u;
    SET_GPR_U32(ctx, 31, 0x249630u);
    ctx->pc = 0x244100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244100u, 0x249628u, 0x249630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249630u;
label_249630:
    // 0x249630: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x249630u;
    {
        const bool branch_taken_0x249630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249630) {
            ctx->pc = 0x2496B8u;
            goto label_2496b8;
        }
    }
    ctx->pc = 0x249638u;
    // 0x249638: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x249638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x24963c: 0x8fa502a8  lw          $a1, 0x2A8($sp)
    ctx->pc = 0x24963cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x249640: 0xc090f80  jal         func_243E00
    ctx->pc = 0x249640u;
    SET_GPR_U32(ctx, 31, 0x249648u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x249640u, 0x249648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249648u;
label_249648:
    // 0x249648: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x249648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24964c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24964cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x249650: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x249650u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x249654: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x249654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x249658: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x249658u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24965c: 0x1012  mflo        $v0
    ctx->pc = 0x24965cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x249660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x249660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249664: 0x0  nop
    ctx->pc = 0x249664u;
    // NOP
    // 0x249668: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x249668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24966c: 0xc7a00200  lwc1        $f0, 0x200($sp)
    ctx->pc = 0x24966cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249670: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x249670u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x249674: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x249674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x249678: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x249678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x24967c: 0x8fa502a8  lw          $a1, 0x2A8($sp)
    ctx->pc = 0x24967cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x249680: 0xc090f80  jal         func_243E00
    ctx->pc = 0x249680u;
    SET_GPR_U32(ctx, 31, 0x249688u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x249680u, 0x249688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249688u;
label_249688:
    // 0x249688: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x249688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24968c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24968cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x249690: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x249690u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x249694: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x249694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x249698: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x249698u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24969c: 0x1012  mflo        $v0
    ctx->pc = 0x24969cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2496a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2496a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2496a4: 0x0  nop
    ctx->pc = 0x2496a4u;
    // NOP
    // 0x2496a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2496a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2496ac: 0xc7a00204  lwc1        $f0, 0x204($sp)
    ctx->pc = 0x2496acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2496b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2496b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2496b4: 0xe7a00204  swc1        $f0, 0x204($sp)
    ctx->pc = 0x2496b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
label_2496b8:
    // 0x2496b8: 0xc7a10200  lwc1        $f1, 0x200($sp)
    ctx->pc = 0x2496b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2496bc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2496bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2496c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2496c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2496c4: 0x0  nop
    ctx->pc = 0x2496c4u;
    // NOP
    // 0x2496c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2496c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2496cc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2496CCu;
    {
        const bool branch_taken_0x2496cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2496cc) {
            ctx->pc = 0x2496E4u;
            goto label_2496e4;
        }
    }
    ctx->pc = 0x2496D4u;
    // 0x2496d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2496d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2496d8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2496d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2496dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2496DCu;
    {
        const bool branch_taken_0x2496dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2496dc) {
            ctx->pc = 0x2496F8u;
            goto label_2496f8;
        }
    }
    ctx->pc = 0x2496E4u;
label_2496e4:
    // 0x2496e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2496e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2496e8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2496e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2496ec: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2496ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2496f0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2496f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2496f4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2496f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_2496f8:
    // 0x2496f8: 0xc7a10204  lwc1        $f1, 0x204($sp)
    ctx->pc = 0x2496f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2496fc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2496fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x249700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x249700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249704: 0x0  nop
    ctx->pc = 0x249704u;
    // NOP
    // 0x249708: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x249708u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24970c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24970Cu;
    {
        const bool branch_taken_0x24970c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24970c) {
            ctx->pc = 0x249724u;
            goto label_249724;
        }
    }
    ctx->pc = 0x249714u;
    // 0x249714: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x249714u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x249718: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x249718u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x24971c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24971Cu;
    {
        const bool branch_taken_0x24971c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24971c) {
            ctx->pc = 0x249738u;
            goto label_249738;
        }
    }
    ctx->pc = 0x249724u;
label_249724:
    // 0x249724: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x249724u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x249728: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x249728u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24972c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x24972cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x249730: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x249730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x249734: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x249734u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_249738:
    // 0x249738: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x249738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x24973c: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24973cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x249740: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x249740u;
    SET_GPR_U32(ctx, 31, 0x249748u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x249740u, 0x249748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249748u;
label_249748:
    // 0x249748: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x249748u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24974c: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x24974Cu;
    {
        const bool branch_taken_0x24974c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x24974c) {
            ctx->pc = 0x249764u;
            goto label_249764;
        }
    }
    ctx->pc = 0x249754u;
    // 0x249754: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x249754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x249758: 0xafa20238  sw          $v0, 0x238($sp)
    ctx->pc = 0x249758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 2));
    // 0x24975c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24975Cu;
    {
        const bool branch_taken_0x24975c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24975c) {
            ctx->pc = 0x249768u;
            goto label_249768;
        }
    }
    ctx->pc = 0x249764u;
label_249764:
    // 0x249764: 0xafa00238  sw          $zero, 0x238($sp)
    ctx->pc = 0x249764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 0));
label_249768:
    // 0x249768: 0x8fa30238  lw          $v1, 0x238($sp)
    ctx->pc = 0x249768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x24976c: 0xafa3029c  sw          $v1, 0x29C($sp)
    ctx->pc = 0x24976cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 3));
    // 0x249770: 0x8fa2029c  lw          $v0, 0x29C($sp)
    ctx->pc = 0x249770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
    // 0x249774: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x249774u;
    {
        const bool branch_taken_0x249774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249774) {
            ctx->pc = 0x249798u;
            goto label_249798;
        }
    }
    ctx->pc = 0x24977Cu;
    // 0x24977c: 0x8fa4029c  lw          $a0, 0x29C($sp)
    ctx->pc = 0x24977cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
    // 0x249780: 0xc094d24  jal         func_253490
    ctx->pc = 0x249780u;
    SET_GPR_U32(ctx, 31, 0x249788u);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x249780u, 0x249788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249788u;
label_249788:
    // 0x249788: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x249788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24978c: 0xafa20234  sw          $v0, 0x234($sp)
    ctx->pc = 0x24978cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 2));
    // 0x249790: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x249790u;
    {
        const bool branch_taken_0x249790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249790) {
            ctx->pc = 0x2497A0u;
            goto label_2497a0;
        }
    }
    ctx->pc = 0x249798u;
label_249798:
    // 0x249798: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x249798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24979c: 0xafa40234  sw          $a0, 0x234($sp)
    ctx->pc = 0x24979cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 4));
label_2497a0:
    // 0x2497a0: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x2497a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x2497a4: 0xafa50298  sw          $a1, 0x298($sp)
    ctx->pc = 0x2497a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 5));
    // 0x2497a8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2497a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2497ac: 0x8fa502a8  lw          $a1, 0x2A8($sp)
    ctx->pc = 0x2497acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x2497b0: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2497B0u;
    SET_GPR_U32(ctx, 31, 0x2497B8u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2497B0u, 0x2497B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2497B8u;
label_2497b8:
    // 0x2497b8: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x2497b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2497bc: 0xe7a00294  swc1        $f0, 0x294($sp)
    ctx->pc = 0x2497bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 660), bits); }
    // 0x2497c0: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x2497c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x2497c4: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2497C4u;
    {
        const bool branch_taken_0x2497c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2497c4) {
            ctx->pc = 0x249818u;
            goto label_249818;
        }
    }
    ctx->pc = 0x2497CCu;
    // 0x2497cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2497ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2497d0: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2497D0u;
    {
        const bool branch_taken_0x2497d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2497d0) {
            ctx->pc = 0x2497FCu;
            goto label_2497fc;
        }
    }
    ctx->pc = 0x2497D8u;
    // 0x2497d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2497d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2497dc: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2497DCu;
    {
        const bool branch_taken_0x2497dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2497dc) {
            ctx->pc = 0x2497ECu;
            goto label_2497ec;
        }
    }
    ctx->pc = 0x2497E4u;
    // 0x2497e4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2497E4u;
    {
        const bool branch_taken_0x2497e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2497e4) {
            ctx->pc = 0x24982Cu;
            goto label_24982c;
        }
    }
    ctx->pc = 0x2497ECu;
label_2497ec:
    // 0x2497ec: 0xc7a00294  lwc1        $f0, 0x294($sp)
    ctx->pc = 0x2497ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2497f0: 0xe7a001f4  swc1        $f0, 0x1F4($sp)
    ctx->pc = 0x2497f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
    // 0x2497f4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2497F4u;
    {
        const bool branch_taken_0x2497f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2497f4) {
            ctx->pc = 0x24982Cu;
            goto label_24982c;
        }
    }
    ctx->pc = 0x2497FCu;
label_2497fc:
    // 0x2497fc: 0x3c044320  lui         $a0, 0x4320
    ctx->pc = 0x2497fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17184 << 16));
    // 0x249800: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x249800u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x249804: 0xc7a00294  lwc1        $f0, 0x294($sp)
    ctx->pc = 0x249804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249808: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x249808u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24980c: 0xe7a001f4  swc1        $f0, 0x1F4($sp)
    ctx->pc = 0x24980cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
    // 0x249810: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x249810u;
    {
        const bool branch_taken_0x249810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249810) {
            ctx->pc = 0x24982Cu;
            goto label_24982c;
        }
    }
    ctx->pc = 0x249818u;
label_249818:
    // 0x249818: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x249818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x24981c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24981cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x249820: 0xc7a00294  lwc1        $f0, 0x294($sp)
    ctx->pc = 0x249820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249824: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x249824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x249828: 0xe7a001f4  swc1        $f0, 0x1F4($sp)
    ctx->pc = 0x249828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
label_24982c:
    // 0x24982c: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x24982cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x249830: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x249830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249834: 0x1444002d  bne         $v0, $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x249834u;
    {
        const bool branch_taken_0x249834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x249834) {
            ctx->pc = 0x2498ECu;
            goto label_2498ec;
        }
    }
    ctx->pc = 0x24983Cu;
    // 0x24983c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24983cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249840: 0xc09107c  jal         func_2441F0
    ctx->pc = 0x249840u;
    SET_GPR_U32(ctx, 31, 0x249848u);
    ctx->pc = 0x2441F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2441F0u, 0x249840u, 0x249848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249848u;
label_249848:
    // 0x249848: 0x24040051  addiu       $a0, $zero, 0x51
    ctx->pc = 0x249848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x24984c: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24984Cu;
    {
        const bool branch_taken_0x24984c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x24984c) {
            ctx->pc = 0x24985Cu;
            goto label_24985c;
        }
    }
    ctx->pc = 0x249854u;
    // 0x249854: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x249854u;
    {
        const bool branch_taken_0x249854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249854) {
            ctx->pc = 0x2498ECu;
            goto label_2498ec;
        }
    }
    ctx->pc = 0x24985Cu;
label_24985c:
    // 0x24985c: 0x12800023  beqz        $s4, . + 4 + (0x23 << 2)
    ctx->pc = 0x24985Cu;
    {
        const bool branch_taken_0x24985c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x24985c) {
            ctx->pc = 0x2498ECu;
            goto label_2498ec;
        }
    }
    ctx->pc = 0x249864u;
    // 0x249864: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x249864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x249868: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x249868u;
    {
        const bool branch_taken_0x249868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249868) {
            ctx->pc = 0x2498ECu;
            goto label_2498ec;
        }
    }
    ctx->pc = 0x249870u;
    // 0x249870: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x249870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x249874: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x249874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x249878: 0xc085538  jal         func_2154E0
    ctx->pc = 0x249878u;
    SET_GPR_U32(ctx, 31, 0x249880u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x249878u, 0x249880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249880u;
label_249880:
    // 0x249880: 0xafa20290  sw          $v0, 0x290($sp)
    ctx->pc = 0x249880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 2));
    // 0x249884: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x249884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x249888: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x249888u;
    {
        const bool branch_taken_0x249888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249888) {
            ctx->pc = 0x2498ECu;
            goto label_2498ec;
        }
    }
    ctx->pc = 0x249890u;
    // 0x249890: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x249890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x249894: 0xc09107c  jal         func_2441F0
    ctx->pc = 0x249894u;
    SET_GPR_U32(ctx, 31, 0x24989Cu);
    ctx->pc = 0x2441F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2441F0u, 0x249894u, 0x24989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24989Cu;
label_24989c:
    // 0x24989c: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x24989cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2498a0: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2498A0u;
    {
        const bool branch_taken_0x2498a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2498a0) {
            ctx->pc = 0x2498C8u;
            goto label_2498c8;
        }
    }
    ctx->pc = 0x2498A8u;
    // 0x2498a8: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x2498a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2498ac: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2498ACu;
    {
        const bool branch_taken_0x2498ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2498ac) {
            ctx->pc = 0x2498C8u;
            goto label_2498c8;
        }
    }
    ctx->pc = 0x2498B4u;
    // 0x2498b4: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x2498b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2498b8: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2498B8u;
    {
        const bool branch_taken_0x2498b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2498b8) {
            ctx->pc = 0x2498C8u;
            goto label_2498c8;
        }
    }
    ctx->pc = 0x2498C0u;
    // 0x2498c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2498C0u;
    {
        const bool branch_taken_0x2498c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2498c0) {
            ctx->pc = 0x2498ECu;
            goto label_2498ec;
        }
    }
    ctx->pc = 0x2498C8u;
label_2498c8:
    // 0x2498c8: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x2498c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2498cc: 0xc09107c  jal         func_2441F0
    ctx->pc = 0x2498CCu;
    SET_GPR_U32(ctx, 31, 0x2498D4u);
    ctx->pc = 0x2441F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2441F0u, 0x2498CCu, 0x2498D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2498D4u;
label_2498d4:
    // 0x2498d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2498d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2498d8: 0x0  nop
    ctx->pc = 0x2498d8u;
    // NOP
    // 0x2498dc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2498dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2498e0: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x2498e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2498e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2498e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2498e8: 0xe7a001f4  swc1        $f0, 0x1F4($sp)
    ctx->pc = 0x2498e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
label_2498ec:
    // 0x2498ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2498ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2498f0: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x2498f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2498f4: 0xc090f14  jal         func_243C50
    ctx->pc = 0x2498F4u;
    SET_GPR_U32(ctx, 31, 0x2498FCu);
    ctx->pc = 0x243C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C50u, 0x2498F4u, 0x2498FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2498FCu;
label_2498fc:
    // 0x2498fc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2498fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249900: 0x100001e5  b           . + 4 + (0x1E5 << 2)
    ctx->pc = 0x249900u;
    {
        const bool branch_taken_0x249900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249900) {
            ctx->pc = 0x24A098u;
            goto label_24a098;
        }
    }
    ctx->pc = 0x249908u;
label_249908:
    // 0x249908: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x249908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24990c: 0xafa2028c  sw          $v0, 0x28C($sp)
    ctx->pc = 0x24990cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 2));
    // 0x249910: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x249910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x249914: 0x27a40288  addiu       $a0, $sp, 0x288
    ctx->pc = 0x249914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
    // 0x249918: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x249918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x24991c: 0xc053ba4  jal         func_14EE90
    ctx->pc = 0x24991Cu;
    SET_GPR_U32(ctx, 31, 0x249924u);
    ctx->pc = 0x14EE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE90u, 0x24991Cu, 0x249924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249924u;
label_249924:
    // 0x249924: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249928: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x249928u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24992c: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x24992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x249930: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x249930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
    // 0x249934: 0x10400168  beqz        $v0, . + 4 + (0x168 << 2)
    ctx->pc = 0x249934u;
    {
        const bool branch_taken_0x249934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249934) {
            ctx->pc = 0x249ED8u;
            goto label_249ed8;
        }
    }
    ctx->pc = 0x24993Cu;
    // 0x24993c: 0x8fa402b0  lw          $a0, 0x2B0($sp)
    ctx->pc = 0x24993cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x249940: 0x8fa502c0  lw          $a1, 0x2C0($sp)
    ctx->pc = 0x249940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x249944: 0x27a6028c  addiu       $a2, $sp, 0x28C
    ctx->pc = 0x249944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 652));
    // 0x249948: 0xc092bb8  jal         func_24AEE0
    ctx->pc = 0x249948u;
    SET_GPR_U32(ctx, 31, 0x249950u);
    ctx->pc = 0x24AEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AEE0u, 0x249948u, 0x249950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249950u;
label_249950:
    // 0x249950: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x249950u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x249954: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x249954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x249958: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x249958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
    // 0x24995c: 0x1040015e  beqz        $v0, . + 4 + (0x15E << 2)
    ctx->pc = 0x24995Cu;
    {
        const bool branch_taken_0x24995c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24995c) {
            ctx->pc = 0x249ED8u;
            goto label_249ed8;
        }
    }
    ctx->pc = 0x249964u;
    // 0x249964: 0x27a40284  addiu       $a0, $sp, 0x284
    ctx->pc = 0x249964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
    // 0x249968: 0xc064754  jal         func_191D50
    ctx->pc = 0x249968u;
    SET_GPR_U32(ctx, 31, 0x249970u);
    ctx->pc = 0x191D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191D50u, 0x249968u, 0x249970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249970u;
label_249970:
    // 0x249970: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x249970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x249974: 0x27a40244  addiu       $a0, $sp, 0x244
    ctx->pc = 0x249974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
    // 0x249978: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x249978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x24997c: 0xc064064  jal         func_190190
    ctx->pc = 0x24997Cu;
    SET_GPR_U32(ctx, 31, 0x249984u);
    ctx->pc = 0x190190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190190u, 0x24997Cu, 0x249984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249984u;
label_249984:
    // 0x249984: 0x27a40284  addiu       $a0, $sp, 0x284
    ctx->pc = 0x249984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
    // 0x249988: 0x27a50244  addiu       $a1, $sp, 0x244
    ctx->pc = 0x249988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
    // 0x24998c: 0xc064744  jal         func_191D10
    ctx->pc = 0x24998Cu;
    SET_GPR_U32(ctx, 31, 0x249994u);
    ctx->pc = 0x191D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191D10u, 0x24998Cu, 0x249994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249994u;
label_249994:
    // 0x249994: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x249994u;
    {
        const bool branch_taken_0x249994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249994) {
            ctx->pc = 0x2499CCu;
            goto label_2499cc;
        }
    }
    ctx->pc = 0x24999Cu;
label_24999c:
    // 0x24999c: 0x8fa2028c  lw          $v0, 0x28C($sp)
    ctx->pc = 0x24999cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x2499a0: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x2499a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x2499a4: 0x27a40284  addiu       $a0, $sp, 0x284
    ctx->pc = 0x2499a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
    // 0x2499a8: 0xc054648  jal         func_151920
    ctx->pc = 0x2499A8u;
    SET_GPR_U32(ctx, 31, 0x2499B0u);
    ctx->pc = 0x151920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151920u, 0x2499A8u, 0x2499B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2499B0u;
label_2499b0:
    // 0x2499b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2499b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2499b4: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x2499b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2499b8: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2499B8u;
    {
        const bool branch_taken_0x2499b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2499b8) {
            ctx->pc = 0x2499F8u;
            goto label_2499f8;
        }
    }
    ctx->pc = 0x2499C0u;
    // 0x2499c0: 0x27a40284  addiu       $a0, $sp, 0x284
    ctx->pc = 0x2499c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
    // 0x2499c4: 0xc064054  jal         func_190150
    ctx->pc = 0x2499C4u;
    SET_GPR_U32(ctx, 31, 0x2499CCu);
    ctx->pc = 0x190150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190150u, 0x2499C4u, 0x2499CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2499CCu;
label_2499cc:
    // 0x2499cc: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x2499ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2499d0: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x2499d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x2499d4: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x2499d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x2499d8: 0xc053ba4  jal         func_14EE90
    ctx->pc = 0x2499D8u;
    SET_GPR_U32(ctx, 31, 0x2499E0u);
    ctx->pc = 0x14EE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE90u, 0x2499D8u, 0x2499E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2499E0u;
label_2499e0:
    // 0x2499e0: 0x27a40284  addiu       $a0, $sp, 0x284
    ctx->pc = 0x2499e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
    // 0x2499e4: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x2499e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x2499e8: 0xc041998  jal         func_106660
    ctx->pc = 0x2499E8u;
    SET_GPR_U32(ctx, 31, 0x2499F0u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x2499E8u, 0x2499F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2499F0u;
label_2499f0:
    // 0x2499f0: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2499F0u;
    {
        const bool branch_taken_0x2499f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2499f0) {
            ctx->pc = 0x24999Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24999c;
        }
    }
    ctx->pc = 0x2499F8u;
label_2499f8:
    // 0x2499f8: 0x27a40288  addiu       $a0, $sp, 0x288
    ctx->pc = 0x2499f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
    // 0x2499fc: 0x27a50284  addiu       $a1, $sp, 0x284
    ctx->pc = 0x2499fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
    // 0x249a00: 0xc064744  jal         func_191D10
    ctx->pc = 0x249A00u;
    SET_GPR_U32(ctx, 31, 0x249A08u);
    ctx->pc = 0x191D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191D10u, 0x249A00u, 0x249A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A08u;
label_249a08:
    // 0x249a08: 0x33c300ff  andi        $v1, $fp, 0xFF
    ctx->pc = 0x249a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x249a0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249a10: 0x1462012e  bne         $v1, $v0, . + 4 + (0x12E << 2)
    ctx->pc = 0x249A10u;
    {
        const bool branch_taken_0x249a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x249a10) {
            ctx->pc = 0x249ECCu;
            goto label_249ecc;
        }
    }
    ctx->pc = 0x249A18u;
    // 0x249a18: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x249a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x249a1c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x249a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x249a20: 0x1040012a  beqz        $v0, . + 4 + (0x12A << 2)
    ctx->pc = 0x249A20u;
    {
        const bool branch_taken_0x249a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249a20) {
            ctx->pc = 0x249ECCu;
            goto label_249ecc;
        }
    }
    ctx->pc = 0x249A28u;
    // 0x249a28: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x249a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x249a2c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x249a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x249a30: 0xc085538  jal         func_2154E0
    ctx->pc = 0x249A30u;
    SET_GPR_U32(ctx, 31, 0x249A38u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x249A30u, 0x249A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A38u;
label_249a38:
    // 0x249a38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x249a38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249a3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x249a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249a40: 0xc091ca0  jal         func_247280
    ctx->pc = 0x249A40u;
    SET_GPR_U32(ctx, 31, 0x249A48u);
    ctx->pc = 0x247280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247280u, 0x249A40u, 0x249A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A48u;
label_249a48:
    // 0x249a48: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x249a48u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x249a4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x249a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249a50: 0xc091ca0  jal         func_247280
    ctx->pc = 0x249A50u;
    SET_GPR_U32(ctx, 31, 0x249A58u);
    ctx->pc = 0x247280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247280u, 0x249A50u, 0x249A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A58u;
label_249a58:
    // 0x249a58: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x249a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x249a5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x249a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249a60: 0xc091ca0  jal         func_247280
    ctx->pc = 0x249A60u;
    SET_GPR_U32(ctx, 31, 0x249A68u);
    ctx->pc = 0x247280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247280u, 0x249A60u, 0x249A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A68u;
label_249a68:
    // 0x249a68: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x249a68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x249a6c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x249a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x249a70: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x249a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x249a74: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x249a74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x249a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x249a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249a7c: 0xc091ca0  jal         func_247280
    ctx->pc = 0x249A7Cu;
    SET_GPR_U32(ctx, 31, 0x249A84u);
    ctx->pc = 0x247280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247280u, 0x249A7Cu, 0x249A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A84u;
label_249a84:
    // 0x249a84: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x249a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x249a88: 0xafa20280  sw          $v0, 0x280($sp)
    ctx->pc = 0x249a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
    // 0x249a8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x249a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249a90: 0xc091ca0  jal         func_247280
    ctx->pc = 0x249A90u;
    SET_GPR_U32(ctx, 31, 0x249A98u);
    ctx->pc = 0x247280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247280u, 0x249A90u, 0x249A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A98u;
label_249a98:
    // 0x249a98: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x249a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x249a9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x249a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249aa0: 0xc091ca0  jal         func_247280
    ctx->pc = 0x249AA0u;
    SET_GPR_U32(ctx, 31, 0x249AA8u);
    ctx->pc = 0x247280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247280u, 0x249AA0u, 0x249AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249AA8u;
label_249aa8:
    // 0x249aa8: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x249aa8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x249aac: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x249aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x249ab0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x249ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x249ab4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x249ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x249ab8: 0xafa2027c  sw          $v0, 0x27C($sp)
    ctx->pc = 0x249ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 2));
    // 0x249abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249ac0: 0xc090fa0  jal         func_243E80
    ctx->pc = 0x249AC0u;
    SET_GPR_U32(ctx, 31, 0x249AC8u);
    ctx->pc = 0x243E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E80u, 0x249AC0u, 0x249AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249AC8u;
label_249ac8:
    // 0x249ac8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x249ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249acc: 0xc042214  jal         func_108850
    ctx->pc = 0x249ACCu;
    SET_GPR_U32(ctx, 31, 0x249AD4u);
    ctx->pc = 0x108850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108850u, 0x249ACCu, 0x249AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249AD4u;
label_249ad4:
    // 0x249ad4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x249ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x249ad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249adc: 0xc090fa0  jal         func_243E80
    ctx->pc = 0x249ADCu;
    SET_GPR_U32(ctx, 31, 0x249AE4u);
    ctx->pc = 0x243E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E80u, 0x249ADCu, 0x249AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249AE4u;
label_249ae4:
    // 0x249ae4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x249ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249ae8: 0xc0421f8  jal         func_1087E0
    ctx->pc = 0x249AE8u;
    SET_GPR_U32(ctx, 31, 0x249AF0u);
    ctx->pc = 0x1087E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1087E0u, 0x249AE8u, 0x249AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249AF0u;
label_249af0:
    // 0x249af0: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x249af0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x249af4: 0x62a821  addu        $s5, $v1, $v0
    ctx->pc = 0x249af4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x249af8: 0xafa00278  sw          $zero, 0x278($sp)
    ctx->pc = 0x249af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 0));
    // 0x249afc: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x249afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x249b00: 0xafa20274  sw          $v0, 0x274($sp)
    ctx->pc = 0x249b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
    // 0x249b04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249b08: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x249b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
    // 0x249b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249b10: 0xc091010  jal         func_244040
    ctx->pc = 0x249B10u;
    SET_GPR_U32(ctx, 31, 0x249B18u);
    ctx->pc = 0x244040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244040u, 0x249B10u, 0x249B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B18u;
label_249b18:
    // 0x249b18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x249b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249b1c: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x249B1Cu;
    {
        const bool branch_taken_0x249b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x249b1c) {
            ctx->pc = 0x249B3Cu;
            goto label_249b3c;
        }
    }
    ctx->pc = 0x249B24u;
    // 0x249b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249b28: 0xc091010  jal         func_244040
    ctx->pc = 0x249B28u;
    SET_GPR_U32(ctx, 31, 0x249B30u);
    ctx->pc = 0x244040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244040u, 0x249B28u, 0x249B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B30u;
label_249b30:
    // 0x249b30: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x249b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x249b34: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x249B34u;
    {
        const bool branch_taken_0x249b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x249b34) {
            ctx->pc = 0x249B58u;
            goto label_249b58;
        }
    }
    ctx->pc = 0x249B3Cu;
label_249b3c:
    // 0x249b3c: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x249b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x249b40: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x249b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x249b44: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x249B44u;
    SET_GPR_U32(ctx, 31, 0x249B4Cu);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x249B44u, 0x249B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B4Cu;
label_249b4c:
    // 0x249b4c: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x249b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x249b50: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x249b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x249b54: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x249b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_249b58:
    // 0x249b58: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x249b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x249b5c: 0x2a21818  mult        $v1, $s5, $v0
    ctx->pc = 0x249b5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x249b60: 0x8fa2028c  lw          $v0, 0x28C($sp)
    ctx->pc = 0x249b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x249b64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x249b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x249b68: 0xafa2026c  sw          $v0, 0x26C($sp)
    ctx->pc = 0x249b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
    // 0x249b6c: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x249b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x249b70: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x249b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x249b74: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x249b74u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x249b78: 0x8fa2028c  lw          $v0, 0x28C($sp)
    ctx->pc = 0x249b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x249b7c: 0xafa20268  sw          $v0, 0x268($sp)
    ctx->pc = 0x249b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
    // 0x249b80: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x249B80u;
    {
        const bool branch_taken_0x249b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249b80) {
            ctx->pc = 0x249E7Cu;
            goto label_249e7c;
        }
    }
    ctx->pc = 0x249B88u;
label_249b88:
    // 0x249b88: 0x27a40284  addiu       $a0, $sp, 0x284
    ctx->pc = 0x249b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
    // 0x249b8c: 0xc064054  jal         func_190150
    ctx->pc = 0x249B8Cu;
    SET_GPR_U32(ctx, 31, 0x249B94u);
    ctx->pc = 0x190150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190150u, 0x249B8Cu, 0x249B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B94u;
label_249b94:
    // 0x249b94: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x249b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x249b98: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x249b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x249b9c: 0x27a40284  addiu       $a0, $sp, 0x284
    ctx->pc = 0x249b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
    // 0x249ba0: 0xc054648  jal         func_151920
    ctx->pc = 0x249BA0u;
    SET_GPR_U32(ctx, 31, 0x249BA8u);
    ctx->pc = 0x151920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151920u, 0x249BA0u, 0x249BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249BA8u;
label_249ba8:
    // 0x249ba8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x249ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x249bac: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x249bacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x249bb0: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x249BB0u;
    {
        const bool branch_taken_0x249bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x249bb0) {
            ctx->pc = 0x249BE4u;
            goto label_249be4;
        }
    }
    ctx->pc = 0x249BB8u;
    // 0x249bb8: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x249bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x249bbc: 0x27a4023c  addiu       $a0, $sp, 0x23C
    ctx->pc = 0x249bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 572));
    // 0x249bc0: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x249bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x249bc4: 0xc053ba4  jal         func_14EE90
    ctx->pc = 0x249BC4u;
    SET_GPR_U32(ctx, 31, 0x249BCCu);
    ctx->pc = 0x14EE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE90u, 0x249BC4u, 0x249BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249BCCu;
label_249bcc:
    // 0x249bcc: 0x27a40284  addiu       $a0, $sp, 0x284
    ctx->pc = 0x249bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
    // 0x249bd0: 0x27a5023c  addiu       $a1, $sp, 0x23C
    ctx->pc = 0x249bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 572));
    // 0x249bd4: 0xc041998  jal         func_106660
    ctx->pc = 0x249BD4u;
    SET_GPR_U32(ctx, 31, 0x249BDCu);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x249BD4u, 0x249BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249BDCu;
label_249bdc:
    // 0x249bdc: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x249BDCu;
    {
        const bool branch_taken_0x249bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249bdc) {
            ctx->pc = 0x249B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249b88;
        }
    }
    ctx->pc = 0x249BE4u;
label_249be4:
    // 0x249be4: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x249be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x249be8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x249be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x249bec: 0x27a40284  addiu       $a0, $sp, 0x284
    ctx->pc = 0x249becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
    // 0x249bf0: 0xc053b9c  jal         func_14EE70
    ctx->pc = 0x249BF0u;
    SET_GPR_U32(ctx, 31, 0x249BF8u);
    ctx->pc = 0x14EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE70u, 0x249BF0u, 0x249BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249BF8u;
label_249bf8:
    // 0x249bf8: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x249bf8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x249bfc: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x249bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x249c00: 0x27a40284  addiu       $a0, $sp, 0x284
    ctx->pc = 0x249c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
    // 0x249c04: 0xc053b9c  jal         func_14EE70
    ctx->pc = 0x249C04u;
    SET_GPR_U32(ctx, 31, 0x249C0Cu);
    ctx->pc = 0x14EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE70u, 0x249C04u, 0x249C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C0Cu;
label_249c0c:
    // 0x249c0c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x249c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x249c10: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x249c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x249c14: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x249c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x249c18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x249c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249c1c: 0xc091ca8  jal         func_2472A0
    ctx->pc = 0x249C1Cu;
    SET_GPR_U32(ctx, 31, 0x249C24u);
    ctx->pc = 0x2472A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2472A0u, 0x249C1Cu, 0x249C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C24u;
label_249c24:
    // 0x249c24: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x249c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x249c28: 0x27a50284  addiu       $a1, $sp, 0x284
    ctx->pc = 0x249c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
    // 0x249c2c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x249c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249c30: 0xc054648  jal         func_151920
    ctx->pc = 0x249C30u;
    SET_GPR_U32(ctx, 31, 0x249C38u);
    ctx->pc = 0x151920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151920u, 0x249C30u, 0x249C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C38u;
label_249c38:
    // 0x249c38: 0x7ba40120  lq          $a0, 0x120($sp)
    ctx->pc = 0x249c38u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x249c3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x249c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249c40: 0xc0444e0  jal         func_111380
    ctx->pc = 0x249C40u;
    SET_GPR_U32(ctx, 31, 0x249C48u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x249C40u, 0x249C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C48u;
label_249c48:
    // 0x249c48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x249c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249c4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x249c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249c50: 0xc092834  jal         func_24A0D0
    ctx->pc = 0x249C50u;
    SET_GPR_U32(ctx, 31, 0x249C58u);
    ctx->pc = 0x24A0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A0D0u, 0x249C50u, 0x249C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C58u;
label_249c58:
    // 0x249c58: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x249C58u;
    {
        const bool branch_taken_0x249c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249c58) {
            ctx->pc = 0x249C7Cu;
            goto label_249c7c;
        }
    }
    ctx->pc = 0x249C60u;
    // 0x249c60: 0x27a40284  addiu       $a0, $sp, 0x284
    ctx->pc = 0x249c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
    // 0x249c64: 0xc053b9c  jal         func_14EE70
    ctx->pc = 0x249C64u;
    SET_GPR_U32(ctx, 31, 0x249C6Cu);
    ctx->pc = 0x14EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE70u, 0x249C64u, 0x249C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C6Cu;
label_249c6c:
    // 0x249c6c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x249c6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249c70: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x249c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x249c74: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x249c74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x249c78: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x249c78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_249c7c:
    // 0x249c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249c80: 0xc091010  jal         func_244040
    ctx->pc = 0x249C80u;
    SET_GPR_U32(ctx, 31, 0x249C88u);
    ctx->pc = 0x244040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244040u, 0x249C80u, 0x249C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C88u;
label_249c88:
    // 0x249c88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x249c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249c8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x249c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x249c90: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x249C90u;
    {
        const bool branch_taken_0x249c90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x249c90) {
            ctx->pc = 0x249CB0u;
            goto label_249cb0;
        }
    }
    ctx->pc = 0x249C98u;
    // 0x249c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249c9c: 0xc091010  jal         func_244040
    ctx->pc = 0x249C9Cu;
    SET_GPR_U32(ctx, 31, 0x249CA4u);
    ctx->pc = 0x244040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244040u, 0x249C9Cu, 0x249CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249CA4u;
label_249ca4:
    // 0x249ca4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x249ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x249ca8: 0x14430038  bne         $v0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x249CA8u;
    {
        const bool branch_taken_0x249ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x249ca8) {
            ctx->pc = 0x249D8Cu;
            goto label_249d8c;
        }
    }
    ctx->pc = 0x249CB0u;
label_249cb0:
    // 0x249cb0: 0x8fa40278  lw          $a0, 0x278($sp)
    ctx->pc = 0x249cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x249cb4: 0x2a42823  subu        $a1, $s5, $a0
    ctx->pc = 0x249cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x249cb8: 0x2c5082b  sltu        $at, $s6, $a1
    ctx->pc = 0x249cb8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x249cbc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x249CBCu;
    {
        const bool branch_taken_0x249cbc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x249cbc) {
            ctx->pc = 0x249CD0u;
            goto label_249cd0;
        }
    }
    ctx->pc = 0x249CC4u;
    // 0x249cc4: 0xafa00230  sw          $zero, 0x230($sp)
    ctx->pc = 0x249cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 0));
    // 0x249cc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x249CC8u;
    {
        const bool branch_taken_0x249cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249cc8) {
            ctx->pc = 0x249CE8u;
            goto label_249ce8;
        }
    }
    ctx->pc = 0x249CD0u;
label_249cd0:
    // 0x249cd0: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x249cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x249cd4: 0x2c2001b  divu        $zero, $s6, $v0
    ctx->pc = 0x249cd4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 22) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 22) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,22); } }
    // 0x249cd8: 0x1810  mfhi        $v1
    ctx->pc = 0x249cd8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x249cdc: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x249cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x249ce0: 0x439823  subu        $s3, $v0, $v1
    ctx->pc = 0x249ce0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x249ce4: 0xafb30230  sw          $s3, 0x230($sp)
    ctx->pc = 0x249ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 19));
label_249ce8:
    // 0x249ce8: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x249ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x249cec: 0xafa30264  sw          $v1, 0x264($sp)
    ctx->pc = 0x249cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 3));
    // 0x249cf0: 0x8fa20274  lw          $v0, 0x274($sp)
    ctx->pc = 0x249cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
    // 0x249cf4: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x249cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x249cf8: 0x2e2082b  sltu        $at, $s7, $v0
    ctx->pc = 0x249cf8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x249cfc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x249CFCu;
    {
        const bool branch_taken_0x249cfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x249cfc) {
            ctx->pc = 0x249D14u;
            goto label_249d14;
        }
    }
    ctx->pc = 0x249D04u;
    // 0x249d04: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x249d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x249d08: 0xafa2022c  sw          $v0, 0x22C($sp)
    ctx->pc = 0x249d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 2));
    // 0x249d0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x249D0Cu;
    {
        const bool branch_taken_0x249d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249d0c) {
            ctx->pc = 0x249D2Cu;
            goto label_249d2c;
        }
    }
    ctx->pc = 0x249D14u;
label_249d14:
    // 0x249d14: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x249d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x249d18: 0x2e4001b  divu        $zero, $s7, $a0
    ctx->pc = 0x249d18u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 23) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 23) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,23); } }
    // 0x249d1c: 0x2810  mfhi        $a1
    ctx->pc = 0x249d1cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x249d20: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x249d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x249d24: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x249d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x249d28: 0xafa2022c  sw          $v0, 0x22C($sp)
    ctx->pc = 0x249d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 2));
label_249d2c:
    // 0x249d2c: 0x8fa5022c  lw          $a1, 0x22C($sp)
    ctx->pc = 0x249d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x249d30: 0xafa50260  sw          $a1, 0x260($sp)
    ctx->pc = 0x249d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 5));
    // 0x249d34: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x249d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x249d38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x249d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x249d3c: 0x22600  sll         $a0, $v0, 24
    ctx->pc = 0x249d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x249d40: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x249d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x249d44: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x249d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x249d48: 0x29c00  sll         $s3, $v0, 16
    ctx->pc = 0x249d48u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x249d4c: 0x931025  or          $v0, $a0, $s3
    ctx->pc = 0x249d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 19));
    // 0x249d50: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x249d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x249d54: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x249d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x249d58: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x249d58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x249d5c: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x249d5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x249d60: 0x8fa5027c  lw          $a1, 0x27C($sp)
    ctx->pc = 0x249d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
    // 0x249d64: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x249d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x249d68: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x249d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x249d6c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x249d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x249d70: 0x27a40284  addiu       $a0, $sp, 0x284
    ctx->pc = 0x249d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
    // 0x249d74: 0xc053b9c  jal         func_14EE70
    ctx->pc = 0x249D74u;
    SET_GPR_U32(ctx, 31, 0x249D7Cu);
    ctx->pc = 0x14EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE70u, 0x249D74u, 0x249D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249D7Cu;
label_249d7c:
    // 0x249d7c: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x249d7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x249d80: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x249d80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x249d84: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x249D84u;
    {
        const bool branch_taken_0x249d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249d84) {
            ctx->pc = 0x249E48u;
            goto label_249e48;
        }
    }
    ctx->pc = 0x249D8Cu;
label_249d8c:
    // 0x249d8c: 0x8fa40278  lw          $a0, 0x278($sp)
    ctx->pc = 0x249d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x249d90: 0x2e4082b  sltu        $at, $s7, $a0
    ctx->pc = 0x249d90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x249d94: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x249D94u;
    {
        const bool branch_taken_0x249d94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x249d94) {
            ctx->pc = 0x249DA8u;
            goto label_249da8;
        }
    }
    ctx->pc = 0x249D9Cu;
    // 0x249d9c: 0xafa00228  sw          $zero, 0x228($sp)
    ctx->pc = 0x249d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 0));
    // 0x249da0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x249DA0u;
    {
        const bool branch_taken_0x249da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249da0) {
            ctx->pc = 0x249DB8u;
            goto label_249db8;
        }
    }
    ctx->pc = 0x249DA8u;
label_249da8:
    // 0x249da8: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x249da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x249dac: 0x2e2001b  divu        $zero, $s7, $v0
    ctx->pc = 0x249dacu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 23) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 23) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,23); } }
    // 0x249db0: 0x1010  mfhi        $v0
    ctx->pc = 0x249db0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x249db4: 0xafa20228  sw          $v0, 0x228($sp)
    ctx->pc = 0x249db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
label_249db8:
    // 0x249db8: 0x8fa30228  lw          $v1, 0x228($sp)
    ctx->pc = 0x249db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x249dbc: 0xafa3025c  sw          $v1, 0x25C($sp)
    ctx->pc = 0x249dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 3));
    // 0x249dc0: 0x8fa20274  lw          $v0, 0x274($sp)
    ctx->pc = 0x249dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
    // 0x249dc4: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x249dc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x249dc8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x249DC8u;
    {
        const bool branch_taken_0x249dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249dc8) {
            ctx->pc = 0x249DE0u;
            goto label_249de0;
        }
    }
    ctx->pc = 0x249DD0u;
    // 0x249dd0: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x249dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x249dd4: 0xafa20224  sw          $v0, 0x224($sp)
    ctx->pc = 0x249dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
    // 0x249dd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x249DD8u;
    {
        const bool branch_taken_0x249dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249dd8) {
            ctx->pc = 0x249DF0u;
            goto label_249df0;
        }
    }
    ctx->pc = 0x249DE0u;
label_249de0:
    // 0x249de0: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x249de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x249de4: 0x2c4001b  divu        $zero, $s6, $a0
    ctx->pc = 0x249de4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 22) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 22) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,22); } }
    // 0x249de8: 0x2810  mfhi        $a1
    ctx->pc = 0x249de8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x249dec: 0xafa50224  sw          $a1, 0x224($sp)
    ctx->pc = 0x249decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 5));
label_249df0:
    // 0x249df0: 0x8fa20224  lw          $v0, 0x224($sp)
    ctx->pc = 0x249df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
    // 0x249df4: 0xafa20258  sw          $v0, 0x258($sp)
    ctx->pc = 0x249df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 2));
    // 0x249df8: 0x8fb2025c  lw          $s2, 0x25C($sp)
    ctx->pc = 0x249df8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
    // 0x249dfc: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x249dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x249e00: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x249e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x249e04: 0x8fa30258  lw          $v1, 0x258($sp)
    ctx->pc = 0x249e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x249e08: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x249e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x249e0c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x249e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x249e10: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x249e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x249e14: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x249e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x249e18: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x249e18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x249e1c: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x249e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x249e20: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x249e20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x249e24: 0x8fa2027c  lw          $v0, 0x27C($sp)
    ctx->pc = 0x249e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
    // 0x249e28: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x249e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x249e2c: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x249e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x249e30: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x249e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x249e34: 0x27a40284  addiu       $a0, $sp, 0x284
    ctx->pc = 0x249e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
    // 0x249e38: 0xc053b9c  jal         func_14EE70
    ctx->pc = 0x249E38u;
    SET_GPR_U32(ctx, 31, 0x249E40u);
    ctx->pc = 0x14EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE70u, 0x249E38u, 0x249E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E40u;
label_249e40:
    // 0x249e40: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x249e40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x249e44: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x249e44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_249e48:
    // 0x249e48: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x249e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x249e4c: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x249e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x249e50: 0xafa40278  sw          $a0, 0x278($sp)
    ctx->pc = 0x249e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 4));
    // 0x249e54: 0x8fa50274  lw          $a1, 0x274($sp)
    ctx->pc = 0x249e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
    // 0x249e58: 0x24a20050  addiu       $v0, $a1, 0x50
    ctx->pc = 0x249e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x249e5c: 0xafa20274  sw          $v0, 0x274($sp)
    ctx->pc = 0x249e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
    // 0x249e60: 0x27a40284  addiu       $a0, $sp, 0x284
    ctx->pc = 0x249e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
    // 0x249e64: 0xc064054  jal         func_190150
    ctx->pc = 0x249E64u;
    SET_GPR_U32(ctx, 31, 0x249E6Cu);
    ctx->pc = 0x190150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190150u, 0x249E64u, 0x249E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E6Cu;
label_249e6c:
    // 0x249e6c: 0x8fa40268  lw          $a0, 0x268($sp)
    ctx->pc = 0x249e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x249e70: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x249e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x249e74: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x249e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x249e78: 0xafa20268  sw          $v0, 0x268($sp)
    ctx->pc = 0x249e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
label_249e7c:
    // 0x249e7c: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x249e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x249e80: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x249e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x249e84: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x249e84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x249e88: 0x1440ff42  bnez        $v0, . + 4 + (-0xBE << 2)
    ctx->pc = 0x249E88u;
    {
        const bool branch_taken_0x249e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249e88) {
            ctx->pc = 0x249B94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249b94;
        }
    }
    ctx->pc = 0x249E90u;
    // 0x249e90: 0x93a502e0  lbu         $a1, 0x2E0($sp)
    ctx->pc = 0x249e90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x249e94: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x249e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x249e98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249e9c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x249E9Cu;
    {
        const bool branch_taken_0x249e9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x249e9c) {
            ctx->pc = 0x249ED8u;
            goto label_249ed8;
        }
    }
    ctx->pc = 0x249EA4u;
    // 0x249ea4: 0x8fa602b0  lw          $a2, 0x2B0($sp)
    ctx->pc = 0x249ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x249ea8: 0x8cc4002c  lw          $a0, 0x2C($a2)
    ctx->pc = 0x249ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x249eac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x249eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x249eb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x249eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249eb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x249eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249eb8: 0xc0913a0  jal         func_244E80
    ctx->pc = 0x249EB8u;
    SET_GPR_U32(ctx, 31, 0x249EC0u);
    ctx->pc = 0x244E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E80u, 0x249EB8u, 0x249EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249EC0u;
label_249ec0:
    // 0x249ec0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x249ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249ec4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x249EC4u;
    {
        const bool branch_taken_0x249ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249ec4) {
            ctx->pc = 0x249ED8u;
            goto label_249ed8;
        }
    }
    ctx->pc = 0x249ECCu;
label_249ecc:
    // 0x249ecc: 0x33c200ff  andi        $v0, $fp, 0xFF
    ctx->pc = 0x249eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x249ed0: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x249ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x249ed4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x249ed4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_249ed8:
    // 0x249ed8: 0x8fa3028c  lw          $v1, 0x28C($sp)
    ctx->pc = 0x249ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x249edc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x249edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x249ee0: 0x10620069  beq         $v1, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x249EE0u;
    {
        const bool branch_taken_0x249ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x249ee0) {
            ctx->pc = 0x24A088u;
            goto label_24a088;
        }
    }
    ctx->pc = 0x249EE8u;
    // 0x249ee8: 0x27a40288  addiu       $a0, $sp, 0x288
    ctx->pc = 0x249ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
    // 0x249eec: 0xc053b9c  jal         func_14EE70
    ctx->pc = 0x249EECu;
    SET_GPR_U32(ctx, 31, 0x249EF4u);
    ctx->pc = 0x14EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE70u, 0x249EECu, 0x249EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249EF4u;
label_249ef4:
    // 0x249ef4: 0xafa20254  sw          $v0, 0x254($sp)
    ctx->pc = 0x249ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 2));
    // 0x249ef8: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x249ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x249efc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x249efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x249f00: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x249f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x249f04: 0xc085538  jal         func_2154E0
    ctx->pc = 0x249F04u;
    SET_GPR_U32(ctx, 31, 0x249F0Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x249F04u, 0x249F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249F0Cu;
label_249f0c:
    // 0x249f0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x249f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249f10: 0xafa40250  sw          $a0, 0x250($sp)
    ctx->pc = 0x249f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 4));
    // 0x249f14: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x249f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x249f18: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x249f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249f1c: 0x8fa50250  lw          $a1, 0x250($sp)
    ctx->pc = 0x249f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x249f20: 0xc090f80  jal         func_243E00
    ctx->pc = 0x249F20u;
    SET_GPR_U32(ctx, 31, 0x249F28u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x249F20u, 0x249F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249F28u;
label_249f28:
    // 0x249f28: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x249f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x249f2c: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x249f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x249f30: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x249f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x249f34: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x249f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249f38: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x249f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249f3c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x249f3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x249f40: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x249f40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x249f44: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x249f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x249f48: 0x27a40288  addiu       $a0, $sp, 0x288
    ctx->pc = 0x249f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
    // 0x249f4c: 0xc054648  jal         func_151920
    ctx->pc = 0x249F4Cu;
    SET_GPR_U32(ctx, 31, 0x249F54u);
    ctx->pc = 0x151920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151920u, 0x249F4Cu, 0x249F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249F54u;
label_249f54:
    // 0x249f54: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x249f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x249f58: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x249F58u;
    {
        const bool branch_taken_0x249f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249f58) {
            ctx->pc = 0x249F90u;
            goto label_249f90;
        }
    }
    ctx->pc = 0x249F60u;
    // 0x249f60: 0x27a40288  addiu       $a0, $sp, 0x288
    ctx->pc = 0x249f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
    // 0x249f64: 0xc054648  jal         func_151920
    ctx->pc = 0x249F64u;
    SET_GPR_U32(ctx, 31, 0x249F6Cu);
    ctx->pc = 0x151920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151920u, 0x249F64u, 0x249F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249F6Cu;
label_249f6c:
    // 0x249f6c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x249f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x249f70: 0xc094d24  jal         func_253490
    ctx->pc = 0x249F70u;
    SET_GPR_U32(ctx, 31, 0x249F78u);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x249F70u, 0x249F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249F78u;
label_249f78:
    // 0x249f78: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x249f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x249f7c: 0xc094ff8  jal         func_253FE0
    ctx->pc = 0x249F7Cu;
    SET_GPR_U32(ctx, 31, 0x249F84u);
    ctx->pc = 0x253FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253FE0u, 0x249F7Cu, 0x249F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249F84u;
label_249f84:
    // 0x249f84: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x249f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x249f88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x249F88u;
    {
        const bool branch_taken_0x249f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249f88) {
            ctx->pc = 0x249F9Cu;
            goto label_249f9c;
        }
    }
    ctx->pc = 0x249F90u;
label_249f90:
    // 0x249f90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x249f90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249f94: 0x0  nop
    ctx->pc = 0x249f94u;
    // NOP
    // 0x249f98: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x249f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_249f9c:
    // 0x249f9c: 0xc7a00220  lwc1        $f0, 0x220($sp)
    ctx->pc = 0x249f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249fa0: 0xe7a0024c  swc1        $f0, 0x24C($sp)
    ctx->pc = 0x249fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 588), bits); }
    // 0x249fa4: 0x27a50288  addiu       $a1, $sp, 0x288
    ctx->pc = 0x249fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
    // 0x249fa8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x249fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249fac: 0xc054648  jal         func_151920
    ctx->pc = 0x249FACu;
    SET_GPR_U32(ctx, 31, 0x249FB4u);
    ctx->pc = 0x151920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151920u, 0x249FACu, 0x249FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249FB4u;
label_249fb4:
    // 0x249fb4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x249fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x249fb8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x249FB8u;
    {
        const bool branch_taken_0x249fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249fb8) {
            ctx->pc = 0x249FF4u;
            goto label_249ff4;
        }
    }
    ctx->pc = 0x249FC0u;
    // 0x249fc0: 0x27a40288  addiu       $a0, $sp, 0x288
    ctx->pc = 0x249fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
    // 0x249fc4: 0xc054648  jal         func_151920
    ctx->pc = 0x249FC4u;
    SET_GPR_U32(ctx, 31, 0x249FCCu);
    ctx->pc = 0x151920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151920u, 0x249FC4u, 0x249FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249FCCu;
label_249fcc:
    // 0x249fcc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x249fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x249fd0: 0xc094d24  jal         func_253490
    ctx->pc = 0x249FD0u;
    SET_GPR_U32(ctx, 31, 0x249FD8u);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x249FD0u, 0x249FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249FD8u;
label_249fd8:
    // 0x249fd8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x249fd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249fdc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x249fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x249fe0: 0xc094ff8  jal         func_253FE0
    ctx->pc = 0x249FE0u;
    SET_GPR_U32(ctx, 31, 0x249FE8u);
    ctx->pc = 0x253FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253FE0u, 0x249FE0u, 0x249FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249FE8u;
label_249fe8:
    // 0x249fe8: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x249fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
    // 0x249fec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x249FECu;
    {
        const bool branch_taken_0x249fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249fec) {
            ctx->pc = 0x24A000u;
            goto label_24a000;
        }
    }
    ctx->pc = 0x249FF4u;
label_249ff4:
    // 0x249ff4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x249ff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249ff8: 0x0  nop
    ctx->pc = 0x249ff8u;
    // NOP
    // 0x249ffc: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x249ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
label_24a000:
    // 0x24a000: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x24a000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a004: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x24a004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x24a008: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x24a008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x24a00c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24a00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a010: 0xc090f80  jal         func_243E00
    ctx->pc = 0x24A010u;
    SET_GPR_U32(ctx, 31, 0x24A018u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x24A010u, 0x24A018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A018u;
label_24a018:
    // 0x24a018: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x24a018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x24a01c: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x24a01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x24a020: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x24a020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24a024: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24a024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a028: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x24a028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a02c: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x24a02cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x24a030: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x24a030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x24a034: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x24a034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x24a038: 0xc7a1024c  lwc1        $f1, 0x24C($sp)
    ctx->pc = 0x24a038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a03c: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x24a03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a040: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24a040u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a044: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24A044u;
    {
        const bool branch_taken_0x24a044 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24a044) {
            ctx->pc = 0x24A05Cu;
            goto label_24a05c;
        }
    }
    ctx->pc = 0x24A04Cu;
    // 0x24a04c: 0xc7a0024c  lwc1        $f0, 0x24C($sp)
    ctx->pc = 0x24a04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a050: 0xe7a00218  swc1        $f0, 0x218($sp)
    ctx->pc = 0x24a050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x24a054: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24A054u;
    {
        const bool branch_taken_0x24a054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a054) {
            ctx->pc = 0x24A064u;
            goto label_24a064;
        }
    }
    ctx->pc = 0x24A05Cu;
label_24a05c:
    // 0x24a05c: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x24a05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a060: 0xe7a00218  swc1        $f0, 0x218($sp)
    ctx->pc = 0x24a060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_24a064:
    // 0x24a064: 0xc7a101e4  lwc1        $f1, 0x1E4($sp)
    ctx->pc = 0x24a064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a068: 0xc7a00218  lwc1        $f0, 0x218($sp)
    ctx->pc = 0x24a068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a06c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24a06cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24a070: 0xe7a001d4  swc1        $f0, 0x1D4($sp)
    ctx->pc = 0x24a070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
    // 0x24a074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a078: 0x27a201d0  addiu       $v0, $sp, 0x1D0
    ctx->pc = 0x24a078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x24a07c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24a07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a080: 0xc090f14  jal         func_243C50
    ctx->pc = 0x24A080u;
    SET_GPR_U32(ctx, 31, 0x24A088u);
    ctx->pc = 0x243C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C50u, 0x24A080u, 0x24A088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A088u;
label_24a088:
    // 0x24a088: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x24a088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a08c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24A08Cu;
    {
        const bool branch_taken_0x24a08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a08c) {
            ctx->pc = 0x24A098u;
            goto label_24a098;
        }
    }
    ctx->pc = 0x24A094u;
label_24a094:
    // 0x24a094: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24a094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a098:
    // 0x24a098: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24a098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24a09c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x24a09cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24a0a0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x24a0a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24a0a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x24a0a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24a0a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x24a0a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24a0ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24a0acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24a0b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24a0b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24a0b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24a0b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24a0b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24a0b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a0bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24a0bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a0c0: 0x27bd02f0  addiu       $sp, $sp, 0x2F0
    ctx->pc = 0x24a0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x24a0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x24A0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A0CCu;
    // 0x24a0cc: 0x0  nop
    ctx->pc = 0x24a0ccu;
    // NOP
    ctx->pc = 0x24a0d0u;
}
