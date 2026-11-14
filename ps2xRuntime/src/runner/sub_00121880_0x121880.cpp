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

// Function: sub_00121880
// Address: 0x121880 - 0x121b50
void sub_00121880_0x121880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121880_0x121880");
#endif

    switch (ctx->pc) {
        case 0x121880u: goto label_121880;
        case 0x121884u: goto label_121884;
        case 0x121888u: goto label_121888;
        case 0x12188cu: goto label_12188c;
        case 0x121890u: goto label_121890;
        case 0x121894u: goto label_121894;
        case 0x121898u: goto label_121898;
        case 0x12189cu: goto label_12189c;
        case 0x1218a0u: goto label_1218a0;
        case 0x1218a4u: goto label_1218a4;
        case 0x1218a8u: goto label_1218a8;
        case 0x1218acu: goto label_1218ac;
        case 0x1218b0u: goto label_1218b0;
        case 0x1218b4u: goto label_1218b4;
        case 0x1218b8u: goto label_1218b8;
        case 0x1218bcu: goto label_1218bc;
        case 0x1218c0u: goto label_1218c0;
        case 0x1218c4u: goto label_1218c4;
        case 0x1218c8u: goto label_1218c8;
        case 0x1218ccu: goto label_1218cc;
        case 0x1218d0u: goto label_1218d0;
        case 0x1218d4u: goto label_1218d4;
        case 0x1218d8u: goto label_1218d8;
        case 0x1218dcu: goto label_1218dc;
        case 0x1218e0u: goto label_1218e0;
        case 0x1218e4u: goto label_1218e4;
        case 0x1218e8u: goto label_1218e8;
        case 0x1218ecu: goto label_1218ec;
        case 0x1218f0u: goto label_1218f0;
        case 0x1218f4u: goto label_1218f4;
        case 0x1218f8u: goto label_1218f8;
        case 0x1218fcu: goto label_1218fc;
        case 0x121900u: goto label_121900;
        case 0x121904u: goto label_121904;
        case 0x121908u: goto label_121908;
        case 0x12190cu: goto label_12190c;
        case 0x121910u: goto label_121910;
        case 0x121914u: goto label_121914;
        case 0x121918u: goto label_121918;
        case 0x12191cu: goto label_12191c;
        case 0x121920u: goto label_121920;
        case 0x121924u: goto label_121924;
        case 0x121928u: goto label_121928;
        case 0x12192cu: goto label_12192c;
        case 0x121930u: goto label_121930;
        case 0x121934u: goto label_121934;
        case 0x121938u: goto label_121938;
        case 0x12193cu: goto label_12193c;
        case 0x121940u: goto label_121940;
        case 0x121944u: goto label_121944;
        case 0x121948u: goto label_121948;
        case 0x12194cu: goto label_12194c;
        case 0x121950u: goto label_121950;
        case 0x121954u: goto label_121954;
        case 0x121958u: goto label_121958;
        case 0x12195cu: goto label_12195c;
        case 0x121960u: goto label_121960;
        case 0x121964u: goto label_121964;
        case 0x121968u: goto label_121968;
        case 0x12196cu: goto label_12196c;
        case 0x121970u: goto label_121970;
        case 0x121974u: goto label_121974;
        case 0x121978u: goto label_121978;
        case 0x12197cu: goto label_12197c;
        case 0x121980u: goto label_121980;
        case 0x121984u: goto label_121984;
        case 0x121988u: goto label_121988;
        case 0x12198cu: goto label_12198c;
        case 0x121990u: goto label_121990;
        case 0x121994u: goto label_121994;
        case 0x121998u: goto label_121998;
        case 0x12199cu: goto label_12199c;
        case 0x1219a0u: goto label_1219a0;
        case 0x1219a4u: goto label_1219a4;
        case 0x1219a8u: goto label_1219a8;
        case 0x1219acu: goto label_1219ac;
        case 0x1219b0u: goto label_1219b0;
        case 0x1219b4u: goto label_1219b4;
        case 0x1219b8u: goto label_1219b8;
        case 0x1219bcu: goto label_1219bc;
        case 0x1219c0u: goto label_1219c0;
        case 0x1219c4u: goto label_1219c4;
        case 0x1219c8u: goto label_1219c8;
        case 0x1219ccu: goto label_1219cc;
        case 0x1219d0u: goto label_1219d0;
        case 0x1219d4u: goto label_1219d4;
        case 0x1219d8u: goto label_1219d8;
        case 0x1219dcu: goto label_1219dc;
        case 0x1219e0u: goto label_1219e0;
        case 0x1219e4u: goto label_1219e4;
        case 0x1219e8u: goto label_1219e8;
        case 0x1219ecu: goto label_1219ec;
        case 0x1219f0u: goto label_1219f0;
        case 0x1219f4u: goto label_1219f4;
        case 0x1219f8u: goto label_1219f8;
        case 0x1219fcu: goto label_1219fc;
        case 0x121a00u: goto label_121a00;
        case 0x121a04u: goto label_121a04;
        case 0x121a08u: goto label_121a08;
        case 0x121a0cu: goto label_121a0c;
        case 0x121a10u: goto label_121a10;
        case 0x121a14u: goto label_121a14;
        case 0x121a18u: goto label_121a18;
        case 0x121a1cu: goto label_121a1c;
        case 0x121a20u: goto label_121a20;
        case 0x121a24u: goto label_121a24;
        case 0x121a28u: goto label_121a28;
        case 0x121a2cu: goto label_121a2c;
        case 0x121a30u: goto label_121a30;
        case 0x121a34u: goto label_121a34;
        case 0x121a38u: goto label_121a38;
        case 0x121a3cu: goto label_121a3c;
        case 0x121a40u: goto label_121a40;
        case 0x121a44u: goto label_121a44;
        case 0x121a48u: goto label_121a48;
        case 0x121a4cu: goto label_121a4c;
        case 0x121a50u: goto label_121a50;
        case 0x121a54u: goto label_121a54;
        case 0x121a58u: goto label_121a58;
        case 0x121a5cu: goto label_121a5c;
        case 0x121a60u: goto label_121a60;
        case 0x121a64u: goto label_121a64;
        case 0x121a68u: goto label_121a68;
        case 0x121a6cu: goto label_121a6c;
        case 0x121a70u: goto label_121a70;
        case 0x121a74u: goto label_121a74;
        case 0x121a78u: goto label_121a78;
        case 0x121a7cu: goto label_121a7c;
        case 0x121a80u: goto label_121a80;
        case 0x121a84u: goto label_121a84;
        case 0x121a88u: goto label_121a88;
        case 0x121a8cu: goto label_121a8c;
        case 0x121a90u: goto label_121a90;
        case 0x121a94u: goto label_121a94;
        case 0x121a98u: goto label_121a98;
        case 0x121a9cu: goto label_121a9c;
        case 0x121aa0u: goto label_121aa0;
        case 0x121aa4u: goto label_121aa4;
        case 0x121aa8u: goto label_121aa8;
        case 0x121aacu: goto label_121aac;
        case 0x121ab0u: goto label_121ab0;
        case 0x121ab4u: goto label_121ab4;
        case 0x121ab8u: goto label_121ab8;
        case 0x121abcu: goto label_121abc;
        case 0x121ac0u: goto label_121ac0;
        case 0x121ac4u: goto label_121ac4;
        case 0x121ac8u: goto label_121ac8;
        case 0x121accu: goto label_121acc;
        case 0x121ad0u: goto label_121ad0;
        case 0x121ad4u: goto label_121ad4;
        case 0x121ad8u: goto label_121ad8;
        case 0x121adcu: goto label_121adc;
        case 0x121ae0u: goto label_121ae0;
        case 0x121ae4u: goto label_121ae4;
        case 0x121ae8u: goto label_121ae8;
        case 0x121aecu: goto label_121aec;
        case 0x121af0u: goto label_121af0;
        case 0x121af4u: goto label_121af4;
        case 0x121af8u: goto label_121af8;
        case 0x121afcu: goto label_121afc;
        case 0x121b00u: goto label_121b00;
        case 0x121b04u: goto label_121b04;
        case 0x121b08u: goto label_121b08;
        case 0x121b0cu: goto label_121b0c;
        case 0x121b10u: goto label_121b10;
        case 0x121b14u: goto label_121b14;
        case 0x121b18u: goto label_121b18;
        case 0x121b1cu: goto label_121b1c;
        case 0x121b20u: goto label_121b20;
        case 0x121b24u: goto label_121b24;
        case 0x121b28u: goto label_121b28;
        case 0x121b2cu: goto label_121b2c;
        case 0x121b30u: goto label_121b30;
        case 0x121b34u: goto label_121b34;
        case 0x121b38u: goto label_121b38;
        case 0x121b3cu: goto label_121b3c;
        case 0x121b40u: goto label_121b40;
        case 0x121b44u: goto label_121b44;
        case 0x121b48u: goto label_121b48;
        case 0x121b4cu: goto label_121b4c;
        default: break;
    }

    ctx->pc = 0x121880u;

label_121880:
    // 0x121880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x121880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_121884:
    // 0x121884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x121884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_121888:
    // 0x121888: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x121888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_12188c:
    // 0x12188c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12188cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_121890:
    // 0x121890: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x121890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_121894:
    // 0x121894: 0xc047ae8  jal         func_11EBA0
label_121898:
    if (ctx->pc == 0x121898u) {
        ctx->pc = 0x12189Cu;
        goto label_12189c;
    }
    ctx->pc = 0x121894u;
    SET_GPR_U32(ctx, 31, 0x12189Cu);
    ctx->pc = 0x11EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBA0u, 0x121894u, 0x12189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12189Cu;
label_12189c:
    // 0x12189c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x12189cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1218a0:
    // 0x1218a0: 0x24633620  addiu       $v1, $v1, 0x3620
    ctx->pc = 0x1218a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
label_1218a4:
    // 0x1218a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1218a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1218a8:
    // 0x1218a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1218a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1218ac:
    // 0x1218ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1218acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1218b0:
    // 0x1218b0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1218b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1218b4:
    // 0x1218b4: 0x24a520f0  addiu       $a1, $a1, 0x20F0
    ctx->pc = 0x1218b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8432));
label_1218b8:
    // 0x1218b8: 0xc04322c  jal         func_10C8B0
label_1218bc:
    if (ctx->pc == 0x1218BCu) {
        ctx->pc = 0x1218C0u;
        goto label_1218c0;
    }
    ctx->pc = 0x1218B8u;
    SET_GPR_U32(ctx, 31, 0x1218C0u);
    ctx->pc = 0x10C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C8B0u, 0x1218B8u, 0x1218C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1218C0u;
label_1218c0:
    // 0x1218c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1218c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1218c4:
    // 0x1218c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1218c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1218c8:
    // 0x1218c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1218c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1218cc:
    // 0x1218cc: 0x3e00008  jr          $ra
label_1218d0:
    if (ctx->pc == 0x1218D0u) {
        ctx->pc = 0x1218D4u;
        goto label_1218d4;
    }
    ctx->pc = 0x1218CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1218CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1218D4u;
label_1218d4:
    // 0x1218d4: 0x0  nop
    ctx->pc = 0x1218d4u;
    // NOP
label_1218d8:
    // 0x1218d8: 0x0  nop
    ctx->pc = 0x1218d8u;
    // NOP
label_1218dc:
    // 0x1218dc: 0x0  nop
    ctx->pc = 0x1218dcu;
    // NOP
label_1218e0:
    // 0x1218e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1218e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1218e4:
    // 0x1218e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1218e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1218e8:
    // 0x1218e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1218e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1218ec:
    // 0x1218ec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1218ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_1218f0:
    // 0x1218f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1218f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1218f4:
    // 0x1218f4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1218f8:
    if (ctx->pc == 0x1218F8u) {
        ctx->pc = 0x1218FCu;
        goto label_1218fc;
    }
    ctx->pc = 0x1218F4u;
    {
        const bool branch_taken_0x1218f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1218f4) {
            ctx->pc = 0x12193Cu;
            goto label_12193c;
        }
    }
    ctx->pc = 0x1218FCu;
label_1218fc:
    // 0x1218fc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1218fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_121900:
    // 0x121900: 0x24633620  addiu       $v1, $v1, 0x3620
    ctx->pc = 0x121900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
label_121904:
    // 0x121904: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x121904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_121908:
    // 0x121908: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x121908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_12190c:
    // 0x12190c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12190cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_121910:
    // 0x121910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x121910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_121914:
    // 0x121914: 0xc047b00  jal         func_11EC00
label_121918:
    if (ctx->pc == 0x121918u) {
        ctx->pc = 0x12191Cu;
        goto label_12191c;
    }
    ctx->pc = 0x121914u;
    SET_GPR_U32(ctx, 31, 0x12191Cu);
    ctx->pc = 0x11EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EC00u, 0x121914u, 0x12191Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12191Cu;
label_12191c:
    // 0x12191c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x12191cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_121920:
    // 0x121920: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x121920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_121924:
    // 0x121924: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x121924u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_121928:
    // 0x121928: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_12192c:
    if (ctx->pc == 0x12192Cu) {
        ctx->pc = 0x121930u;
        goto label_121930;
    }
    ctx->pc = 0x121928u;
    {
        const bool branch_taken_0x121928 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x121928) {
            ctx->pc = 0x12193Cu;
            goto label_12193c;
        }
    }
    ctx->pc = 0x121930u;
label_121930:
    // 0x121930: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x121930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_121934:
    // 0x121934: 0xc0ba070  jal         func_2E81C0
label_121938:
    if (ctx->pc == 0x121938u) {
        ctx->pc = 0x12193Cu;
        goto label_12193c;
    }
    ctx->pc = 0x121934u;
    SET_GPR_U32(ctx, 31, 0x12193Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x121934u, 0x12193Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12193Cu;
label_12193c:
    // 0x12193c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12193cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_121940:
    // 0x121940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x121940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_121944:
    // 0x121944: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x121944u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_121948:
    // 0x121948: 0x3e00008  jr          $ra
label_12194c:
    if (ctx->pc == 0x12194Cu) {
        ctx->pc = 0x121950u;
        goto label_121950;
    }
    ctx->pc = 0x121948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121950u;
label_121950:
    // 0x121950: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x121950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_121954:
    // 0x121954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x121954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_121958:
    // 0x121958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x121958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_12195c:
    // 0x12195c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12195cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_121960:
    // 0x121960: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x121960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_121964:
    // 0x121964: 0xa3a50070  sb          $a1, 0x70($sp)
    ctx->pc = 0x121964u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 5));
label_121968:
    // 0x121968: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x121968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_12196c:
    // 0x12196c: 0x93a50070  lbu         $a1, 0x70($sp)
    ctx->pc = 0x12196cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_121970:
    // 0x121970: 0xc08edb0  jal         func_23B6C0
label_121974:
    if (ctx->pc == 0x121974u) {
        ctx->pc = 0x121978u;
        goto label_121978;
    }
    ctx->pc = 0x121970u;
    SET_GPR_U32(ctx, 31, 0x121978u);
    ctx->pc = 0x23B6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B6C0u, 0x121970u, 0x121978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121978u;
label_121978:
    // 0x121978: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x121978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_12197c:
    // 0x12197c: 0xc050c5c  jal         func_143170
label_121980:
    if (ctx->pc == 0x121980u) {
        ctx->pc = 0x121984u;
        goto label_121984;
    }
    ctx->pc = 0x12197Cu;
    SET_GPR_U32(ctx, 31, 0x121984u);
    ctx->pc = 0x143170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143170u, 0x12197Cu, 0x121984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121984u;
label_121984:
    // 0x121984: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x121984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121988:
    // 0x121988: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x121988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_12198c:
    // 0x12198c: 0x93a60070  lbu         $a2, 0x70($sp)
    ctx->pc = 0x12198cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_121990:
    // 0x121990: 0xc04fbf8  jal         func_13EFE0
label_121994:
    if (ctx->pc == 0x121994u) {
        ctx->pc = 0x121998u;
        goto label_121998;
    }
    ctx->pc = 0x121990u;
    SET_GPR_U32(ctx, 31, 0x121998u);
    ctx->pc = 0x13EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EFE0u, 0x121990u, 0x121998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121998u;
label_121998:
    // 0x121998: 0x8f84b9dc  lw          $a0, -0x4624($gp)
    ctx->pc = 0x121998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_12199c:
    // 0x12199c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x12199cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1219a0:
    // 0x1219a0: 0xc0553d4  jal         func_154F50
label_1219a4:
    if (ctx->pc == 0x1219A4u) {
        ctx->pc = 0x1219A8u;
        goto label_1219a8;
    }
    ctx->pc = 0x1219A0u;
    SET_GPR_U32(ctx, 31, 0x1219A8u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x1219A0u, 0x1219A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219A8u;
label_1219a8:
    // 0x1219a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1219a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1219ac:
    // 0x1219ac: 0x93a50070  lbu         $a1, 0x70($sp)
    ctx->pc = 0x1219acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_1219b0:
    // 0x1219b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1219b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1219b4:
    // 0x1219b4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1219b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1219b8:
    // 0x1219b8: 0x320f809  jalr        $t9
label_1219bc:
    if (ctx->pc == 0x1219BCu) {
        ctx->pc = 0x1219C0u;
        goto label_1219c0;
    }
    ctx->pc = 0x1219B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1219C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1219B8u, 0x1219C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1219C0u;
label_1219c0:
    // 0x1219c0: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x1219c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_1219c4:
    // 0x1219c4: 0xc050c5c  jal         func_143170
label_1219c8:
    if (ctx->pc == 0x1219C8u) {
        ctx->pc = 0x1219CCu;
        goto label_1219cc;
    }
    ctx->pc = 0x1219C4u;
    SET_GPR_U32(ctx, 31, 0x1219CCu);
    ctx->pc = 0x143170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143170u, 0x1219C4u, 0x1219CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219CCu;
label_1219cc:
    // 0x1219cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1219ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1219d0:
    // 0x1219d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1219d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1219d4:
    // 0x1219d4: 0xc04fbd0  jal         func_13EF40
label_1219d8:
    if (ctx->pc == 0x1219D8u) {
        ctx->pc = 0x1219DCu;
        goto label_1219dc;
    }
    ctx->pc = 0x1219D4u;
    SET_GPR_U32(ctx, 31, 0x1219DCu);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x1219D4u, 0x1219DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219DCu;
label_1219dc:
    // 0x1219dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1219dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1219e0:
    // 0x1219e0: 0x93a20070  lbu         $v0, 0x70($sp)
    ctx->pc = 0x1219e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_1219e4:
    // 0x1219e4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1219e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1219e8:
    // 0x1219e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1219e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1219ec:
    // 0x1219ec: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
label_1219f0:
    if (ctx->pc == 0x1219F0u) {
        ctx->pc = 0x1219F4u;
        goto label_1219f4;
    }
    ctx->pc = 0x1219ECu;
    {
        const bool branch_taken_0x1219ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1219ec) {
            ctx->pc = 0x121AACu;
            goto label_121aac;
        }
    }
    ctx->pc = 0x1219F4u;
label_1219f4:
    // 0x1219f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1219f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1219f8:
    // 0x1219f8: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x1219f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_1219fc:
    // 0x1219fc: 0x24a5b400  addiu       $a1, $a1, -0x4C00
    ctx->pc = 0x1219fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947840));
label_121a00:
    // 0x121a00: 0xc050240  jal         func_140900
label_121a04:
    if (ctx->pc == 0x121A04u) {
        ctx->pc = 0x121A08u;
        goto label_121a08;
    }
    ctx->pc = 0x121A00u;
    SET_GPR_U32(ctx, 31, 0x121A08u);
    ctx->pc = 0x140900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140900u, 0x121A00u, 0x121A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A08u;
label_121a08:
    // 0x121a08: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x121a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_121a0c:
    // 0x121a0c: 0xc050530  jal         func_1414C0
label_121a10:
    if (ctx->pc == 0x121A10u) {
        ctx->pc = 0x121A14u;
        goto label_121a14;
    }
    ctx->pc = 0x121A0Cu;
    SET_GPR_U32(ctx, 31, 0x121A14u);
    ctx->pc = 0x1414C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1414C0u, 0x121A0Cu, 0x121A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A14u;
label_121a14:
    // 0x121a14: 0x2402044c  addiu       $v0, $zero, 0x44C
    ctx->pc = 0x121a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1100));
label_121a18:
    // 0x121a18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x121a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_121a1c:
    // 0x121a1c: 0x0  nop
    ctx->pc = 0x121a1cu;
    // NOP
label_121a20:
    // 0x121a20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x121a20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_121a24:
    // 0x121a24: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x121a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_121a28:
    // 0x121a28: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x121a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_121a2c:
    // 0x121a2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x121a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_121a30:
    // 0x121a30: 0x0  nop
    ctx->pc = 0x121a30u;
    // NOP
label_121a34:
    // 0x121a34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x121a34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_121a38:
    // 0x121a38: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x121a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_121a3c:
    // 0x121a3c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x121a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_121a40:
    // 0x121a40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x121a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_121a44:
    // 0x121a44: 0x0  nop
    ctx->pc = 0x121a44u;
    // NOP
label_121a48:
    // 0x121a48: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x121a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_121a4c:
    // 0x121a4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x121a4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_121a50:
    // 0x121a50: 0x0  nop
    ctx->pc = 0x121a50u;
    // NOP
label_121a54:
    // 0x121a54: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x121a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_121a58:
    // 0x121a58: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x121a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_121a5c:
    // 0x121a5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x121a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_121a60:
    // 0x121a60: 0x0  nop
    ctx->pc = 0x121a60u;
    // NOP
label_121a64:
    // 0x121a64: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x121a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_121a68:
    // 0x121a68: 0x3c0242aa  lui         $v0, 0x42AA
    ctx->pc = 0x121a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17066 << 16));
label_121a6c:
    // 0x121a6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x121a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_121a70:
    // 0x121a70: 0x0  nop
    ctx->pc = 0x121a70u;
    // NOP
label_121a74:
    // 0x121a74: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x121a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_121a78:
    // 0x121a78: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x121a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_121a7c:
    // 0x121a7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x121a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_121a80:
    // 0x121a80: 0x0  nop
    ctx->pc = 0x121a80u;
    // NOP
label_121a84:
    // 0x121a84: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x121a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_121a88:
    // 0x121a88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x121a88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_121a8c:
    // 0x121a8c: 0x0  nop
    ctx->pc = 0x121a8cu;
    // NOP
label_121a90:
    // 0x121a90: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x121a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_121a94:
    // 0x121a94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_121a98:
    // 0x121a98: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x121a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_121a9c:
    // 0x121a9c: 0xc050194  jal         func_140650
label_121aa0:
    if (ctx->pc == 0x121AA0u) {
        ctx->pc = 0x121AA4u;
        goto label_121aa4;
    }
    ctx->pc = 0x121A9Cu;
    SET_GPR_U32(ctx, 31, 0x121AA4u);
    ctx->pc = 0x140650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140650u, 0x121A9Cu, 0x121AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121AA4u;
label_121aa4:
    // 0x121aa4: 0x10000006  b           . + 4 + (0x6 << 2)
label_121aa8:
    if (ctx->pc == 0x121AA8u) {
        ctx->pc = 0x121AACu;
        goto label_121aac;
    }
    ctx->pc = 0x121AA4u;
    {
        const bool branch_taken_0x121aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121aa4) {
            ctx->pc = 0x121AC0u;
            goto label_121ac0;
        }
    }
    ctx->pc = 0x121AACu;
label_121aac:
    // 0x121aac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_121ab0:
    // 0x121ab0: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x121ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_121ab4:
    // 0x121ab4: 0x24a5b400  addiu       $a1, $a1, -0x4C00
    ctx->pc = 0x121ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947840));
label_121ab8:
    // 0x121ab8: 0xc050194  jal         func_140650
label_121abc:
    if (ctx->pc == 0x121ABCu) {
        ctx->pc = 0x121AC0u;
        goto label_121ac0;
    }
    ctx->pc = 0x121AB8u;
    SET_GPR_U32(ctx, 31, 0x121AC0u);
    ctx->pc = 0x140650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140650u, 0x121AB8u, 0x121AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121AC0u;
label_121ac0:
    // 0x121ac0: 0x93a30070  lbu         $v1, 0x70($sp)
    ctx->pc = 0x121ac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_121ac4:
    // 0x121ac4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x121ac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_121ac8:
    // 0x121ac8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x121ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121acc:
    // 0x121acc: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
label_121ad0:
    if (ctx->pc == 0x121AD0u) {
        ctx->pc = 0x121AD4u;
        goto label_121ad4;
    }
    ctx->pc = 0x121ACCu;
    {
        const bool branch_taken_0x121acc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x121acc) {
            ctx->pc = 0x121B00u;
            goto label_121b00;
        }
    }
    ctx->pc = 0x121AD4u;
label_121ad4:
    // 0x121ad4: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x121ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_121ad8:
    // 0x121ad8: 0xc050c64  jal         func_143190
label_121adc:
    if (ctx->pc == 0x121ADCu) {
        ctx->pc = 0x121AE0u;
        goto label_121ae0;
    }
    ctx->pc = 0x121AD8u;
    SET_GPR_U32(ctx, 31, 0x121AE0u);
    ctx->pc = 0x143190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143190u, 0x121AD8u, 0x121AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121AE0u;
label_121ae0:
    // 0x121ae0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x121ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121ae4:
    // 0x121ae4: 0xc04738c  jal         func_11CE30
label_121ae8:
    if (ctx->pc == 0x121AE8u) {
        ctx->pc = 0x121AECu;
        goto label_121aec;
    }
    ctx->pc = 0x121AE4u;
    SET_GPR_U32(ctx, 31, 0x121AECu);
    ctx->pc = 0x11CE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CE30u, 0x121AE4u, 0x121AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121AECu;
label_121aec:
    // 0x121aec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x121aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121af0:
    // 0x121af0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x121af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_121af4:
    // 0x121af4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x121af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_121af8:
    // 0x121af8: 0xc04c608  jal         func_131820
label_121afc:
    if (ctx->pc == 0x121AFCu) {
        ctx->pc = 0x121B00u;
        goto label_121b00;
    }
    ctx->pc = 0x121AF8u;
    SET_GPR_U32(ctx, 31, 0x121B00u);
    ctx->pc = 0x131820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131820u, 0x121AF8u, 0x121B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B00u;
label_121b00:
    // 0x121b00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x121b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_121b04:
    // 0x121b04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x121b04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_121b08:
    // 0x121b08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x121b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_121b0c:
    // 0x121b0c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x121b0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_121b10:
    // 0x121b10: 0x3e00008  jr          $ra
label_121b14:
    if (ctx->pc == 0x121B14u) {
        ctx->pc = 0x121B18u;
        goto label_121b18;
    }
    ctx->pc = 0x121B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121B18u;
label_121b18:
    // 0x121b18: 0x0  nop
    ctx->pc = 0x121b18u;
    // NOP
label_121b1c:
    // 0x121b1c: 0x0  nop
    ctx->pc = 0x121b1cu;
    // NOP
label_121b20:
    // 0x121b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x121b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_121b24:
    // 0x121b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x121b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_121b28:
    // 0x121b28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x121b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_121b2c:
    // 0x121b2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x121b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_121b30:
    // 0x121b30: 0xc08edc8  jal         func_23B720
label_121b34:
    if (ctx->pc == 0x121B34u) {
        ctx->pc = 0x121B38u;
        goto label_121b38;
    }
    ctx->pc = 0x121B30u;
    SET_GPR_U32(ctx, 31, 0x121B38u);
    ctx->pc = 0x23B720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B720u, 0x121B30u, 0x121B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B38u;
label_121b38:
    // 0x121b38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x121b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_121b3c:
    // 0x121b3c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x121b3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_121b40:
    // 0x121b40: 0x3e00008  jr          $ra
label_121b44:
    if (ctx->pc == 0x121B44u) {
        ctx->pc = 0x121B48u;
        goto label_121b48;
    }
    ctx->pc = 0x121B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121B48u;
label_121b48:
    // 0x121b48: 0x0  nop
    ctx->pc = 0x121b48u;
    // NOP
label_121b4c:
    // 0x121b4c: 0x0  nop
    ctx->pc = 0x121b4cu;
    // NOP
    ctx->pc = 0x121b50u;
}
