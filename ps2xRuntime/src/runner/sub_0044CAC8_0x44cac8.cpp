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

// Function: sub_0044CAC8
// Address: 0x44cac8 - 0x44ce50
void sub_0044CAC8_0x44cac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044CAC8_0x44cac8");
#endif

    switch (ctx->pc) {
        case 0x44cac8u: goto label_44cac8;
        case 0x44caccu: goto label_44cacc;
        case 0x44cad0u: goto label_44cad0;
        case 0x44cad4u: goto label_44cad4;
        case 0x44cad8u: goto label_44cad8;
        case 0x44cadcu: goto label_44cadc;
        case 0x44cae0u: goto label_44cae0;
        case 0x44cae4u: goto label_44cae4;
        case 0x44cae8u: goto label_44cae8;
        case 0x44caecu: goto label_44caec;
        case 0x44caf0u: goto label_44caf0;
        case 0x44caf4u: goto label_44caf4;
        case 0x44caf8u: goto label_44caf8;
        case 0x44cafcu: goto label_44cafc;
        case 0x44cb00u: goto label_44cb00;
        case 0x44cb04u: goto label_44cb04;
        case 0x44cb08u: goto label_44cb08;
        case 0x44cb0cu: goto label_44cb0c;
        case 0x44cb10u: goto label_44cb10;
        case 0x44cb14u: goto label_44cb14;
        case 0x44cb18u: goto label_44cb18;
        case 0x44cb1cu: goto label_44cb1c;
        case 0x44cb20u: goto label_44cb20;
        case 0x44cb24u: goto label_44cb24;
        case 0x44cb28u: goto label_44cb28;
        case 0x44cb2cu: goto label_44cb2c;
        case 0x44cb30u: goto label_44cb30;
        case 0x44cb34u: goto label_44cb34;
        case 0x44cb38u: goto label_44cb38;
        case 0x44cb3cu: goto label_44cb3c;
        case 0x44cb40u: goto label_44cb40;
        case 0x44cb44u: goto label_44cb44;
        case 0x44cb48u: goto label_44cb48;
        case 0x44cb4cu: goto label_44cb4c;
        case 0x44cb50u: goto label_44cb50;
        case 0x44cb54u: goto label_44cb54;
        case 0x44cb58u: goto label_44cb58;
        case 0x44cb5cu: goto label_44cb5c;
        case 0x44cb60u: goto label_44cb60;
        case 0x44cb64u: goto label_44cb64;
        case 0x44cb68u: goto label_44cb68;
        case 0x44cb6cu: goto label_44cb6c;
        case 0x44cb70u: goto label_44cb70;
        case 0x44cb74u: goto label_44cb74;
        case 0x44cb78u: goto label_44cb78;
        case 0x44cb7cu: goto label_44cb7c;
        case 0x44cb80u: goto label_44cb80;
        case 0x44cb84u: goto label_44cb84;
        case 0x44cb88u: goto label_44cb88;
        case 0x44cb8cu: goto label_44cb8c;
        case 0x44cb90u: goto label_44cb90;
        case 0x44cb94u: goto label_44cb94;
        case 0x44cb98u: goto label_44cb98;
        case 0x44cb9cu: goto label_44cb9c;
        case 0x44cba0u: goto label_44cba0;
        case 0x44cba4u: goto label_44cba4;
        case 0x44cba8u: goto label_44cba8;
        case 0x44cbacu: goto label_44cbac;
        case 0x44cbb0u: goto label_44cbb0;
        case 0x44cbb4u: goto label_44cbb4;
        case 0x44cbb8u: goto label_44cbb8;
        case 0x44cbbcu: goto label_44cbbc;
        case 0x44cbc0u: goto label_44cbc0;
        case 0x44cbc4u: goto label_44cbc4;
        case 0x44cbc8u: goto label_44cbc8;
        case 0x44cbccu: goto label_44cbcc;
        case 0x44cbd0u: goto label_44cbd0;
        case 0x44cbd4u: goto label_44cbd4;
        case 0x44cbd8u: goto label_44cbd8;
        case 0x44cbdcu: goto label_44cbdc;
        case 0x44cbe0u: goto label_44cbe0;
        case 0x44cbe4u: goto label_44cbe4;
        case 0x44cbe8u: goto label_44cbe8;
        case 0x44cbecu: goto label_44cbec;
        case 0x44cbf0u: goto label_44cbf0;
        case 0x44cbf4u: goto label_44cbf4;
        case 0x44cbf8u: goto label_44cbf8;
        case 0x44cbfcu: goto label_44cbfc;
        case 0x44cc00u: goto label_44cc00;
        case 0x44cc04u: goto label_44cc04;
        case 0x44cc08u: goto label_44cc08;
        case 0x44cc0cu: goto label_44cc0c;
        case 0x44cc10u: goto label_44cc10;
        case 0x44cc14u: goto label_44cc14;
        case 0x44cc18u: goto label_44cc18;
        case 0x44cc1cu: goto label_44cc1c;
        case 0x44cc20u: goto label_44cc20;
        case 0x44cc24u: goto label_44cc24;
        case 0x44cc28u: goto label_44cc28;
        case 0x44cc2cu: goto label_44cc2c;
        case 0x44cc30u: goto label_44cc30;
        case 0x44cc34u: goto label_44cc34;
        case 0x44cc38u: goto label_44cc38;
        case 0x44cc3cu: goto label_44cc3c;
        case 0x44cc40u: goto label_44cc40;
        case 0x44cc44u: goto label_44cc44;
        case 0x44cc48u: goto label_44cc48;
        case 0x44cc4cu: goto label_44cc4c;
        case 0x44cc50u: goto label_44cc50;
        case 0x44cc54u: goto label_44cc54;
        case 0x44cc58u: goto label_44cc58;
        case 0x44cc5cu: goto label_44cc5c;
        case 0x44cc60u: goto label_44cc60;
        case 0x44cc64u: goto label_44cc64;
        case 0x44cc68u: goto label_44cc68;
        case 0x44cc6cu: goto label_44cc6c;
        case 0x44cc70u: goto label_44cc70;
        case 0x44cc74u: goto label_44cc74;
        case 0x44cc78u: goto label_44cc78;
        case 0x44cc7cu: goto label_44cc7c;
        case 0x44cc80u: goto label_44cc80;
        case 0x44cc84u: goto label_44cc84;
        case 0x44cc88u: goto label_44cc88;
        case 0x44cc8cu: goto label_44cc8c;
        case 0x44cc90u: goto label_44cc90;
        case 0x44cc94u: goto label_44cc94;
        case 0x44cc98u: goto label_44cc98;
        case 0x44cc9cu: goto label_44cc9c;
        case 0x44cca0u: goto label_44cca0;
        case 0x44cca4u: goto label_44cca4;
        case 0x44cca8u: goto label_44cca8;
        case 0x44ccacu: goto label_44ccac;
        case 0x44ccb0u: goto label_44ccb0;
        case 0x44ccb4u: goto label_44ccb4;
        case 0x44ccb8u: goto label_44ccb8;
        case 0x44ccbcu: goto label_44ccbc;
        case 0x44ccc0u: goto label_44ccc0;
        case 0x44ccc4u: goto label_44ccc4;
        case 0x44ccc8u: goto label_44ccc8;
        case 0x44ccccu: goto label_44cccc;
        case 0x44ccd0u: goto label_44ccd0;
        case 0x44ccd4u: goto label_44ccd4;
        case 0x44ccd8u: goto label_44ccd8;
        case 0x44ccdcu: goto label_44ccdc;
        case 0x44cce0u: goto label_44cce0;
        case 0x44cce4u: goto label_44cce4;
        case 0x44cce8u: goto label_44cce8;
        case 0x44ccecu: goto label_44ccec;
        case 0x44ccf0u: goto label_44ccf0;
        case 0x44ccf4u: goto label_44ccf4;
        case 0x44ccf8u: goto label_44ccf8;
        case 0x44ccfcu: goto label_44ccfc;
        case 0x44cd00u: goto label_44cd00;
        case 0x44cd04u: goto label_44cd04;
        case 0x44cd08u: goto label_44cd08;
        case 0x44cd0cu: goto label_44cd0c;
        case 0x44cd10u: goto label_44cd10;
        case 0x44cd14u: goto label_44cd14;
        case 0x44cd18u: goto label_44cd18;
        case 0x44cd1cu: goto label_44cd1c;
        case 0x44cd20u: goto label_44cd20;
        case 0x44cd24u: goto label_44cd24;
        case 0x44cd28u: goto label_44cd28;
        case 0x44cd2cu: goto label_44cd2c;
        case 0x44cd30u: goto label_44cd30;
        case 0x44cd34u: goto label_44cd34;
        case 0x44cd38u: goto label_44cd38;
        case 0x44cd3cu: goto label_44cd3c;
        case 0x44cd40u: goto label_44cd40;
        case 0x44cd44u: goto label_44cd44;
        case 0x44cd48u: goto label_44cd48;
        case 0x44cd4cu: goto label_44cd4c;
        case 0x44cd50u: goto label_44cd50;
        case 0x44cd54u: goto label_44cd54;
        case 0x44cd58u: goto label_44cd58;
        case 0x44cd5cu: goto label_44cd5c;
        case 0x44cd60u: goto label_44cd60;
        case 0x44cd64u: goto label_44cd64;
        case 0x44cd68u: goto label_44cd68;
        case 0x44cd6cu: goto label_44cd6c;
        case 0x44cd70u: goto label_44cd70;
        case 0x44cd74u: goto label_44cd74;
        case 0x44cd78u: goto label_44cd78;
        case 0x44cd7cu: goto label_44cd7c;
        case 0x44cd80u: goto label_44cd80;
        case 0x44cd84u: goto label_44cd84;
        case 0x44cd88u: goto label_44cd88;
        case 0x44cd8cu: goto label_44cd8c;
        case 0x44cd90u: goto label_44cd90;
        case 0x44cd94u: goto label_44cd94;
        case 0x44cd98u: goto label_44cd98;
        case 0x44cd9cu: goto label_44cd9c;
        case 0x44cda0u: goto label_44cda0;
        case 0x44cda4u: goto label_44cda4;
        case 0x44cda8u: goto label_44cda8;
        case 0x44cdacu: goto label_44cdac;
        case 0x44cdb0u: goto label_44cdb0;
        case 0x44cdb4u: goto label_44cdb4;
        case 0x44cdb8u: goto label_44cdb8;
        case 0x44cdbcu: goto label_44cdbc;
        case 0x44cdc0u: goto label_44cdc0;
        case 0x44cdc4u: goto label_44cdc4;
        case 0x44cdc8u: goto label_44cdc8;
        case 0x44cdccu: goto label_44cdcc;
        case 0x44cdd0u: goto label_44cdd0;
        case 0x44cdd4u: goto label_44cdd4;
        case 0x44cdd8u: goto label_44cdd8;
        case 0x44cddcu: goto label_44cddc;
        case 0x44cde0u: goto label_44cde0;
        case 0x44cde4u: goto label_44cde4;
        case 0x44cde8u: goto label_44cde8;
        case 0x44cdecu: goto label_44cdec;
        case 0x44cdf0u: goto label_44cdf0;
        case 0x44cdf4u: goto label_44cdf4;
        case 0x44cdf8u: goto label_44cdf8;
        case 0x44cdfcu: goto label_44cdfc;
        case 0x44ce00u: goto label_44ce00;
        case 0x44ce04u: goto label_44ce04;
        case 0x44ce08u: goto label_44ce08;
        case 0x44ce0cu: goto label_44ce0c;
        case 0x44ce10u: goto label_44ce10;
        case 0x44ce14u: goto label_44ce14;
        case 0x44ce18u: goto label_44ce18;
        case 0x44ce1cu: goto label_44ce1c;
        case 0x44ce20u: goto label_44ce20;
        case 0x44ce24u: goto label_44ce24;
        case 0x44ce28u: goto label_44ce28;
        case 0x44ce2cu: goto label_44ce2c;
        case 0x44ce30u: goto label_44ce30;
        case 0x44ce34u: goto label_44ce34;
        case 0x44ce38u: goto label_44ce38;
        case 0x44ce3cu: goto label_44ce3c;
        case 0x44ce40u: goto label_44ce40;
        case 0x44ce44u: goto label_44ce44;
        case 0x44ce48u: goto label_44ce48;
        case 0x44ce4cu: goto label_44ce4c;
        default: break;
    }

    ctx->pc = 0x44cac8u;

label_44cac8:
    // 0x44cac8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x44cac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_44cacc:
    // 0x44cacc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x44caccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_44cad0:
    // 0x44cad0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x44cad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_44cad4:
    // 0x44cad4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44cad4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44cad8:
    // 0x44cad8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x44cad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_44cadc:
    // 0x44cadc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44cadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_44cae0:
    // 0x44cae0: 0x12200062  beqz        $s1, . + 4 + (0x62 << 2)
label_44cae4:
    if (ctx->pc == 0x44CAE4u) {
        ctx->pc = 0x44CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CAE0u;
        // 0x44cae4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CAE8u;
        goto label_44cae8;
    }
    ctx->pc = 0x44CAE0u;
    {
        const bool branch_taken_0x44cae0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CAE0u;
        // 0x44cae4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cae0) {
            ctx->pc = 0x44CC6Cu;
            goto label_44cc6c;
        }
    }
    ctx->pc = 0x44CAE8u;
label_44cae8:
    // 0x44cae8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x44cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_44caec:
    // 0x44caec: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x44caecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44caf0:
    // 0x44caf0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x44caf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44caf4:
    // 0x44caf4: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x44caf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_44caf8:
    // 0x44caf8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x44caf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_44cafc:
    // 0x44cafc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x44cafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_44cb00:
    // 0x44cb00: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x44cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_44cb04:
    // 0x44cb04: 0x40f809  jalr        $v0
label_44cb08:
    if (ctx->pc == 0x44CB08u) {
        ctx->pc = 0x44CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CB04u;
        // 0x44cb08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CB0Cu;
        goto label_44cb0c;
    }
    ctx->pc = 0x44CB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44CB0Cu);
        ctx->pc = 0x44CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CB04u;
        // 0x44cb08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CB04u, 0x44CB0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44CB0Cu;
label_44cb0c:
    // 0x44cb0c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x44cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44cb10:
    // 0x44cb10: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_44cb14:
    if (ctx->pc == 0x44CB14u) {
        ctx->pc = 0x44CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CB10u;
        // 0x44cb14: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CB18u;
        goto label_44cb18;
    }
    ctx->pc = 0x44CB10u;
    {
        const bool branch_taken_0x44cb10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44cb10) {
            ctx->pc = 0x44CB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44CB10u;
            // 0x44cb14: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44CB28u;
            goto label_44cb28;
        }
    }
    ctx->pc = 0x44CB18u;
label_44cb18:
    // 0x44cb18: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x44cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_44cb1c:
    // 0x44cb1c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x44cb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_44cb20:
    // 0x44cb20: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x44cb20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_44cb24:
    // 0x44cb24: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x44cb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_44cb28:
    // 0x44cb28: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x44cb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_44cb2c:
    // 0x44cb2c: 0x40f809  jalr        $v0
label_44cb30:
    if (ctx->pc == 0x44CB30u) {
        ctx->pc = 0x44CB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CB2Cu;
        // 0x44cb30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CB34u;
        goto label_44cb34;
    }
    ctx->pc = 0x44CB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44CB34u);
        ctx->pc = 0x44CB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CB2Cu;
        // 0x44cb30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CB2Cu, 0x44CB34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44CB34u;
label_44cb34:
    // 0x44cb34: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x44cb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44cb38:
    // 0x44cb38: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_44cb3c:
    if (ctx->pc == 0x44CB3Cu) {
        ctx->pc = 0x44CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CB38u;
        // 0x44cb3c: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CB40u;
        goto label_44cb40;
    }
    ctx->pc = 0x44CB38u;
    {
        const bool branch_taken_0x44cb38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44cb38) {
            ctx->pc = 0x44CB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44CB38u;
            // 0x44cb3c: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44CB50u;
            goto label_44cb50;
        }
    }
    ctx->pc = 0x44CB40u;
label_44cb40:
    // 0x44cb40: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x44cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_44cb44:
    // 0x44cb44: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x44cb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_44cb48:
    // 0x44cb48: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x44cb48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_44cb4c:
    // 0x44cb4c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x44cb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_44cb50:
    // 0x44cb50: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x44cb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_44cb54:
    // 0x44cb54: 0x40f809  jalr        $v0
label_44cb58:
    if (ctx->pc == 0x44CB58u) {
        ctx->pc = 0x44CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CB54u;
        // 0x44cb58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CB5Cu;
        goto label_44cb5c;
    }
    ctx->pc = 0x44CB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44CB5Cu);
        ctx->pc = 0x44CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CB54u;
        // 0x44cb58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CB54u, 0x44CB5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44CB5Cu;
label_44cb5c:
    // 0x44cb5c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x44cb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44cb60:
    // 0x44cb60: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_44cb64:
    if (ctx->pc == 0x44CB64u) {
        ctx->pc = 0x44CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CB60u;
        // 0x44cb64: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CB68u;
        goto label_44cb68;
    }
    ctx->pc = 0x44CB60u;
    {
        const bool branch_taken_0x44cb60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44cb60) {
            ctx->pc = 0x44CB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44CB60u;
            // 0x44cb64: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44CB78u;
            goto label_44cb78;
        }
    }
    ctx->pc = 0x44CB68u;
label_44cb68:
    // 0x44cb68: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x44cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_44cb6c:
    // 0x44cb6c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x44cb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_44cb70:
    // 0x44cb70: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x44cb70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_44cb74:
    // 0x44cb74: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x44cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_44cb78:
    // 0x44cb78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x44cb78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44cb7c:
    // 0x44cb7c: 0x40f809  jalr        $v0
label_44cb80:
    if (ctx->pc == 0x44CB80u) {
        ctx->pc = 0x44CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CB7Cu;
        // 0x44cb80: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CB84u;
        goto label_44cb84;
    }
    ctx->pc = 0x44CB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44CB84u);
        ctx->pc = 0x44CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CB7Cu;
        // 0x44cb80: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CB7Cu, 0x44CB84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44CB84u;
label_44cb84:
    // 0x44cb84: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x44cb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44cb88:
    // 0x44cb88: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_44cb8c:
    if (ctx->pc == 0x44CB8Cu) {
        ctx->pc = 0x44CB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CB88u;
        // 0x44cb8c: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CB90u;
        goto label_44cb90;
    }
    ctx->pc = 0x44CB88u;
    {
        const bool branch_taken_0x44cb88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44cb88) {
            ctx->pc = 0x44CB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44CB88u;
            // 0x44cb8c: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44CBA0u;
            goto label_44cba0;
        }
    }
    ctx->pc = 0x44CB90u;
label_44cb90:
    // 0x44cb90: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x44cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_44cb94:
    // 0x44cb94: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x44cb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_44cb98:
    // 0x44cb98: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x44cb98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_44cb9c:
    // 0x44cb9c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x44cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_44cba0:
    // 0x44cba0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x44cba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_44cba4:
    // 0x44cba4: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x44cba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_44cba8:
    // 0x44cba8: 0x40f809  jalr        $v0
label_44cbac:
    if (ctx->pc == 0x44CBACu) {
        ctx->pc = 0x44CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CBA8u;
        // 0x44cbac: 0x26300014  addiu       $s0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CBB0u;
        goto label_44cbb0;
    }
    ctx->pc = 0x44CBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44CBB0u);
        ctx->pc = 0x44CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CBA8u;
        // 0x44cbac: 0x26300014  addiu       $s0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CBA8u, 0x44CBB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44CBB0u;
label_44cbb0:
    // 0x44cbb0: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x44cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_44cbb4:
    // 0x44cbb4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x44cbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_44cbb8:
    // 0x44cbb8: 0x40f809  jalr        $v0
label_44cbbc:
    if (ctx->pc == 0x44CBBCu) {
        ctx->pc = 0x44CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CBB8u;
        // 0x44cbbc: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CBC0u;
        goto label_44cbc0;
    }
    ctx->pc = 0x44CBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44CBC0u);
        ctx->pc = 0x44CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CBB8u;
        // 0x44cbbc: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CBB8u, 0x44CBC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44CBC0u;
label_44cbc0:
    // 0x44cbc0: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x44cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_44cbc4:
    // 0x44cbc4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x44cbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_44cbc8:
    // 0x44cbc8: 0x40f809  jalr        $v0
label_44cbcc:
    if (ctx->pc == 0x44CBCCu) {
        ctx->pc = 0x44CBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CBC8u;
        // 0x44cbcc: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CBD0u;
        goto label_44cbd0;
    }
    ctx->pc = 0x44CBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44CBD0u);
        ctx->pc = 0x44CBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CBC8u;
        // 0x44cbcc: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CBC8u, 0x44CBD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44CBD0u;
label_44cbd0:
    // 0x44cbd0: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x44cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_44cbd4:
    // 0x44cbd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x44cbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44cbd8:
    // 0x44cbd8: 0x40f809  jalr        $v0
label_44cbdc:
    if (ctx->pc == 0x44CBDCu) {
        ctx->pc = 0x44CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CBD8u;
        // 0x44cbdc: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CBE0u;
        goto label_44cbe0;
    }
    ctx->pc = 0x44CBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44CBE0u);
        ctx->pc = 0x44CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CBD8u;
        // 0x44cbdc: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CBD8u, 0x44CBE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44CBE0u;
label_44cbe0:
    // 0x44cbe0: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x44cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_44cbe4:
    // 0x44cbe4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x44cbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44cbe8:
    // 0x44cbe8: 0x40f809  jalr        $v0
label_44cbec:
    if (ctx->pc == 0x44CBECu) {
        ctx->pc = 0x44CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CBE8u;
        // 0x44cbec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CBF0u;
        goto label_44cbf0;
    }
    ctx->pc = 0x44CBE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44CBF0u);
        ctx->pc = 0x44CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CBE8u;
        // 0x44cbec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CBE8u, 0x44CBF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44CBF0u;
label_44cbf0:
    // 0x44cbf0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_44cbf4:
    if (ctx->pc == 0x44CBF4u) {
        ctx->pc = 0x44CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CBF0u;
        // 0x44cbf4: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CBF8u;
        goto label_44cbf8;
    }
    ctx->pc = 0x44CBF0u;
    {
        const bool branch_taken_0x44cbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44cbf0) {
            ctx->pc = 0x44CBF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44CBF0u;
            // 0x44cbf4: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44CC04u;
            goto label_44cc04;
        }
    }
    ctx->pc = 0x44CBF8u;
label_44cbf8:
    // 0x44cbf8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x44cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_44cbfc:
    // 0x44cbfc: 0x10000008  b           . + 4 + (0x8 << 2)
label_44cc00:
    if (ctx->pc == 0x44CC00u) {
        ctx->pc = 0x44CC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CBFCu;
        // 0x44cc00: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CC04u;
        goto label_44cc04;
    }
    ctx->pc = 0x44CBFCu;
    {
        const bool branch_taken_0x44cbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CBFCu;
        // 0x44cc00: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cbfc) {
            ctx->pc = 0x44CC20u;
            goto label_44cc20;
        }
    }
    ctx->pc = 0x44CC04u;
label_44cc04:
    // 0x44cc04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x44cc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44cc08:
    // 0x44cc08: 0x40f809  jalr        $v0
label_44cc0c:
    if (ctx->pc == 0x44CC0Cu) {
        ctx->pc = 0x44CC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CC08u;
        // 0x44cc0c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CC10u;
        goto label_44cc10;
    }
    ctx->pc = 0x44CC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44CC10u);
        ctx->pc = 0x44CC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CC08u;
        // 0x44cc0c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CC08u, 0x44CC10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44CC10u;
label_44cc10:
    // 0x44cc10: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x44cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_44cc14:
    // 0x44cc14: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x44cc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_44cc18:
    // 0x44cc18: 0x40f809  jalr        $v0
label_44cc1c:
    if (ctx->pc == 0x44CC1Cu) {
        ctx->pc = 0x44CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CC18u;
        // 0x44cc1c: 0x26250018  addiu       $a1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CC20u;
        goto label_44cc20;
    }
    ctx->pc = 0x44CC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44CC20u);
        ctx->pc = 0x44CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CC18u;
        // 0x44cc1c: 0x26250018  addiu       $a1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CC18u, 0x44CC20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44CC20u;
label_44cc20:
    // 0x44cc20: 0x2670e880  addiu       $s0, $s3, -0x1780
    ctx->pc = 0x44cc20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
label_44cc24:
    // 0x44cc24: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x44cc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_44cc28:
    // 0x44cc28: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x44cc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_44cc2c:
    // 0x44cc2c: 0x40f809  jalr        $v0
label_44cc30:
    if (ctx->pc == 0x44CC30u) {
        ctx->pc = 0x44CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CC2Cu;
        // 0x44cc30: 0x2625001c  addiu       $a1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CC34u;
        goto label_44cc34;
    }
    ctx->pc = 0x44CC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44CC34u);
        ctx->pc = 0x44CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CC2Cu;
        // 0x44cc30: 0x2625001c  addiu       $a1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CC2Cu, 0x44CC34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44CC34u;
label_44cc34:
    // 0x44cc34: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x44cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_44cc38:
    // 0x44cc38: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x44cc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_44cc3c:
    // 0x44cc3c: 0x40f809  jalr        $v0
label_44cc40:
    if (ctx->pc == 0x44CC40u) {
        ctx->pc = 0x44CC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CC3Cu;
        // 0x44cc40: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CC44u;
        goto label_44cc44;
    }
    ctx->pc = 0x44CC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44CC44u);
        ctx->pc = 0x44CC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CC3Cu;
        // 0x44cc40: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CC3Cu, 0x44CC44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44CC44u;
label_44cc44:
    // 0x44cc44: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x44cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_44cc48:
    // 0x44cc48: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x44cc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_44cc4c:
    // 0x44cc4c: 0x40f809  jalr        $v0
label_44cc50:
    if (ctx->pc == 0x44CC50u) {
        ctx->pc = 0x44CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CC4Cu;
        // 0x44cc50: 0x26250024  addiu       $a1, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CC54u;
        goto label_44cc54;
    }
    ctx->pc = 0x44CC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44CC54u);
        ctx->pc = 0x44CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CC4Cu;
        // 0x44cc50: 0x26250024  addiu       $a1, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CC4Cu, 0x44CC54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44CC54u;
label_44cc54:
    // 0x44cc54: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x44cc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_44cc58:
    // 0x44cc58: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x44cc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_44cc5c:
    // 0x44cc5c: 0x40f809  jalr        $v0
label_44cc60:
    if (ctx->pc == 0x44CC60u) {
        ctx->pc = 0x44CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CC5Cu;
        // 0x44cc60: 0x26250028  addiu       $a1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CC64u;
        goto label_44cc64;
    }
    ctx->pc = 0x44CC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44CC64u);
        ctx->pc = 0x44CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CC5Cu;
        // 0x44cc60: 0x26250028  addiu       $a1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CC5Cu, 0x44CC64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44CC64u;
label_44cc64:
    // 0x44cc64: 0x1000000a  b           . + 4 + (0xA << 2)
label_44cc68:
    if (ctx->pc == 0x44CC68u) {
        ctx->pc = 0x44CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CC64u;
        // 0x44cc68: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CC6Cu;
        goto label_44cc6c;
    }
    ctx->pc = 0x44CC64u;
    {
        const bool branch_taken_0x44cc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CC64u;
        // 0x44cc68: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cc64) {
            ctx->pc = 0x44CC90u;
            goto label_44cc90;
        }
    }
    ctx->pc = 0x44CC6Cu;
label_44cc6c:
    // 0x44cc6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44cc70:
    // 0x44cc70: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x44cc70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_44cc74:
    // 0x44cc74: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x44cc74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_44cc78:
    // 0x44cc78: 0xc1035f6  jal         func_40D7D8
label_44cc7c:
    if (ctx->pc == 0x44CC7Cu) {
        ctx->pc = 0x44CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CC78u;
        // 0x44cc7c: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CC80u;
        goto label_44cc80;
    }
    ctx->pc = 0x44CC78u;
    SET_GPR_U32(ctx, 31, 0x44CC80u);
    ctx->pc = 0x44CC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CC78u;
    // 0x44cc7c: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x44CC78u, 0x44CC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CC80u;
label_44cc80:
    // 0x44cc80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x44cc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_44cc84:
    // 0x44cc84: 0xc103628  jal         func_40D8A0
label_44cc88:
    if (ctx->pc == 0x44CC88u) {
        ctx->pc = 0x44CC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CC84u;
        // 0x44cc88: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CC8Cu;
        goto label_44cc8c;
    }
    ctx->pc = 0x44CC84u;
    SET_GPR_U32(ctx, 31, 0x44CC8Cu);
    ctx->pc = 0x44CC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CC84u;
    // 0x44cc88: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x44CC84u, 0x44CC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CC8Cu;
label_44cc8c:
    // 0x44cc8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x44cc8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44cc90:
    // 0x44cc90: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x44cc90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_44cc94:
    // 0x44cc94: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x44cc94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_44cc98:
    // 0x44cc98: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x44cc98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_44cc9c:
    // 0x44cc9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x44cc9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44cca0:
    // 0x44cca0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44cca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_44cca4:
    // 0x44cca4: 0x3e00008  jr          $ra
label_44cca8:
    if (ctx->pc == 0x44CCA8u) {
        ctx->pc = 0x44CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CCA4u;
        // 0x44cca8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CCACu;
        goto label_44ccac;
    }
    ctx->pc = 0x44CCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CCA4u;
        // 0x44cca8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CCA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44CCACu;
label_44ccac:
    // 0x44ccac: 0x0  nop
    ctx->pc = 0x44ccacu;
    // NOP
label_44ccb0:
    // 0x44ccb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44ccb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44ccb4:
    // 0x44ccb4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x44ccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_44ccb8:
    // 0x44ccb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44ccb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44ccbc:
    // 0x44ccbc: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x44ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_44ccc0:
    // 0x44ccc0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x44ccc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_44ccc4:
    // 0x44ccc4: 0x8c430124  lw          $v1, 0x124($v0)
    ctx->pc = 0x44ccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
label_44ccc8:
    // 0x44ccc8: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
label_44cccc:
    if (ctx->pc == 0x44CCCCu) {
        ctx->pc = 0x44CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CCC8u;
        // 0x44cccc: 0x8f83bf20  lw          $v1, -0x40E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CCD0u;
        goto label_44ccd0;
    }
    ctx->pc = 0x44CCC8u;
    {
        const bool branch_taken_0x44ccc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x44CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CCC8u;
        // 0x44cccc: 0x8f83bf20  lw          $v1, -0x40E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ccc8) {
            ctx->pc = 0x44CCF8u;
            goto label_44ccf8;
        }
    }
    ctx->pc = 0x44CCD0u;
label_44ccd0:
    // 0x44ccd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44ccd4:
    // 0x44ccd4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x44ccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_44ccd8:
    // 0x44ccd8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x44ccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_44ccdc:
    // 0x44ccdc: 0xc1035f6  jal         func_40D7D8
label_44cce0:
    if (ctx->pc == 0x44CCE0u) {
        ctx->pc = 0x44CCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CCDCu;
        // 0x44cce0: 0x34840018  ori         $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CCE4u;
        goto label_44cce4;
    }
    ctx->pc = 0x44CCDCu;
    SET_GPR_U32(ctx, 31, 0x44CCE4u);
    ctx->pc = 0x44CCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CCDCu;
    // 0x44cce0: 0x34840018  ori         $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x44CCDCu, 0x44CCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CCE4u;
label_44cce4:
    // 0x44cce4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x44cce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_44cce8:
    // 0x44cce8: 0xc103628  jal         func_40D8A0
label_44ccec:
    if (ctx->pc == 0x44CCECu) {
        ctx->pc = 0x44CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CCE8u;
        // 0x44ccec: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CCF0u;
        goto label_44ccf0;
    }
    ctx->pc = 0x44CCE8u;
    SET_GPR_U32(ctx, 31, 0x44CCF0u);
    ctx->pc = 0x44CCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CCE8u;
    // 0x44ccec: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x44CCE8u, 0x44CCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CCF0u;
label_44ccf0:
    // 0x44ccf0: 0x10000003  b           . + 4 + (0x3 << 2)
label_44ccf4:
    if (ctx->pc == 0x44CCF4u) {
        ctx->pc = 0x44CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CCF0u;
        // 0x44ccf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CCF8u;
        goto label_44ccf8;
    }
    ctx->pc = 0x44CCF0u;
    {
        const bool branch_taken_0x44ccf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CCF0u;
        // 0x44ccf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ccf0) {
            ctx->pc = 0x44CD00u;
            goto label_44cd00;
        }
    }
    ctx->pc = 0x44CCF8u;
label_44ccf8:
    // 0x44ccf8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x44ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_44ccfc:
    // 0x44ccfc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x44ccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_44cd00:
    // 0x44cd00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44cd00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44cd04:
    // 0x44cd04: 0x3e00008  jr          $ra
label_44cd08:
    if (ctx->pc == 0x44CD08u) {
        ctx->pc = 0x44CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CD04u;
        // 0x44cd08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CD0Cu;
        goto label_44cd0c;
    }
    ctx->pc = 0x44CD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CD04u;
        // 0x44cd08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44CD0Cu;
label_44cd0c:
    // 0x44cd0c: 0x0  nop
    ctx->pc = 0x44cd0cu;
    // NOP
label_44cd10:
    // 0x44cd10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x44cd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_44cd14:
    // 0x44cd14: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x44cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_44cd18:
    // 0x44cd18: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x44cd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_44cd1c:
    // 0x44cd1c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x44cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_44cd20:
    // 0x44cd20: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x44cd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_44cd24:
    // 0x44cd24: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x44cd24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_44cd28:
    // 0x44cd28: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x44cd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_44cd2c:
    // 0x44cd2c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44cd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_44cd30:
    // 0x44cd30: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x44cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_44cd34:
    // 0x44cd34: 0x14430034  bne         $v0, $v1, . + 4 + (0x34 << 2)
label_44cd38:
    if (ctx->pc == 0x44CD38u) {
        ctx->pc = 0x44CD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CD34u;
        // 0x44cd38: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CD3Cu;
        goto label_44cd3c;
    }
    ctx->pc = 0x44CD34u;
    {
        const bool branch_taken_0x44cd34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x44CD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CD34u;
        // 0x44cd38: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cd34) {
            ctx->pc = 0x44CE08u;
            goto label_44ce08;
        }
    }
    ctx->pc = 0x44CD3Cu;
label_44cd3c:
    // 0x44cd3c: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x44cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_44cd40:
    // 0x44cd40: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x44cd40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_44cd44:
    // 0x44cd44: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x44cd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_44cd48:
    // 0x44cd48: 0x40f809  jalr        $v0
label_44cd4c:
    if (ctx->pc == 0x44CD4Cu) {
        ctx->pc = 0x44CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CD48u;
        // 0x44cd4c: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CD50u;
        goto label_44cd50;
    }
    ctx->pc = 0x44CD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44CD50u);
        ctx->pc = 0x44CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CD48u;
        // 0x44cd4c: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CD48u, 0x44CD50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44CD50u;
label_44cd50:
    // 0x44cd50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x44cd50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44cd54:
    // 0x44cd54: 0x52000024  beql        $s0, $zero, . + 4 + (0x24 << 2)
label_44cd58:
    if (ctx->pc == 0x44CD58u) {
        ctx->pc = 0x44CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CD54u;
        // 0x44cd58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CD5Cu;
        goto label_44cd5c;
    }
    ctx->pc = 0x44CD54u;
    {
        const bool branch_taken_0x44cd54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x44cd54) {
            ctx->pc = 0x44CD58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44CD54u;
            // 0x44cd58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44CDE8u;
            goto label_44cde8;
        }
    }
    ctx->pc = 0x44CD5Cu;
label_44cd5c:
    // 0x44cd5c: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_44cd60:
    if (ctx->pc == 0x44CD60u) {
        ctx->pc = 0x44CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CD5Cu;
        // 0x44cd60: 0x8f82bf20  lw          $v0, -0x40E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CD64u;
        goto label_44cd64;
    }
    ctx->pc = 0x44CD5Cu;
    {
        const bool branch_taken_0x44cd5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CD5Cu;
        // 0x44cd60: 0x8f82bf20  lw          $v0, -0x40E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cd5c) {
            ctx->pc = 0x44CD84u;
            goto label_44cd84;
        }
    }
    ctx->pc = 0x44CD64u;
label_44cd64:
    // 0x44cd64: 0xc1132b2  jal         func_44CAC8
label_44cd68:
    if (ctx->pc == 0x44CD68u) {
        ctx->pc = 0x44CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CD64u;
        // 0x44cd68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CD6Cu;
        goto label_44cd6c;
    }
    ctx->pc = 0x44CD64u;
    SET_GPR_U32(ctx, 31, 0x44CD6Cu);
    ctx->pc = 0x44CD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CD64u;
    // 0x44cd68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44CAC8u;
    goto label_44cac8;
    ctx->pc = 0x44CD6Cu;
label_44cd6c:
    // 0x44cd6c: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
label_44cd70:
    if (ctx->pc == 0x44CD70u) {
        ctx->pc = 0x44CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CD6Cu;
        // 0x44cd70: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CD74u;
        goto label_44cd74;
    }
    ctx->pc = 0x44CD6Cu;
    {
        const bool branch_taken_0x44cd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CD6Cu;
        // 0x44cd70: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cd6c) {
            ctx->pc = 0x44CE34u;
            goto label_44ce34;
        }
    }
    ctx->pc = 0x44CD74u;
label_44cd74:
    // 0x44cd74: 0xc113394  jal         func_44CE50
label_44cd78:
    if (ctx->pc == 0x44CD78u) {
        ctx->pc = 0x44CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CD74u;
        // 0x44cd78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CD7Cu;
        goto label_44cd7c;
    }
    ctx->pc = 0x44CD74u;
    SET_GPR_U32(ctx, 31, 0x44CD7Cu);
    ctx->pc = 0x44CD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CD74u;
    // 0x44cd78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44CE50u, 0x44CD74u, 0x44CD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CD7Cu;
label_44cd7c:
    // 0x44cd7c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_44cd80:
    if (ctx->pc == 0x44CD80u) {
        ctx->pc = 0x44CD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CD7Cu;
        // 0x44cd80: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CD84u;
        goto label_44cd84;
    }
    ctx->pc = 0x44CD7Cu;
    {
        const bool branch_taken_0x44cd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CD7Cu;
        // 0x44cd80: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cd7c) {
            ctx->pc = 0x44CE34u;
            goto label_44ce34;
        }
    }
    ctx->pc = 0x44CD84u;
label_44cd84:
    // 0x44cd84: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x44cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_44cd88:
    // 0x44cd88: 0x6843000b  ldl         $v1, 0xB($v0)
    ctx->pc = 0x44cd88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_44cd8c:
    // 0x44cd8c: 0x6c430004  ldr         $v1, 0x4($v0)
    ctx->pc = 0x44cd8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_44cd90:
    // 0x44cd90: 0x68440013  ldl         $a0, 0x13($v0)
    ctx->pc = 0x44cd90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_44cd94:
    // 0x44cd94: 0x6c44000c  ldr         $a0, 0xC($v0)
    ctx->pc = 0x44cd94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_44cd98:
    // 0x44cd98: 0x6845001b  ldl         $a1, 0x1B($v0)
    ctx->pc = 0x44cd98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_44cd9c:
    // 0x44cd9c: 0x6c450014  ldr         $a1, 0x14($v0)
    ctx->pc = 0x44cd9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_44cda0:
    // 0x44cda0: 0x68460023  ldl         $a2, 0x23($v0)
    ctx->pc = 0x44cda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_44cda4:
    // 0x44cda4: 0x6c46001c  ldr         $a2, 0x1C($v0)
    ctx->pc = 0x44cda4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_44cda8:
    // 0x44cda8: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x44cda8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44cdac:
    // 0x44cdac: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x44cdacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44cdb0:
    // 0x44cdb0: 0xb204000f  sdl         $a0, 0xF($s0)
    ctx->pc = 0x44cdb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44cdb4:
    // 0x44cdb4: 0xb6040008  sdr         $a0, 0x8($s0)
    ctx->pc = 0x44cdb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44cdb8:
    // 0x44cdb8: 0xb2050017  sdl         $a1, 0x17($s0)
    ctx->pc = 0x44cdb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44cdbc:
    // 0x44cdbc: 0xb6050010  sdr         $a1, 0x10($s0)
    ctx->pc = 0x44cdbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44cdc0:
    // 0x44cdc0: 0xb206001f  sdl         $a2, 0x1F($s0)
    ctx->pc = 0x44cdc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44cdc4:
    // 0x44cdc4: 0xb6060018  sdr         $a2, 0x18($s0)
    ctx->pc = 0x44cdc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44cdc8:
    // 0x44cdc8: 0x6843002b  ldl         $v1, 0x2B($v0)
    ctx->pc = 0x44cdc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_44cdcc:
    // 0x44cdcc: 0x6c430024  ldr         $v1, 0x24($v0)
    ctx->pc = 0x44cdccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_44cdd0:
    // 0x44cdd0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x44cdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_44cdd4:
    // 0x44cdd4: 0xb2030027  sdl         $v1, 0x27($s0)
    ctx->pc = 0x44cdd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44cdd8:
    // 0x44cdd8: 0xb6030020  sdr         $v1, 0x20($s0)
    ctx->pc = 0x44cdd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44cddc:
    // 0x44cddc: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x44cddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
label_44cde0:
    // 0x44cde0: 0x10000014  b           . + 4 + (0x14 << 2)
label_44cde4:
    if (ctx->pc == 0x44CDE4u) {
        ctx->pc = 0x44CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CDE0u;
        // 0x44cde4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CDE8u;
        goto label_44cde8;
    }
    ctx->pc = 0x44CDE0u;
    {
        const bool branch_taken_0x44cde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CDE0u;
        // 0x44cde4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cde0) {
            ctx->pc = 0x44CE34u;
            goto label_44ce34;
        }
    }
    ctx->pc = 0x44CDE8u;
label_44cde8:
    // 0x44cde8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x44cde8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_44cdec:
    // 0x44cdec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x44cdecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_44cdf0:
    // 0x44cdf0: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x44cdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_44cdf4:
    // 0x44cdf4: 0xc1035f6  jal         func_40D7D8
label_44cdf8:
    if (ctx->pc == 0x44CDF8u) {
        ctx->pc = 0x44CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CDF4u;
        // 0x44cdf8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CDFCu;
        goto label_44cdfc;
    }
    ctx->pc = 0x44CDF4u;
    SET_GPR_U32(ctx, 31, 0x44CDFCu);
    ctx->pc = 0x44CDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CDF4u;
    // 0x44cdf8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x44CDF4u, 0x44CDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CDFCu;
label_44cdfc:
    // 0x44cdfc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x44cdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_44ce00:
    // 0x44ce00: 0x10000009  b           . + 4 + (0x9 << 2)
label_44ce04:
    if (ctx->pc == 0x44CE04u) {
        ctx->pc = 0x44CE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CE00u;
        // 0x44ce04: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CE08u;
        goto label_44ce08;
    }
    ctx->pc = 0x44CE00u;
    {
        const bool branch_taken_0x44ce00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CE00u;
        // 0x44ce04: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ce00) {
            ctx->pc = 0x44CE28u;
            goto label_44ce28;
        }
    }
    ctx->pc = 0x44CE08u;
label_44ce08:
    // 0x44ce08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44ce0c:
    // 0x44ce0c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x44ce0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_44ce10:
    // 0x44ce10: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x44ce10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_44ce14:
    // 0x44ce14: 0xc1035f6  jal         func_40D7D8
label_44ce18:
    if (ctx->pc == 0x44CE18u) {
        ctx->pc = 0x44CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CE14u;
        // 0x44ce18: 0x34840018  ori         $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CE1Cu;
        goto label_44ce1c;
    }
    ctx->pc = 0x44CE14u;
    SET_GPR_U32(ctx, 31, 0x44CE1Cu);
    ctx->pc = 0x44CE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CE14u;
    // 0x44ce18: 0x34840018  ori         $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x44CE14u, 0x44CE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CE1Cu;
label_44ce1c:
    // 0x44ce1c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x44ce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_44ce20:
    // 0x44ce20: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x44ce20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44ce24:
    // 0x44ce24: 0x0  nop
    ctx->pc = 0x44ce24u;
    // NOP
label_44ce28:
    // 0x44ce28: 0xc103628  jal         func_40D8A0
label_44ce2c:
    if (ctx->pc == 0x44CE2Cu) {
        ctx->pc = 0x44CE30u;
        goto label_44ce30;
    }
    ctx->pc = 0x44CE28u;
    SET_GPR_U32(ctx, 31, 0x44CE30u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x44CE28u, 0x44CE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CE30u;
label_44ce30:
    // 0x44ce30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x44ce30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44ce34:
    // 0x44ce34: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x44ce34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_44ce38:
    // 0x44ce38: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x44ce38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_44ce3c:
    // 0x44ce3c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x44ce3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44ce40:
    // 0x44ce40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44ce40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_44ce44:
    // 0x44ce44: 0x3e00008  jr          $ra
label_44ce48:
    if (ctx->pc == 0x44CE48u) {
        ctx->pc = 0x44CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CE44u;
        // 0x44ce48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CE4Cu;
        goto label_44ce4c;
    }
    ctx->pc = 0x44CE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CE44u;
        // 0x44ce48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44CE4Cu;
label_44ce4c:
    // 0x44ce4c: 0x0  nop
    ctx->pc = 0x44ce4cu;
    // NOP
    ctx->pc = 0x44ce50u;
}
