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

// Function: sub_0011CA60
// Address: 0x11ca60 - 0x11cc50
void sub_0011CA60_0x11ca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CA60_0x11ca60");
#endif

    switch (ctx->pc) {
        case 0x11ca60u: goto label_11ca60;
        case 0x11ca64u: goto label_11ca64;
        case 0x11ca68u: goto label_11ca68;
        case 0x11ca6cu: goto label_11ca6c;
        case 0x11ca70u: goto label_11ca70;
        case 0x11ca74u: goto label_11ca74;
        case 0x11ca78u: goto label_11ca78;
        case 0x11ca7cu: goto label_11ca7c;
        case 0x11ca80u: goto label_11ca80;
        case 0x11ca84u: goto label_11ca84;
        case 0x11ca88u: goto label_11ca88;
        case 0x11ca8cu: goto label_11ca8c;
        case 0x11ca90u: goto label_11ca90;
        case 0x11ca94u: goto label_11ca94;
        case 0x11ca98u: goto label_11ca98;
        case 0x11ca9cu: goto label_11ca9c;
        case 0x11caa0u: goto label_11caa0;
        case 0x11caa4u: goto label_11caa4;
        case 0x11caa8u: goto label_11caa8;
        case 0x11caacu: goto label_11caac;
        case 0x11cab0u: goto label_11cab0;
        case 0x11cab4u: goto label_11cab4;
        case 0x11cab8u: goto label_11cab8;
        case 0x11cabcu: goto label_11cabc;
        case 0x11cac0u: goto label_11cac0;
        case 0x11cac4u: goto label_11cac4;
        case 0x11cac8u: goto label_11cac8;
        case 0x11caccu: goto label_11cacc;
        case 0x11cad0u: goto label_11cad0;
        case 0x11cad4u: goto label_11cad4;
        case 0x11cad8u: goto label_11cad8;
        case 0x11cadcu: goto label_11cadc;
        case 0x11cae0u: goto label_11cae0;
        case 0x11cae4u: goto label_11cae4;
        case 0x11cae8u: goto label_11cae8;
        case 0x11caecu: goto label_11caec;
        case 0x11caf0u: goto label_11caf0;
        case 0x11caf4u: goto label_11caf4;
        case 0x11caf8u: goto label_11caf8;
        case 0x11cafcu: goto label_11cafc;
        case 0x11cb00u: goto label_11cb00;
        case 0x11cb04u: goto label_11cb04;
        case 0x11cb08u: goto label_11cb08;
        case 0x11cb0cu: goto label_11cb0c;
        case 0x11cb10u: goto label_11cb10;
        case 0x11cb14u: goto label_11cb14;
        case 0x11cb18u: goto label_11cb18;
        case 0x11cb1cu: goto label_11cb1c;
        case 0x11cb20u: goto label_11cb20;
        case 0x11cb24u: goto label_11cb24;
        case 0x11cb28u: goto label_11cb28;
        case 0x11cb2cu: goto label_11cb2c;
        case 0x11cb30u: goto label_11cb30;
        case 0x11cb34u: goto label_11cb34;
        case 0x11cb38u: goto label_11cb38;
        case 0x11cb3cu: goto label_11cb3c;
        case 0x11cb40u: goto label_11cb40;
        case 0x11cb44u: goto label_11cb44;
        case 0x11cb48u: goto label_11cb48;
        case 0x11cb4cu: goto label_11cb4c;
        case 0x11cb50u: goto label_11cb50;
        case 0x11cb54u: goto label_11cb54;
        case 0x11cb58u: goto label_11cb58;
        case 0x11cb5cu: goto label_11cb5c;
        case 0x11cb60u: goto label_11cb60;
        case 0x11cb64u: goto label_11cb64;
        case 0x11cb68u: goto label_11cb68;
        case 0x11cb6cu: goto label_11cb6c;
        case 0x11cb70u: goto label_11cb70;
        case 0x11cb74u: goto label_11cb74;
        case 0x11cb78u: goto label_11cb78;
        case 0x11cb7cu: goto label_11cb7c;
        case 0x11cb80u: goto label_11cb80;
        case 0x11cb84u: goto label_11cb84;
        case 0x11cb88u: goto label_11cb88;
        case 0x11cb8cu: goto label_11cb8c;
        case 0x11cb90u: goto label_11cb90;
        case 0x11cb94u: goto label_11cb94;
        case 0x11cb98u: goto label_11cb98;
        case 0x11cb9cu: goto label_11cb9c;
        case 0x11cba0u: goto label_11cba0;
        case 0x11cba4u: goto label_11cba4;
        case 0x11cba8u: goto label_11cba8;
        case 0x11cbacu: goto label_11cbac;
        case 0x11cbb0u: goto label_11cbb0;
        case 0x11cbb4u: goto label_11cbb4;
        case 0x11cbb8u: goto label_11cbb8;
        case 0x11cbbcu: goto label_11cbbc;
        case 0x11cbc0u: goto label_11cbc0;
        case 0x11cbc4u: goto label_11cbc4;
        case 0x11cbc8u: goto label_11cbc8;
        case 0x11cbccu: goto label_11cbcc;
        case 0x11cbd0u: goto label_11cbd0;
        case 0x11cbd4u: goto label_11cbd4;
        case 0x11cbd8u: goto label_11cbd8;
        case 0x11cbdcu: goto label_11cbdc;
        case 0x11cbe0u: goto label_11cbe0;
        case 0x11cbe4u: goto label_11cbe4;
        case 0x11cbe8u: goto label_11cbe8;
        case 0x11cbecu: goto label_11cbec;
        case 0x11cbf0u: goto label_11cbf0;
        case 0x11cbf4u: goto label_11cbf4;
        case 0x11cbf8u: goto label_11cbf8;
        case 0x11cbfcu: goto label_11cbfc;
        case 0x11cc00u: goto label_11cc00;
        case 0x11cc04u: goto label_11cc04;
        case 0x11cc08u: goto label_11cc08;
        case 0x11cc0cu: goto label_11cc0c;
        case 0x11cc10u: goto label_11cc10;
        case 0x11cc14u: goto label_11cc14;
        case 0x11cc18u: goto label_11cc18;
        case 0x11cc1cu: goto label_11cc1c;
        case 0x11cc20u: goto label_11cc20;
        case 0x11cc24u: goto label_11cc24;
        case 0x11cc28u: goto label_11cc28;
        case 0x11cc2cu: goto label_11cc2c;
        case 0x11cc30u: goto label_11cc30;
        case 0x11cc34u: goto label_11cc34;
        case 0x11cc38u: goto label_11cc38;
        case 0x11cc3cu: goto label_11cc3c;
        case 0x11cc40u: goto label_11cc40;
        case 0x11cc44u: goto label_11cc44;
        case 0x11cc48u: goto label_11cc48;
        case 0x11cc4cu: goto label_11cc4c;
        default: break;
    }

    ctx->pc = 0x11ca60u;

label_11ca60:
    // 0x11ca60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11ca60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_11ca64:
    // 0x11ca64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11ca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_11ca68:
    // 0x11ca68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11ca68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_11ca6c:
    // 0x11ca6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11ca6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_11ca70:
    // 0x11ca70: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x11ca70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_11ca74:
    // 0x11ca74: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11ca74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11ca78:
    // 0x11ca78: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x11ca78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_11ca7c:
    // 0x11ca7c: 0x278589c0  addiu       $a1, $gp, -0x7640
    ctx->pc = 0x11ca7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937024));
label_11ca80:
    // 0x11ca80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11ca80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11ca84:
    // 0x11ca84: 0xc047328  jal         func_11CCA0
label_11ca88:
    if (ctx->pc == 0x11CA88u) {
        ctx->pc = 0x11CA8Cu;
        goto label_11ca8c;
    }
    ctx->pc = 0x11CA84u;
    SET_GPR_U32(ctx, 31, 0x11CA8Cu);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x11CA84u, 0x11CA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA8Cu;
label_11ca8c:
    // 0x11ca8c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x11ca8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11ca90:
    // 0x11ca90: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x11ca90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_11ca94:
    // 0x11ca94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11ca94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11ca98:
    // 0x11ca98: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_11ca9c:
    if (ctx->pc == 0x11CA9Cu) {
        ctx->pc = 0x11CAA0u;
        goto label_11caa0;
    }
    ctx->pc = 0x11CA98u;
    {
        const bool branch_taken_0x11ca98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11ca98) {
            ctx->pc = 0x11CAB8u;
            goto label_11cab8;
        }
    }
    ctx->pc = 0x11CAA0u;
label_11caa0:
    // 0x11caa0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x11caa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11caa4:
    // 0x11caa4: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x11caa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_11caa8:
    // 0x11caa8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x11caa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11caac:
    // 0x11caac: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x11caacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_11cab0:
    // 0x11cab0: 0x1083004f  beq         $a0, $v1, . + 4 + (0x4F << 2)
label_11cab4:
    if (ctx->pc == 0x11CAB4u) {
        ctx->pc = 0x11CAB8u;
        goto label_11cab8;
    }
    ctx->pc = 0x11CAB0u;
    {
        const bool branch_taken_0x11cab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11cab0) {
            ctx->pc = 0x11CBF0u;
            goto label_11cbf0;
        }
    }
    ctx->pc = 0x11CAB8u;
label_11cab8:
    // 0x11cab8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x11cab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_11cabc:
    // 0x11cabc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11cabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11cac0:
    // 0x11cac0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_11cac4:
    if (ctx->pc == 0x11CAC4u) {
        ctx->pc = 0x11CAC8u;
        goto label_11cac8;
    }
    ctx->pc = 0x11CAC0u;
    {
        const bool branch_taken_0x11cac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11cac0) {
            ctx->pc = 0x11CAE0u;
            goto label_11cae0;
        }
    }
    ctx->pc = 0x11CAC8u;
label_11cac8:
    // 0x11cac8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11cacc:
    // 0x11cacc: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x11caccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_11cad0:
    // 0x11cad0: 0x278589c0  addiu       $a1, $gp, -0x7640
    ctx->pc = 0x11cad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937024));
label_11cad4:
    // 0x11cad4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11cad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11cad8:
    // 0x11cad8: 0xc047314  jal         func_11CC50
label_11cadc:
    if (ctx->pc == 0x11CADCu) {
        ctx->pc = 0x11CAE0u;
        goto label_11cae0;
    }
    ctx->pc = 0x11CAD8u;
    SET_GPR_U32(ctx, 31, 0x11CAE0u);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x11CAD8u, 0x11CAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CAE0u;
label_11cae0:
    // 0x11cae0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11cae4:
    // 0x11cae4: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x11cae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_11cae8:
    // 0x11cae8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11caec:
    // 0x11caec: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x11caecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_11caf0:
    // 0x11caf0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x11caf0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_11caf4:
    // 0x11caf4: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_11caf8:
    if (ctx->pc == 0x11CAF8u) {
        ctx->pc = 0x11CAFCu;
        goto label_11cafc;
    }
    ctx->pc = 0x11CAF4u;
    {
        const bool branch_taken_0x11caf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11caf4) {
            ctx->pc = 0x11CB2Cu;
            goto label_11cb2c;
        }
    }
    ctx->pc = 0x11CAFCu;
label_11cafc:
    // 0x11cafc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x11cafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11cb00:
    // 0x11cb00: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11cb04:
    // 0x11cb04: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x11cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_11cb08:
    // 0x11cb08: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x11cb08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11cb0c:
    // 0x11cb0c: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x11cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_11cb10:
    // 0x11cb10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_11cb14:
    // 0x11cb14: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11cb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11cb18:
    // 0x11cb18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11cb18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11cb1c:
    // 0x11cb1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11cb1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11cb20:
    // 0x11cb20: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x11cb20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_11cb24:
    // 0x11cb24: 0x320f809  jalr        $t9
label_11cb28:
    if (ctx->pc == 0x11CB28u) {
        ctx->pc = 0x11CB2Cu;
        goto label_11cb2c;
    }
    ctx->pc = 0x11CB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11CB2Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CB24u, 0x11CB2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11CB2Cu;
label_11cb2c:
    // 0x11cb2c: 0xc05548c  jal         func_155230
label_11cb30:
    if (ctx->pc == 0x11CB30u) {
        ctx->pc = 0x11CB34u;
        goto label_11cb34;
    }
    ctx->pc = 0x11CB2Cu;
    SET_GPR_U32(ctx, 31, 0x11CB34u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x11CB2Cu, 0x11CB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB34u;
label_11cb34:
    // 0x11cb34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11cb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11cb38:
    // 0x11cb38: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x11cb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_11cb3c:
    // 0x11cb3c: 0xc0553d4  jal         func_154F50
label_11cb40:
    if (ctx->pc == 0x11CB40u) {
        ctx->pc = 0x11CB44u;
        goto label_11cb44;
    }
    ctx->pc = 0x11CB3Cu;
    SET_GPR_U32(ctx, 31, 0x11CB44u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x11CB3Cu, 0x11CB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB44u;
label_11cb44:
    // 0x11cb44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11cb44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11cb48:
    // 0x11cb48: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_11cb4c:
    if (ctx->pc == 0x11CB4Cu) {
        ctx->pc = 0x11CB50u;
        goto label_11cb50;
    }
    ctx->pc = 0x11CB48u;
    {
        const bool branch_taken_0x11cb48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cb48) {
            ctx->pc = 0x11CB74u;
            goto label_11cb74;
        }
    }
    ctx->pc = 0x11CB50u;
label_11cb50:
    // 0x11cb50: 0xc08d32c  jal         func_234CB0
label_11cb54:
    if (ctx->pc == 0x11CB54u) {
        ctx->pc = 0x11CB58u;
        goto label_11cb58;
    }
    ctx->pc = 0x11CB50u;
    SET_GPR_U32(ctx, 31, 0x11CB58u);
    ctx->pc = 0x234CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234CB0u, 0x11CB50u, 0x11CB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB58u;
label_11cb58:
    // 0x11cb58: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_11cb5c:
    if (ctx->pc == 0x11CB5Cu) {
        ctx->pc = 0x11CB60u;
        goto label_11cb60;
    }
    ctx->pc = 0x11CB58u;
    {
        const bool branch_taken_0x11cb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cb58) {
            ctx->pc = 0x11CB74u;
            goto label_11cb74;
        }
    }
    ctx->pc = 0x11CB60u;
label_11cb60:
    // 0x11cb60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11cb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11cb64:
    // 0x11cb64: 0xc08d230  jal         func_2348C0
label_11cb68:
    if (ctx->pc == 0x11CB68u) {
        ctx->pc = 0x11CB6Cu;
        goto label_11cb6c;
    }
    ctx->pc = 0x11CB64u;
    SET_GPR_U32(ctx, 31, 0x11CB6Cu);
    ctx->pc = 0x2348C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2348C0u, 0x11CB64u, 0x11CB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB6Cu;
label_11cb6c:
    // 0x11cb6c: 0xc125360  jal         func_494D80
label_11cb70:
    if (ctx->pc == 0x11CB70u) {
        ctx->pc = 0x11CB74u;
        goto label_11cb74;
    }
    ctx->pc = 0x11CB6Cu;
    SET_GPR_U32(ctx, 31, 0x11CB74u);
    ctx->pc = 0x494D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x494D80u, 0x11CB6Cu, 0x11CB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB74u;
label_11cb74:
    // 0x11cb74: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11cb78:
    // 0x11cb78: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x11cb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_11cb7c:
    // 0x11cb7c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11cb80:
    // 0x11cb80: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x11cb80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_11cb84:
    // 0x11cb84: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11cb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11cb88:
    // 0x11cb88: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x11cb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_11cb8c:
    // 0x11cb8c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11cb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11cb90:
    // 0x11cb90: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x11cb90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_11cb94:
    // 0x11cb94: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x11cb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11cb98:
    // 0x11cb98: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11cb9c:
    // 0x11cb9c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x11cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_11cba0:
    // 0x11cba0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x11cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11cba4:
    // 0x11cba4: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x11cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_11cba8:
    // 0x11cba8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x11cba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_11cbac:
    // 0x11cbac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11cbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11cbb0:
    // 0x11cbb0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11cbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11cbb4:
    // 0x11cbb4: 0x24450038  addiu       $a1, $v0, 0x38
    ctx->pc = 0x11cbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_11cbb8:
    // 0x11cbb8: 0xc08edcc  jal         func_23B730
label_11cbbc:
    if (ctx->pc == 0x11CBBCu) {
        ctx->pc = 0x11CBC0u;
        goto label_11cbc0;
    }
    ctx->pc = 0x11CBB8u;
    SET_GPR_U32(ctx, 31, 0x11CBC0u);
    ctx->pc = 0x23B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B730u, 0x11CBB8u, 0x11CBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CBC0u;
label_11cbc0:
    // 0x11cbc0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x11cbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11cbc4:
    // 0x11cbc4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11cbc8:
    // 0x11cbc8: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x11cbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_11cbcc:
    // 0x11cbcc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x11cbccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11cbd0:
    // 0x11cbd0: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x11cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_11cbd4:
    // 0x11cbd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11cbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_11cbd8:
    // 0x11cbd8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11cbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11cbdc:
    // 0x11cbdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11cbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11cbe0:
    // 0x11cbe0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11cbe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11cbe4:
    // 0x11cbe4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x11cbe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_11cbe8:
    // 0x11cbe8: 0x320f809  jalr        $t9
label_11cbec:
    if (ctx->pc == 0x11CBECu) {
        ctx->pc = 0x11CBF0u;
        goto label_11cbf0;
    }
    ctx->pc = 0x11CBE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11CBF0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CBE8u, 0x11CBF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11CBF0u;
label_11cbf0:
    // 0x11cbf0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x11cbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11cbf4:
    // 0x11cbf4: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x11cbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_11cbf8:
    // 0x11cbf8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x11cbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11cbfc:
    // 0x11cbfc: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x11cbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_11cc00:
    // 0x11cc00: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x11cc00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_11cc04:
    // 0x11cc04: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_11cc08:
    if (ctx->pc == 0x11CC08u) {
        ctx->pc = 0x11CC0Cu;
        goto label_11cc0c;
    }
    ctx->pc = 0x11CC04u;
    {
        const bool branch_taken_0x11cc04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cc04) {
            ctx->pc = 0x11CC38u;
            goto label_11cc38;
        }
    }
    ctx->pc = 0x11CC0Cu;
label_11cc0c:
    // 0x11cc0c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x11cc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11cc10:
    // 0x11cc10: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11cc14:
    // 0x11cc14: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x11cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_11cc18:
    // 0x11cc18: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x11cc18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11cc1c:
    // 0x11cc1c: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x11cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_11cc20:
    // 0x11cc20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_11cc24:
    // 0x11cc24: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11cc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11cc28:
    // 0x11cc28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11cc28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11cc2c:
    // 0x11cc2c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x11cc2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_11cc30:
    // 0x11cc30: 0x320f809  jalr        $t9
label_11cc34:
    if (ctx->pc == 0x11CC34u) {
        ctx->pc = 0x11CC38u;
        goto label_11cc38;
    }
    ctx->pc = 0x11CC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11CC38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CC30u, 0x11CC38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11CC38u;
label_11cc38:
    // 0x11cc38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11cc38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11cc3c:
    // 0x11cc3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11cc3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11cc40:
    // 0x11cc40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11cc40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11cc44:
    // 0x11cc44: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x11cc44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_11cc48:
    // 0x11cc48: 0x3e00008  jr          $ra
label_11cc4c:
    if (ctx->pc == 0x11CC4Cu) {
        ctx->pc = 0x11CC50u;
        goto label_fallthrough_0x11cc48;
    }
    ctx->pc = 0x11CC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11cc48:
    ctx->pc = 0x11CC50u;
}
