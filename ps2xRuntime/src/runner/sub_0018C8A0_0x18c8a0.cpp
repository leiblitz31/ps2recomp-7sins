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

// Function: sub_0018C8A0
// Address: 0x18c8a0 - 0x18cb80
void sub_0018C8A0_0x18c8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C8A0_0x18c8a0");
#endif

    switch (ctx->pc) {
        case 0x18c8a0u: goto label_18c8a0;
        case 0x18c8a4u: goto label_18c8a4;
        case 0x18c8a8u: goto label_18c8a8;
        case 0x18c8acu: goto label_18c8ac;
        case 0x18c8b0u: goto label_18c8b0;
        case 0x18c8b4u: goto label_18c8b4;
        case 0x18c8b8u: goto label_18c8b8;
        case 0x18c8bcu: goto label_18c8bc;
        case 0x18c8c0u: goto label_18c8c0;
        case 0x18c8c4u: goto label_18c8c4;
        case 0x18c8c8u: goto label_18c8c8;
        case 0x18c8ccu: goto label_18c8cc;
        case 0x18c8d0u: goto label_18c8d0;
        case 0x18c8d4u: goto label_18c8d4;
        case 0x18c8d8u: goto label_18c8d8;
        case 0x18c8dcu: goto label_18c8dc;
        case 0x18c8e0u: goto label_18c8e0;
        case 0x18c8e4u: goto label_18c8e4;
        case 0x18c8e8u: goto label_18c8e8;
        case 0x18c8ecu: goto label_18c8ec;
        case 0x18c8f0u: goto label_18c8f0;
        case 0x18c8f4u: goto label_18c8f4;
        case 0x18c8f8u: goto label_18c8f8;
        case 0x18c8fcu: goto label_18c8fc;
        case 0x18c900u: goto label_18c900;
        case 0x18c904u: goto label_18c904;
        case 0x18c908u: goto label_18c908;
        case 0x18c90cu: goto label_18c90c;
        case 0x18c910u: goto label_18c910;
        case 0x18c914u: goto label_18c914;
        case 0x18c918u: goto label_18c918;
        case 0x18c91cu: goto label_18c91c;
        case 0x18c920u: goto label_18c920;
        case 0x18c924u: goto label_18c924;
        case 0x18c928u: goto label_18c928;
        case 0x18c92cu: goto label_18c92c;
        case 0x18c930u: goto label_18c930;
        case 0x18c934u: goto label_18c934;
        case 0x18c938u: goto label_18c938;
        case 0x18c93cu: goto label_18c93c;
        case 0x18c940u: goto label_18c940;
        case 0x18c944u: goto label_18c944;
        case 0x18c948u: goto label_18c948;
        case 0x18c94cu: goto label_18c94c;
        case 0x18c950u: goto label_18c950;
        case 0x18c954u: goto label_18c954;
        case 0x18c958u: goto label_18c958;
        case 0x18c95cu: goto label_18c95c;
        case 0x18c960u: goto label_18c960;
        case 0x18c964u: goto label_18c964;
        case 0x18c968u: goto label_18c968;
        case 0x18c96cu: goto label_18c96c;
        case 0x18c970u: goto label_18c970;
        case 0x18c974u: goto label_18c974;
        case 0x18c978u: goto label_18c978;
        case 0x18c97cu: goto label_18c97c;
        case 0x18c980u: goto label_18c980;
        case 0x18c984u: goto label_18c984;
        case 0x18c988u: goto label_18c988;
        case 0x18c98cu: goto label_18c98c;
        case 0x18c990u: goto label_18c990;
        case 0x18c994u: goto label_18c994;
        case 0x18c998u: goto label_18c998;
        case 0x18c99cu: goto label_18c99c;
        case 0x18c9a0u: goto label_18c9a0;
        case 0x18c9a4u: goto label_18c9a4;
        case 0x18c9a8u: goto label_18c9a8;
        case 0x18c9acu: goto label_18c9ac;
        case 0x18c9b0u: goto label_18c9b0;
        case 0x18c9b4u: goto label_18c9b4;
        case 0x18c9b8u: goto label_18c9b8;
        case 0x18c9bcu: goto label_18c9bc;
        case 0x18c9c0u: goto label_18c9c0;
        case 0x18c9c4u: goto label_18c9c4;
        case 0x18c9c8u: goto label_18c9c8;
        case 0x18c9ccu: goto label_18c9cc;
        case 0x18c9d0u: goto label_18c9d0;
        case 0x18c9d4u: goto label_18c9d4;
        case 0x18c9d8u: goto label_18c9d8;
        case 0x18c9dcu: goto label_18c9dc;
        case 0x18c9e0u: goto label_18c9e0;
        case 0x18c9e4u: goto label_18c9e4;
        case 0x18c9e8u: goto label_18c9e8;
        case 0x18c9ecu: goto label_18c9ec;
        case 0x18c9f0u: goto label_18c9f0;
        case 0x18c9f4u: goto label_18c9f4;
        case 0x18c9f8u: goto label_18c9f8;
        case 0x18c9fcu: goto label_18c9fc;
        case 0x18ca00u: goto label_18ca00;
        case 0x18ca04u: goto label_18ca04;
        case 0x18ca08u: goto label_18ca08;
        case 0x18ca0cu: goto label_18ca0c;
        case 0x18ca10u: goto label_18ca10;
        case 0x18ca14u: goto label_18ca14;
        case 0x18ca18u: goto label_18ca18;
        case 0x18ca1cu: goto label_18ca1c;
        case 0x18ca20u: goto label_18ca20;
        case 0x18ca24u: goto label_18ca24;
        case 0x18ca28u: goto label_18ca28;
        case 0x18ca2cu: goto label_18ca2c;
        case 0x18ca30u: goto label_18ca30;
        case 0x18ca34u: goto label_18ca34;
        case 0x18ca38u: goto label_18ca38;
        case 0x18ca3cu: goto label_18ca3c;
        case 0x18ca40u: goto label_18ca40;
        case 0x18ca44u: goto label_18ca44;
        case 0x18ca48u: goto label_18ca48;
        case 0x18ca4cu: goto label_18ca4c;
        case 0x18ca50u: goto label_18ca50;
        case 0x18ca54u: goto label_18ca54;
        case 0x18ca58u: goto label_18ca58;
        case 0x18ca5cu: goto label_18ca5c;
        case 0x18ca60u: goto label_18ca60;
        case 0x18ca64u: goto label_18ca64;
        case 0x18ca68u: goto label_18ca68;
        case 0x18ca6cu: goto label_18ca6c;
        case 0x18ca70u: goto label_18ca70;
        case 0x18ca74u: goto label_18ca74;
        case 0x18ca78u: goto label_18ca78;
        case 0x18ca7cu: goto label_18ca7c;
        case 0x18ca80u: goto label_18ca80;
        case 0x18ca84u: goto label_18ca84;
        case 0x18ca88u: goto label_18ca88;
        case 0x18ca8cu: goto label_18ca8c;
        case 0x18ca90u: goto label_18ca90;
        case 0x18ca94u: goto label_18ca94;
        case 0x18ca98u: goto label_18ca98;
        case 0x18ca9cu: goto label_18ca9c;
        case 0x18caa0u: goto label_18caa0;
        case 0x18caa4u: goto label_18caa4;
        case 0x18caa8u: goto label_18caa8;
        case 0x18caacu: goto label_18caac;
        case 0x18cab0u: goto label_18cab0;
        case 0x18cab4u: goto label_18cab4;
        case 0x18cab8u: goto label_18cab8;
        case 0x18cabcu: goto label_18cabc;
        case 0x18cac0u: goto label_18cac0;
        case 0x18cac4u: goto label_18cac4;
        case 0x18cac8u: goto label_18cac8;
        case 0x18caccu: goto label_18cacc;
        case 0x18cad0u: goto label_18cad0;
        case 0x18cad4u: goto label_18cad4;
        case 0x18cad8u: goto label_18cad8;
        case 0x18cadcu: goto label_18cadc;
        case 0x18cae0u: goto label_18cae0;
        case 0x18cae4u: goto label_18cae4;
        case 0x18cae8u: goto label_18cae8;
        case 0x18caecu: goto label_18caec;
        case 0x18caf0u: goto label_18caf0;
        case 0x18caf4u: goto label_18caf4;
        case 0x18caf8u: goto label_18caf8;
        case 0x18cafcu: goto label_18cafc;
        case 0x18cb00u: goto label_18cb00;
        case 0x18cb04u: goto label_18cb04;
        case 0x18cb08u: goto label_18cb08;
        case 0x18cb0cu: goto label_18cb0c;
        case 0x18cb10u: goto label_18cb10;
        case 0x18cb14u: goto label_18cb14;
        case 0x18cb18u: goto label_18cb18;
        case 0x18cb1cu: goto label_18cb1c;
        case 0x18cb20u: goto label_18cb20;
        case 0x18cb24u: goto label_18cb24;
        case 0x18cb28u: goto label_18cb28;
        case 0x18cb2cu: goto label_18cb2c;
        case 0x18cb30u: goto label_18cb30;
        case 0x18cb34u: goto label_18cb34;
        case 0x18cb38u: goto label_18cb38;
        case 0x18cb3cu: goto label_18cb3c;
        case 0x18cb40u: goto label_18cb40;
        case 0x18cb44u: goto label_18cb44;
        case 0x18cb48u: goto label_18cb48;
        case 0x18cb4cu: goto label_18cb4c;
        case 0x18cb50u: goto label_18cb50;
        case 0x18cb54u: goto label_18cb54;
        case 0x18cb58u: goto label_18cb58;
        case 0x18cb5cu: goto label_18cb5c;
        case 0x18cb60u: goto label_18cb60;
        case 0x18cb64u: goto label_18cb64;
        case 0x18cb68u: goto label_18cb68;
        case 0x18cb6cu: goto label_18cb6c;
        case 0x18cb70u: goto label_18cb70;
        case 0x18cb74u: goto label_18cb74;
        case 0x18cb78u: goto label_18cb78;
        case 0x18cb7cu: goto label_18cb7c;
        default: break;
    }

    ctx->pc = 0x18c8a0u;

label_18c8a0:
    // 0x18c8a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18c8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18c8a4:
    // 0x18c8a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x18c8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_18c8a8:
    // 0x18c8a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18c8ac:
    // 0x18c8ac: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x18c8acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_18c8b0:
    // 0x18c8b0: 0x3e00008  jr          $ra
label_18c8b4:
    if (ctx->pc == 0x18C8B4u) {
        ctx->pc = 0x18C8B8u;
        goto label_18c8b8;
    }
    ctx->pc = 0x18C8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C8B8u;
label_18c8b8:
    // 0x18c8b8: 0x0  nop
    ctx->pc = 0x18c8b8u;
    // NOP
label_18c8bc:
    // 0x18c8bc: 0x0  nop
    ctx->pc = 0x18c8bcu;
    // NOP
label_18c8c0:
    // 0x18c8c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18c8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18c8c4:
    // 0x18c8c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18c8c8:
    // 0x18c8c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18c8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_18c8cc:
    // 0x18c8cc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x18c8ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_18c8d0:
    // 0x18c8d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18c8d4:
    // 0x18c8d4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_18c8d8:
    if (ctx->pc == 0x18C8D8u) {
        ctx->pc = 0x18C8DCu;
        goto label_18c8dc;
    }
    ctx->pc = 0x18C8D4u;
    {
        const bool branch_taken_0x18c8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c8d4) {
            ctx->pc = 0x18C944u;
            goto label_18c944;
        }
    }
    ctx->pc = 0x18C8DCu;
label_18c8dc:
    // 0x18c8dc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x18c8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_18c8e0:
    // 0x18c8e0: 0x246340b0  addiu       $v1, $v1, 0x40B0
    ctx->pc = 0x18c8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16560));
label_18c8e4:
    // 0x18c8e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18c8e8:
    // 0x18c8e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18c8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_18c8ec:
    // 0x18c8ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18c8f0:
    // 0x18c8f0: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x18c8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_18c8f4:
    // 0x18c8f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x18c8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18c8f8:
    // 0x18c8f8: 0xc063044  jal         func_18C110
label_18c8fc:
    if (ctx->pc == 0x18C8FCu) {
        ctx->pc = 0x18C900u;
        goto label_18c900;
    }
    ctx->pc = 0x18C8F8u;
    SET_GPR_U32(ctx, 31, 0x18C900u);
    ctx->pc = 0x18C110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C110u, 0x18C8F8u, 0x18C900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C900u;
label_18c900:
    // 0x18c900: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18c904:
    // 0x18c904: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x18c904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
label_18c908:
    // 0x18c908: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x18c908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18c90c:
    // 0x18c90c: 0xc0630e0  jal         func_18C380
label_18c910:
    if (ctx->pc == 0x18C910u) {
        ctx->pc = 0x18C914u;
        goto label_18c914;
    }
    ctx->pc = 0x18C90Cu;
    SET_GPR_U32(ctx, 31, 0x18C914u);
    ctx->pc = 0x18C380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C380u, 0x18C90Cu, 0x18C914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C914u;
label_18c914:
    // 0x18c914: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18c914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18c918:
    // 0x18c918: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18c918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c91c:
    // 0x18c91c: 0xc055950  jal         func_156540
label_18c920:
    if (ctx->pc == 0x18C920u) {
        ctx->pc = 0x18C924u;
        goto label_18c924;
    }
    ctx->pc = 0x18C91Cu;
    SET_GPR_U32(ctx, 31, 0x18C924u);
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x18C91Cu, 0x18C924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C924u;
label_18c924:
    // 0x18c924: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x18c924u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_18c928:
    // 0x18c928: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18c928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_18c92c:
    // 0x18c92c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18c92cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_18c930:
    // 0x18c930: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_18c934:
    if (ctx->pc == 0x18C934u) {
        ctx->pc = 0x18C938u;
        goto label_18c938;
    }
    ctx->pc = 0x18C930u;
    {
        const bool branch_taken_0x18c930 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18c930) {
            ctx->pc = 0x18C944u;
            goto label_18c944;
        }
    }
    ctx->pc = 0x18C938u;
label_18c938:
    // 0x18c938: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18c938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18c93c:
    // 0x18c93c: 0xc0ba070  jal         func_2E81C0
label_18c940:
    if (ctx->pc == 0x18C940u) {
        ctx->pc = 0x18C944u;
        goto label_18c944;
    }
    ctx->pc = 0x18C93Cu;
    SET_GPR_U32(ctx, 31, 0x18C944u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x18C93Cu, 0x18C944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C944u;
label_18c944:
    // 0x18c944: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18c948:
    // 0x18c948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18c94c:
    // 0x18c94c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18c94cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18c950:
    // 0x18c950: 0x3e00008  jr          $ra
label_18c954:
    if (ctx->pc == 0x18C954u) {
        ctx->pc = 0x18C958u;
        goto label_18c958;
    }
    ctx->pc = 0x18C950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C958u;
label_18c958:
    // 0x18c958: 0x0  nop
    ctx->pc = 0x18c958u;
    // NOP
label_18c95c:
    // 0x18c95c: 0x0  nop
    ctx->pc = 0x18c95cu;
    // NOP
label_18c960:
    // 0x18c960: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18c960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_18c964:
    // 0x18c964: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18c964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18c968:
    // 0x18c968: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18c968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18c96c:
    // 0x18c96c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18c96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18c970:
    // 0x18c970: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x18c970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_18c974:
    // 0x18c974: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x18c974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_18c978:
    // 0x18c978: 0xc055974  jal         func_1565D0
label_18c97c:
    if (ctx->pc == 0x18C97Cu) {
        ctx->pc = 0x18C980u;
        goto label_18c980;
    }
    ctx->pc = 0x18C978u;
    SET_GPR_U32(ctx, 31, 0x18C980u);
    ctx->pc = 0x1565D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1565D0u, 0x18C978u, 0x18C980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C980u;
label_18c980:
    // 0x18c980: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x18c980u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18c984:
    // 0x18c984: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x18c984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_18c988:
    // 0x18c988: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18c988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18c98c:
    // 0x18c98c: 0x14620075  bne         $v1, $v0, . + 4 + (0x75 << 2)
label_18c990:
    if (ctx->pc == 0x18C990u) {
        ctx->pc = 0x18C994u;
        goto label_18c994;
    }
    ctx->pc = 0x18C98Cu;
    {
        const bool branch_taken_0x18c98c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18c98c) {
            ctx->pc = 0x18CB64u;
            goto label_18cb64;
        }
    }
    ctx->pc = 0x18C994u;
label_18c994:
    // 0x18c994: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x18c994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_18c998:
    // 0x18c998: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18c998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18c99c:
    // 0x18c99c: 0x24a55770  addiu       $a1, $a1, 0x5770
    ctx->pc = 0x18c99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22384));
label_18c9a0:
    // 0x18c9a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18c9a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c9a4:
    // 0x18c9a4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x18c9a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_18c9a8:
    // 0x18c9a8: 0x320f809  jalr        $t9
label_18c9ac:
    if (ctx->pc == 0x18C9ACu) {
        ctx->pc = 0x18C9B0u;
        goto label_18c9b0;
    }
    ctx->pc = 0x18C9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18C9B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C9A8u, 0x18C9B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C9B0u;
label_18c9b0:
    // 0x18c9b0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x18c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_18c9b4:
    // 0x18c9b4: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x18c9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
label_18c9b8:
    // 0x18c9b8: 0xc063438  jal         func_18D0E0
label_18c9bc:
    if (ctx->pc == 0x18C9BCu) {
        ctx->pc = 0x18C9C0u;
        goto label_18c9c0;
    }
    ctx->pc = 0x18C9B8u;
    SET_GPR_U32(ctx, 31, 0x18C9C0u);
    ctx->pc = 0x18D0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D0E0u, 0x18C9B8u, 0x18C9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C9C0u;
label_18c9c0:
    // 0x18c9c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18c9c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c9c4:
    // 0x18c9c4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18c9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18c9c8:
    // 0x18c9c8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18c9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18c9cc:
    // 0x18c9cc: 0x24a55790  addiu       $a1, $a1, 0x5790
    ctx->pc = 0x18c9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22416));
label_18c9d0:
    // 0x18c9d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18c9d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18c9d4:
    // 0x18c9d4: 0xc0bc3e2  jal         func_2F0F88
label_18c9d8:
    if (ctx->pc == 0x18C9D8u) {
        ctx->pc = 0x18C9DCu;
        goto label_18c9dc;
    }
    ctx->pc = 0x18C9D4u;
    SET_GPR_U32(ctx, 31, 0x18C9DCu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x18C9D4u, 0x18C9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C9DCu;
label_18c9dc:
    // 0x18c9dc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x18c9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_18c9e0:
    // 0x18c9e0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x18c9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18c9e4:
    // 0x18c9e4: 0xc05621c  jal         func_158870
label_18c9e8:
    if (ctx->pc == 0x18C9E8u) {
        ctx->pc = 0x18C9ECu;
        goto label_18c9ec;
    }
    ctx->pc = 0x18C9E4u;
    SET_GPR_U32(ctx, 31, 0x18C9ECu);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x18C9E4u, 0x18C9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C9ECu;
label_18c9ec:
    // 0x18c9ec: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x18c9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_18c9f0:
    // 0x18c9f0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x18c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_18c9f4:
    // 0x18c9f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_18c9f8:
    if (ctx->pc == 0x18C9F8u) {
        ctx->pc = 0x18C9FCu;
        goto label_18c9fc;
    }
    ctx->pc = 0x18C9F4u;
    {
        const bool branch_taken_0x18c9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c9f4) {
            ctx->pc = 0x18CA14u;
            goto label_18ca14;
        }
    }
    ctx->pc = 0x18C9FCu;
label_18c9fc:
    // 0x18c9fc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x18c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_18ca00:
    // 0x18ca00: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x18ca00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_18ca04:
    // 0x18ca04: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18ca04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18ca08:
    // 0x18ca08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18ca08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ca0c:
    // 0x18ca0c: 0xc08c8dc  jal         func_232370
label_18ca10:
    if (ctx->pc == 0x18CA10u) {
        ctx->pc = 0x18CA14u;
        goto label_18ca14;
    }
    ctx->pc = 0x18CA0Cu;
    SET_GPR_U32(ctx, 31, 0x18CA14u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x18CA0Cu, 0x18CA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA14u;
label_18ca14:
    // 0x18ca14: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18ca14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18ca18:
    // 0x18ca18: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18ca18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18ca1c:
    // 0x18ca1c: 0x24a557a0  addiu       $a1, $a1, 0x57A0
    ctx->pc = 0x18ca1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22432));
label_18ca20:
    // 0x18ca20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18ca20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18ca24:
    // 0x18ca24: 0xc0bc3e2  jal         func_2F0F88
label_18ca28:
    if (ctx->pc == 0x18CA28u) {
        ctx->pc = 0x18CA2Cu;
        goto label_18ca2c;
    }
    ctx->pc = 0x18CA24u;
    SET_GPR_U32(ctx, 31, 0x18CA2Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x18CA24u, 0x18CA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA2Cu;
label_18ca2c:
    // 0x18ca2c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x18ca2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_18ca30:
    // 0x18ca30: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x18ca30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18ca34:
    // 0x18ca34: 0xc05621c  jal         func_158870
label_18ca38:
    if (ctx->pc == 0x18CA38u) {
        ctx->pc = 0x18CA3Cu;
        goto label_18ca3c;
    }
    ctx->pc = 0x18CA34u;
    SET_GPR_U32(ctx, 31, 0x18CA3Cu);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x18CA34u, 0x18CA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA3Cu;
label_18ca3c:
    // 0x18ca3c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x18ca3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_18ca40:
    // 0x18ca40: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18ca40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_18ca44:
    // 0x18ca44: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_18ca48:
    if (ctx->pc == 0x18CA48u) {
        ctx->pc = 0x18CA4Cu;
        goto label_18ca4c;
    }
    ctx->pc = 0x18CA44u;
    {
        const bool branch_taken_0x18ca44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ca44) {
            ctx->pc = 0x18CA64u;
            goto label_18ca64;
        }
    }
    ctx->pc = 0x18CA4Cu;
label_18ca4c:
    // 0x18ca4c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x18ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_18ca50:
    // 0x18ca50: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x18ca50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_18ca54:
    // 0x18ca54: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18ca54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18ca58:
    // 0x18ca58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18ca58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ca5c:
    // 0x18ca5c: 0xc08c8dc  jal         func_232370
label_18ca60:
    if (ctx->pc == 0x18CA60u) {
        ctx->pc = 0x18CA64u;
        goto label_18ca64;
    }
    ctx->pc = 0x18CA5Cu;
    SET_GPR_U32(ctx, 31, 0x18CA64u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x18CA5Cu, 0x18CA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA64u;
label_18ca64:
    // 0x18ca64: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x18ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_18ca68:
    // 0x18ca68: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_18ca6c:
    if (ctx->pc == 0x18CA6Cu) {
        ctx->pc = 0x18CA70u;
        goto label_18ca70;
    }
    ctx->pc = 0x18CA68u;
    {
        const bool branch_taken_0x18ca68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ca68) {
            ctx->pc = 0x18CAB0u;
            goto label_18cab0;
        }
    }
    ctx->pc = 0x18CA70u;
label_18ca70:
    // 0x18ca70: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_18ca74:
    // 0x18ca74: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_18ca78:
    if (ctx->pc == 0x18CA78u) {
        ctx->pc = 0x18CA7Cu;
        goto label_18ca7c;
    }
    ctx->pc = 0x18CA74u;
    {
        const bool branch_taken_0x18ca74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ca74) {
            ctx->pc = 0x18CAB0u;
            goto label_18cab0;
        }
    }
    ctx->pc = 0x18CA7Cu;
label_18ca7c:
    // 0x18ca7c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18ca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_18ca80:
    // 0x18ca80: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x18ca80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_18ca84:
    // 0x18ca84: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x18ca84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_18ca88:
    // 0x18ca88: 0xc063418  jal         func_18D060
label_18ca8c:
    if (ctx->pc == 0x18CA8Cu) {
        ctx->pc = 0x18CA90u;
        goto label_18ca90;
    }
    ctx->pc = 0x18CA88u;
    SET_GPR_U32(ctx, 31, 0x18CA90u);
    ctx->pc = 0x18D060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D060u, 0x18CA88u, 0x18CA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA90u;
label_18ca90:
    // 0x18ca90: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18ca90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_18ca94:
    // 0x18ca94: 0x24640054  addiu       $a0, $v1, 0x54
    ctx->pc = 0x18ca94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
label_18ca98:
    // 0x18ca98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18ca98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18ca9c:
    // 0x18ca9c: 0xc0632e0  jal         func_18CB80
label_18caa0:
    if (ctx->pc == 0x18CAA0u) {
        ctx->pc = 0x18CAA4u;
        goto label_18caa4;
    }
    ctx->pc = 0x18CA9Cu;
    SET_GPR_U32(ctx, 31, 0x18CAA4u);
    ctx->pc = 0x18CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CB80u, 0x18CA9Cu, 0x18CAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CAA4u;
label_18caa4:
    // 0x18caa4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18caa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_18caa8:
    // 0x18caa8: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
label_18caac:
    if (ctx->pc == 0x18CAACu) {
        ctx->pc = 0x18CAB0u;
        goto label_18cab0;
    }
    ctx->pc = 0x18CAA8u;
    {
        const bool branch_taken_0x18caa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18caa8) {
            ctx->pc = 0x18C9C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18c9c4;
        }
    }
    ctx->pc = 0x18CAB0u;
label_18cab0:
    // 0x18cab0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x18cab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_18cab4:
    // 0x18cab4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18cab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18cab8:
    // 0x18cab8: 0x24a557b0  addiu       $a1, $a1, 0x57B0
    ctx->pc = 0x18cab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22448));
label_18cabc:
    // 0x18cabc: 0xc0552e4  jal         func_154B90
label_18cac0:
    if (ctx->pc == 0x18CAC0u) {
        ctx->pc = 0x18CAC4u;
        goto label_18cac4;
    }
    ctx->pc = 0x18CABCu;
    SET_GPR_U32(ctx, 31, 0x18CAC4u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x18CABCu, 0x18CAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CAC4u;
label_18cac4:
    // 0x18cac4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18cac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_18cac8:
    // 0x18cac8: 0xac620078  sw          $v0, 0x78($v1)
    ctx->pc = 0x18cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 2));
label_18cacc:
    // 0x18cacc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18caccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_18cad0:
    // 0x18cad0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x18cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_18cad4:
    // 0x18cad4: 0x8c450078  lw          $a1, 0x78($v0)
    ctx->pc = 0x18cad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_18cad8:
    // 0x18cad8: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x18cad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18cadc:
    // 0x18cadc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18cadcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18cae0:
    // 0x18cae0: 0xc08c8dc  jal         func_232370
label_18cae4:
    if (ctx->pc == 0x18CAE4u) {
        ctx->pc = 0x18CAE8u;
        goto label_18cae8;
    }
    ctx->pc = 0x18CAE0u;
    SET_GPR_U32(ctx, 31, 0x18CAE8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x18CAE0u, 0x18CAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CAE8u;
label_18cae8:
    // 0x18cae8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x18cae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_18caec:
    // 0x18caec: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18caecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18caf0:
    // 0x18caf0: 0x24a557c0  addiu       $a1, $a1, 0x57C0
    ctx->pc = 0x18caf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22464));
label_18caf4:
    // 0x18caf4: 0xc0552e4  jal         func_154B90
label_18caf8:
    if (ctx->pc == 0x18CAF8u) {
        ctx->pc = 0x18CAFCu;
        goto label_18cafc;
    }
    ctx->pc = 0x18CAF4u;
    SET_GPR_U32(ctx, 31, 0x18CAFCu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x18CAF4u, 0x18CAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CAFCu;
label_18cafc:
    // 0x18cafc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18cafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_18cb00:
    // 0x18cb00: 0xac62007c  sw          $v0, 0x7C($v1)
    ctx->pc = 0x18cb00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 2));
label_18cb04:
    // 0x18cb04: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_18cb08:
    // 0x18cb08: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x18cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_18cb0c:
    // 0x18cb0c: 0x8c45007c  lw          $a1, 0x7C($v0)
    ctx->pc = 0x18cb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_18cb10:
    // 0x18cb10: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x18cb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18cb14:
    // 0x18cb14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18cb14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18cb18:
    // 0x18cb18: 0xc08c8dc  jal         func_232370
label_18cb1c:
    if (ctx->pc == 0x18CB1Cu) {
        ctx->pc = 0x18CB20u;
        goto label_18cb20;
    }
    ctx->pc = 0x18CB18u;
    SET_GPR_U32(ctx, 31, 0x18CB20u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x18CB18u, 0x18CB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CB20u;
label_18cb20:
    // 0x18cb20: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x18cb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_18cb24:
    // 0x18cb24: 0x278591d0  addiu       $a1, $gp, -0x6E30
    ctx->pc = 0x18cb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939088));
label_18cb28:
    // 0x18cb28: 0xc0552e4  jal         func_154B90
label_18cb2c:
    if (ctx->pc == 0x18CB2Cu) {
        ctx->pc = 0x18CB30u;
        goto label_18cb30;
    }
    ctx->pc = 0x18CB28u;
    SET_GPR_U32(ctx, 31, 0x18CB30u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x18CB28u, 0x18CB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CB30u;
label_18cb30:
    // 0x18cb30: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18cb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_18cb34:
    // 0x18cb34: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x18cb34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_18cb38:
    // 0x18cb38: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_18cb3c:
    // 0x18cb3c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x18cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_18cb40:
    // 0x18cb40: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x18cb40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_18cb44:
    // 0x18cb44: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x18cb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18cb48:
    // 0x18cb48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18cb48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18cb4c:
    // 0x18cb4c: 0xc08c8dc  jal         func_232370
label_18cb50:
    if (ctx->pc == 0x18CB50u) {
        ctx->pc = 0x18CB54u;
        goto label_18cb54;
    }
    ctx->pc = 0x18CB4Cu;
    SET_GPR_U32(ctx, 31, 0x18CB54u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x18CB4Cu, 0x18CB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CB54u;
label_18cb54:
    // 0x18cb54: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x18cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_18cb58:
    // 0x18cb58: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x18cb58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_18cb5c:
    // 0x18cb5c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x18cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_18cb60:
    // 0x18cb60: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x18cb60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
label_18cb64:
    // 0x18cb64: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18cb64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18cb68:
    // 0x18cb68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18cb68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18cb6c:
    // 0x18cb6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18cb6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18cb70:
    // 0x18cb70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18cb70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18cb74:
    // 0x18cb74: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x18cb74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_18cb78:
    // 0x18cb78: 0x3e00008  jr          $ra
label_18cb7c:
    if (ctx->pc == 0x18CB7Cu) {
        ctx->pc = 0x18CB80u;
        goto label_fallthrough_0x18cb78;
    }
    ctx->pc = 0x18CB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18cb78:
    ctx->pc = 0x18CB80u;
}
