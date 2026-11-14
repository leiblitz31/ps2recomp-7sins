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

// Function: sub_0049C9D8
// Address: 0x49c9d8 - 0x49ccb8
void sub_0049C9D8_0x49c9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049C9D8_0x49c9d8");
#endif

    switch (ctx->pc) {
        case 0x49c9d8u: goto label_49c9d8;
        case 0x49c9dcu: goto label_49c9dc;
        case 0x49c9e0u: goto label_49c9e0;
        case 0x49c9e4u: goto label_49c9e4;
        case 0x49c9e8u: goto label_49c9e8;
        case 0x49c9ecu: goto label_49c9ec;
        case 0x49c9f0u: goto label_49c9f0;
        case 0x49c9f4u: goto label_49c9f4;
        case 0x49c9f8u: goto label_49c9f8;
        case 0x49c9fcu: goto label_49c9fc;
        case 0x49ca00u: goto label_49ca00;
        case 0x49ca04u: goto label_49ca04;
        case 0x49ca08u: goto label_49ca08;
        case 0x49ca0cu: goto label_49ca0c;
        case 0x49ca10u: goto label_49ca10;
        case 0x49ca14u: goto label_49ca14;
        case 0x49ca18u: goto label_49ca18;
        case 0x49ca1cu: goto label_49ca1c;
        case 0x49ca20u: goto label_49ca20;
        case 0x49ca24u: goto label_49ca24;
        case 0x49ca28u: goto label_49ca28;
        case 0x49ca2cu: goto label_49ca2c;
        case 0x49ca30u: goto label_49ca30;
        case 0x49ca34u: goto label_49ca34;
        case 0x49ca38u: goto label_49ca38;
        case 0x49ca3cu: goto label_49ca3c;
        case 0x49ca40u: goto label_49ca40;
        case 0x49ca44u: goto label_49ca44;
        case 0x49ca48u: goto label_49ca48;
        case 0x49ca4cu: goto label_49ca4c;
        case 0x49ca50u: goto label_49ca50;
        case 0x49ca54u: goto label_49ca54;
        case 0x49ca58u: goto label_49ca58;
        case 0x49ca5cu: goto label_49ca5c;
        case 0x49ca60u: goto label_49ca60;
        case 0x49ca64u: goto label_49ca64;
        case 0x49ca68u: goto label_49ca68;
        case 0x49ca6cu: goto label_49ca6c;
        case 0x49ca70u: goto label_49ca70;
        case 0x49ca74u: goto label_49ca74;
        case 0x49ca78u: goto label_49ca78;
        case 0x49ca7cu: goto label_49ca7c;
        case 0x49ca80u: goto label_49ca80;
        case 0x49ca84u: goto label_49ca84;
        case 0x49ca88u: goto label_49ca88;
        case 0x49ca8cu: goto label_49ca8c;
        case 0x49ca90u: goto label_49ca90;
        case 0x49ca94u: goto label_49ca94;
        case 0x49ca98u: goto label_49ca98;
        case 0x49ca9cu: goto label_49ca9c;
        case 0x49caa0u: goto label_49caa0;
        case 0x49caa4u: goto label_49caa4;
        case 0x49caa8u: goto label_49caa8;
        case 0x49caacu: goto label_49caac;
        case 0x49cab0u: goto label_49cab0;
        case 0x49cab4u: goto label_49cab4;
        case 0x49cab8u: goto label_49cab8;
        case 0x49cabcu: goto label_49cabc;
        case 0x49cac0u: goto label_49cac0;
        case 0x49cac4u: goto label_49cac4;
        case 0x49cac8u: goto label_49cac8;
        case 0x49caccu: goto label_49cacc;
        case 0x49cad0u: goto label_49cad0;
        case 0x49cad4u: goto label_49cad4;
        case 0x49cad8u: goto label_49cad8;
        case 0x49cadcu: goto label_49cadc;
        case 0x49cae0u: goto label_49cae0;
        case 0x49cae4u: goto label_49cae4;
        case 0x49cae8u: goto label_49cae8;
        case 0x49caecu: goto label_49caec;
        case 0x49caf0u: goto label_49caf0;
        case 0x49caf4u: goto label_49caf4;
        case 0x49caf8u: goto label_49caf8;
        case 0x49cafcu: goto label_49cafc;
        case 0x49cb00u: goto label_49cb00;
        case 0x49cb04u: goto label_49cb04;
        case 0x49cb08u: goto label_49cb08;
        case 0x49cb0cu: goto label_49cb0c;
        case 0x49cb10u: goto label_49cb10;
        case 0x49cb14u: goto label_49cb14;
        case 0x49cb18u: goto label_49cb18;
        case 0x49cb1cu: goto label_49cb1c;
        case 0x49cb20u: goto label_49cb20;
        case 0x49cb24u: goto label_49cb24;
        case 0x49cb28u: goto label_49cb28;
        case 0x49cb2cu: goto label_49cb2c;
        case 0x49cb30u: goto label_49cb30;
        case 0x49cb34u: goto label_49cb34;
        case 0x49cb38u: goto label_49cb38;
        case 0x49cb3cu: goto label_49cb3c;
        case 0x49cb40u: goto label_49cb40;
        case 0x49cb44u: goto label_49cb44;
        case 0x49cb48u: goto label_49cb48;
        case 0x49cb4cu: goto label_49cb4c;
        case 0x49cb50u: goto label_49cb50;
        case 0x49cb54u: goto label_49cb54;
        case 0x49cb58u: goto label_49cb58;
        case 0x49cb5cu: goto label_49cb5c;
        case 0x49cb60u: goto label_49cb60;
        case 0x49cb64u: goto label_49cb64;
        case 0x49cb68u: goto label_49cb68;
        case 0x49cb6cu: goto label_49cb6c;
        case 0x49cb70u: goto label_49cb70;
        case 0x49cb74u: goto label_49cb74;
        case 0x49cb78u: goto label_49cb78;
        case 0x49cb7cu: goto label_49cb7c;
        case 0x49cb80u: goto label_49cb80;
        case 0x49cb84u: goto label_49cb84;
        case 0x49cb88u: goto label_49cb88;
        case 0x49cb8cu: goto label_49cb8c;
        case 0x49cb90u: goto label_49cb90;
        case 0x49cb94u: goto label_49cb94;
        case 0x49cb98u: goto label_49cb98;
        case 0x49cb9cu: goto label_49cb9c;
        case 0x49cba0u: goto label_49cba0;
        case 0x49cba4u: goto label_49cba4;
        case 0x49cba8u: goto label_49cba8;
        case 0x49cbacu: goto label_49cbac;
        case 0x49cbb0u: goto label_49cbb0;
        case 0x49cbb4u: goto label_49cbb4;
        case 0x49cbb8u: goto label_49cbb8;
        case 0x49cbbcu: goto label_49cbbc;
        case 0x49cbc0u: goto label_49cbc0;
        case 0x49cbc4u: goto label_49cbc4;
        case 0x49cbc8u: goto label_49cbc8;
        case 0x49cbccu: goto label_49cbcc;
        case 0x49cbd0u: goto label_49cbd0;
        case 0x49cbd4u: goto label_49cbd4;
        case 0x49cbd8u: goto label_49cbd8;
        case 0x49cbdcu: goto label_49cbdc;
        case 0x49cbe0u: goto label_49cbe0;
        case 0x49cbe4u: goto label_49cbe4;
        case 0x49cbe8u: goto label_49cbe8;
        case 0x49cbecu: goto label_49cbec;
        case 0x49cbf0u: goto label_49cbf0;
        case 0x49cbf4u: goto label_49cbf4;
        case 0x49cbf8u: goto label_49cbf8;
        case 0x49cbfcu: goto label_49cbfc;
        case 0x49cc00u: goto label_49cc00;
        case 0x49cc04u: goto label_49cc04;
        case 0x49cc08u: goto label_49cc08;
        case 0x49cc0cu: goto label_49cc0c;
        case 0x49cc10u: goto label_49cc10;
        case 0x49cc14u: goto label_49cc14;
        case 0x49cc18u: goto label_49cc18;
        case 0x49cc1cu: goto label_49cc1c;
        case 0x49cc20u: goto label_49cc20;
        case 0x49cc24u: goto label_49cc24;
        case 0x49cc28u: goto label_49cc28;
        case 0x49cc2cu: goto label_49cc2c;
        case 0x49cc30u: goto label_49cc30;
        case 0x49cc34u: goto label_49cc34;
        case 0x49cc38u: goto label_49cc38;
        case 0x49cc3cu: goto label_49cc3c;
        case 0x49cc40u: goto label_49cc40;
        case 0x49cc44u: goto label_49cc44;
        case 0x49cc48u: goto label_49cc48;
        case 0x49cc4cu: goto label_49cc4c;
        case 0x49cc50u: goto label_49cc50;
        case 0x49cc54u: goto label_49cc54;
        case 0x49cc58u: goto label_49cc58;
        case 0x49cc5cu: goto label_49cc5c;
        case 0x49cc60u: goto label_49cc60;
        case 0x49cc64u: goto label_49cc64;
        case 0x49cc68u: goto label_49cc68;
        case 0x49cc6cu: goto label_49cc6c;
        case 0x49cc70u: goto label_49cc70;
        case 0x49cc74u: goto label_49cc74;
        case 0x49cc78u: goto label_49cc78;
        case 0x49cc7cu: goto label_49cc7c;
        case 0x49cc80u: goto label_49cc80;
        case 0x49cc84u: goto label_49cc84;
        case 0x49cc88u: goto label_49cc88;
        case 0x49cc8cu: goto label_49cc8c;
        case 0x49cc90u: goto label_49cc90;
        case 0x49cc94u: goto label_49cc94;
        case 0x49cc98u: goto label_49cc98;
        case 0x49cc9cu: goto label_49cc9c;
        case 0x49cca0u: goto label_49cca0;
        case 0x49cca4u: goto label_49cca4;
        case 0x49cca8u: goto label_49cca8;
        case 0x49ccacu: goto label_49ccac;
        case 0x49ccb0u: goto label_49ccb0;
        case 0x49ccb4u: goto label_49ccb4;
        default: break;
    }

    ctx->pc = 0x49c9d8u;

label_49c9d8:
    // 0x49c9d8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x49c9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_49c9dc:
    // 0x49c9dc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x49c9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_49c9e0:
    // 0x49c9e0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x49c9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_49c9e4:
    // 0x49c9e4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x49c9e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_49c9e8:
    // 0x49c9e8: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x49c9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_49c9ec:
    // 0x49c9ec: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x49c9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_49c9f0:
    // 0x49c9f0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x49c9f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49c9f4:
    // 0x49c9f4: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x49c9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_49c9f8:
    // 0x49c9f8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x49c9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_49c9fc:
    // 0x49c9fc: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x49c9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_49ca00:
    // 0x49ca00: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x49ca00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_49ca04:
    // 0x49ca04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49ca04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_49ca08:
    // 0x49ca08: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x49ca08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_49ca0c:
    // 0x49ca0c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x49ca0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_49ca10:
    // 0x49ca10: 0x8cb4004c  lw          $s4, 0x4C($a1)
    ctx->pc = 0x49ca10u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_49ca14:
    // 0x49ca14: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x49ca14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_49ca18:
    // 0x49ca18: 0x26840004  addiu       $a0, $s4, 0x4
    ctx->pc = 0x49ca18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_49ca1c:
    // 0x49ca1c: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
label_49ca20:
    if (ctx->pc == 0x49CA20u) {
        ctx->pc = 0x49CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CA1Cu;
        // 0x49ca20: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CA24u;
        goto label_49ca24;
    }
    ctx->pc = 0x49CA1Cu;
    {
        const bool branch_taken_0x49ca1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x49CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CA1Cu;
        // 0x49ca20: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ca1c) {
            ctx->pc = 0x49CA3Cu;
            goto label_49ca3c;
        }
    }
    ctx->pc = 0x49CA24u;
label_49ca24:
    // 0x49ca24: 0x8c62ffec  lw          $v0, -0x14($v1)
    ctx->pc = 0x49ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967276)));
label_49ca28:
    // 0x49ca28: 0x10560023  beq         $v0, $s6, . + 4 + (0x23 << 2)
label_49ca2c:
    if (ctx->pc == 0x49CA2Cu) {
        ctx->pc = 0x49CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CA28u;
        // 0x49ca2c: 0x2472ffec  addiu       $s2, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CA30u;
        goto label_49ca30;
    }
    ctx->pc = 0x49CA28u;
    {
        const bool branch_taken_0x49ca28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x49CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CA28u;
        // 0x49ca2c: 0x2472ffec  addiu       $s2, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ca28) {
            ctx->pc = 0x49CAB8u;
            goto label_49cab8;
        }
    }
    ctx->pc = 0x49CA30u;
label_49ca30:
    // 0x49ca30: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x49ca30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_49ca34:
    // 0x49ca34: 0x5464fffc  bnel        $v1, $a0, . + 4 + (-0x4 << 2)
label_49ca38:
    if (ctx->pc == 0x49CA38u) {
        ctx->pc = 0x49CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CA34u;
        // 0x49ca38: 0x8c62ffec  lw          $v0, -0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CA3Cu;
        goto label_49ca3c;
    }
    ctx->pc = 0x49CA34u;
    {
        const bool branch_taken_0x49ca34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x49ca34) {
            ctx->pc = 0x49CA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49CA34u;
            // 0x49ca38: 0x8c62ffec  lw          $v0, -0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49CA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ca28;
        }
    }
    ctx->pc = 0x49CA3Cu;
label_49ca3c:
    // 0x49ca3c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x49ca3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_49ca40:
    // 0x49ca40: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x49ca40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_49ca44:
    // 0x49ca44: 0xc12732e  jal         func_49CCB8
label_49ca48:
    if (ctx->pc == 0x49CA48u) {
        ctx->pc = 0x49CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CA44u;
        // 0x49ca48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CA4Cu;
        goto label_49ca4c;
    }
    ctx->pc = 0x49CA44u;
    SET_GPR_U32(ctx, 31, 0x49CA4Cu);
    ctx->pc = 0x49CA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49CA44u;
    // 0x49ca48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49CCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49CCB8u, 0x49CA44u, 0x49CA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49CA4Cu;
label_49ca4c:
    // 0x49ca4c: 0x1040008e  beqz        $v0, . + 4 + (0x8E << 2)
label_49ca50:
    if (ctx->pc == 0x49CA50u) {
        ctx->pc = 0x49CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CA4Cu;
        // 0x49ca50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CA54u;
        goto label_49ca54;
    }
    ctx->pc = 0x49CA4Cu;
    {
        const bool branch_taken_0x49ca4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CA4Cu;
        // 0x49ca50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ca4c) {
            ctx->pc = 0x49CC88u;
            goto label_49cc88;
        }
    }
    ctx->pc = 0x49CA54u;
label_49ca54:
    // 0x49ca54: 0x96c20016  lhu         $v0, 0x16($s6)
    ctx->pc = 0x49ca54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 22)));
label_49ca58:
    // 0x49ca58: 0x96c30014  lhu         $v1, 0x14($s6)
    ctx->pc = 0x49ca58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 20)));
label_49ca5c:
    // 0x49ca5c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x49ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_49ca60:
    // 0x49ca60: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x49ca60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_49ca64:
    // 0x49ca64: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x49ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_49ca68:
    // 0x49ca68: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_49ca6c:
    if (ctx->pc == 0x49CA6Cu) {
        ctx->pc = 0x49CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CA68u;
        // 0x49ca6c: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CA70u;
        goto label_49ca70;
    }
    ctx->pc = 0x49CA68u;
    {
        const bool branch_taken_0x49ca68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CA68u;
        // 0x49ca6c: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ca68) {
            ctx->pc = 0x49CA8Cu;
            goto label_49ca8c;
        }
    }
    ctx->pc = 0x49CA70u;
label_49ca70:
    // 0x49ca70: 0x200f809  jalr        $s0
label_49ca74:
    if (ctx->pc == 0x49CA74u) {
        ctx->pc = 0x49CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CA70u;
        // 0x49ca74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CA78u;
        goto label_49ca78;
    }
    ctx->pc = 0x49CA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x49CA78u);
        ctx->pc = 0x49CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CA70u;
        // 0x49ca74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49CA70u, 0x49CA78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49CA78u;
label_49ca78:
    // 0x49ca78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x49ca78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49ca7c:
    // 0x49ca7c: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_49ca80:
    if (ctx->pc == 0x49CA80u) {
        ctx->pc = 0x49CA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CA7Cu;
        // 0x49ca80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CA84u;
        goto label_49ca84;
    }
    ctx->pc = 0x49CA7Cu;
    {
        const bool branch_taken_0x49ca7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CA7Cu;
        // 0x49ca80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ca7c) {
            ctx->pc = 0x49CAB0u;
            goto label_49cab0;
        }
    }
    ctx->pc = 0x49CA84u;
label_49ca84:
    // 0x49ca84: 0x10000008  b           . + 4 + (0x8 << 2)
label_49ca88:
    if (ctx->pc == 0x49CA88u) {
        ctx->pc = 0x49CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CA84u;
        // 0x49ca88: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CA8Cu;
        goto label_49ca8c;
    }
    ctx->pc = 0x49CA84u;
    {
        const bool branch_taken_0x49ca84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CA84u;
        // 0x49ca88: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ca84) {
            ctx->pc = 0x49CAA8u;
            goto label_49caa8;
        }
    }
    ctx->pc = 0x49CA8Cu;
label_49ca8c:
    // 0x49ca8c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x49ca8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_49ca90:
    // 0x49ca90: 0xc127ca4  jal         func_49F290
label_49ca94:
    if (ctx->pc == 0x49CA94u) {
        ctx->pc = 0x49CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CA90u;
        // 0x49ca94: 0x34a5080a  ori         $a1, $a1, 0x80A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2058);
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CA98u;
        goto label_49ca98;
    }
    ctx->pc = 0x49CA90u;
    SET_GPR_U32(ctx, 31, 0x49CA98u);
    ctx->pc = 0x49CA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49CA90u;
    // 0x49ca94: 0x34a5080a  ori         $a1, $a1, 0x80A (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2058);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x49CA90u, 0x49CA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49CA98u;
label_49ca98:
    // 0x49ca98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x49ca98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49ca9c:
    // 0x49ca9c: 0x1240007a  beqz        $s2, . + 4 + (0x7A << 2)
label_49caa0:
    if (ctx->pc == 0x49CAA0u) {
        ctx->pc = 0x49CAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CA9Cu;
        // 0x49caa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CAA4u;
        goto label_49caa4;
    }
    ctx->pc = 0x49CA9Cu;
    {
        const bool branch_taken_0x49ca9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CA9Cu;
        // 0x49caa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ca9c) {
            ctx->pc = 0x49CC88u;
            goto label_49cc88;
        }
    }
    ctx->pc = 0x49CAA4u;
label_49caa4:
    // 0x49caa4: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x49caa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_49caa8:
    // 0x49caa8: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
label_49caac:
    if (ctx->pc == 0x49CAACu) {
        ctx->pc = 0x49CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CAA8u;
        // 0x49caac: 0x2642001c  addiu       $v0, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CAB0u;
        goto label_49cab0;
    }
    ctx->pc = 0x49CAA8u;
    {
        const bool branch_taken_0x49caa8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x49CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CAA8u;
        // 0x49caac: 0x2642001c  addiu       $v0, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49caa8) {
            ctx->pc = 0x49CACCu;
            goto label_49cacc;
        }
    }
    ctx->pc = 0x49CAB0u;
label_49cab0:
    // 0x49cab0: 0x10000075  b           . + 4 + (0x75 << 2)
label_49cab4:
    if (ctx->pc == 0x49CAB4u) {
        ctx->pc = 0x49CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CAB0u;
        // 0x49cab4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CAB8u;
        goto label_49cab8;
    }
    ctx->pc = 0x49CAB0u;
    {
        const bool branch_taken_0x49cab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CAB0u;
        // 0x49cab4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cab0) {
            ctx->pc = 0x49CC88u;
            goto label_49cc88;
        }
    }
    ctx->pc = 0x49CAB8u;
label_49cab8:
    // 0x49cab8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x49cab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_49cabc:
    // 0x49cabc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49cabcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49cac0:
    // 0x49cac0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x49cac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_49cac4:
    // 0x49cac4: 0x10000070  b           . + 4 + (0x70 << 2)
label_49cac8:
    if (ctx->pc == 0x49CAC8u) {
        ctx->pc = 0x49CAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CAC4u;
        // 0x49cac8: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CACCu;
        goto label_49cacc;
    }
    ctx->pc = 0x49CAC4u;
    {
        const bool branch_taken_0x49cac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CAC4u;
        // 0x49cac8: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cac4) {
            ctx->pc = 0x49CC88u;
            goto label_49cc88;
        }
    }
    ctx->pc = 0x49CACCu;
label_49cacc:
    // 0x49cacc: 0x26830004  addiu       $v1, $s4, 0x4
    ctx->pc = 0x49caccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_49cad0:
    // 0x49cad0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x49cad0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_49cad4:
    // 0x49cad4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x49cad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49cad8:
    // 0x49cad8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x49cad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_49cadc:
    // 0x49cadc: 0x26430014  addiu       $v1, $s2, 0x14
    ctx->pc = 0x49cadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_49cae0:
    // 0x49cae0: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x49cae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_49cae4:
    // 0x49cae4: 0x96c30014  lhu         $v1, 0x14($s6)
    ctx->pc = 0x49cae4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 20)));
label_49cae8:
    // 0x49cae8: 0xae560000  sw          $s6, 0x0($s2)
    ctx->pc = 0x49cae8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 22));
label_49caec:
    // 0x49caec: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x49caecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_49caf0:
    // 0x49caf0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x49caf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_49caf4:
    // 0x49caf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_49caf8:
    // 0x49caf8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x49caf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_49cafc:
    // 0x49cafc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x49cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_49cb00:
    // 0x49cb00: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x49cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_49cb04:
    // 0x49cb04: 0x96c20014  lhu         $v0, 0x14($s6)
    ctx->pc = 0x49cb04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 20)));
label_49cb08:
    // 0x49cb08: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x49cb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_49cb0c:
    // 0x49cb0c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_49cb10:
    if (ctx->pc == 0x49CB10u) {
        ctx->pc = 0x49CB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CB0Cu;
        // 0x49cb10: 0x9475000c  lhu         $s5, 0xC($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CB14u;
        goto label_49cb14;
    }
    ctx->pc = 0x49CB0Cu;
    {
        const bool branch_taken_0x49cb0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CB0Cu;
        // 0x49cb10: 0x9475000c  lhu         $s5, 0xC($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cb0c) {
            ctx->pc = 0x49CBACu;
            goto label_49cbac;
        }
    }
    ctx->pc = 0x49CB14u;
label_49cb14:
    // 0x49cb14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x49cb14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49cb18:
    // 0x49cb18: 0x12a0001f  beqz        $s5, . + 4 + (0x1F << 2)
label_49cb1c:
    if (ctx->pc == 0x49CB1Cu) {
        ctx->pc = 0x49CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CB18u;
        // 0x49cb1c: 0x24970001  addiu       $s7, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CB20u;
        goto label_49cb20;
    }
    ctx->pc = 0x49CB18u;
    {
        const bool branch_taken_0x49cb18 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CB18u;
        // 0x49cb1c: 0x24970001  addiu       $s7, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cb18) {
            ctx->pc = 0x49CB98u;
            goto label_49cb98;
        }
    }
    ctx->pc = 0x49CB20u;
label_49cb20:
    // 0x49cb20: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x49cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_49cb24:
    // 0x49cb24: 0x498c0  sll         $s3, $a0, 3
    ctx->pc = 0x49cb24u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_49cb28:
    // 0x49cb28: 0x83f018  mult        $fp, $a0, $v1
    ctx->pc = 0x49cb28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_49cb2c:
    // 0x49cb2c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x49cb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_49cb30:
    // 0x49cb30: 0x2068818  mult        $s1, $s0, $a2
    ctx->pc = 0x49cb30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_49cb34:
    // 0x49cb34: 0x0  nop
    ctx->pc = 0x49cb34u;
    // NOP
label_49cb38:
    // 0x49cb38: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x49cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_49cb3c:
    // 0x49cb3c: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x49cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_49cb40:
    // 0x49cb40: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x49cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_49cb44:
    // 0x49cb44: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x49cb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_49cb48:
    // 0x49cb48: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x49cb48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49cb4c:
    // 0x49cb4c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x49cb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_49cb50:
    // 0x49cb50: 0xc12a3ec  jal         func_4A8FB0
label_49cb54:
    if (ctx->pc == 0x49CB54u) {
        ctx->pc = 0x49CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CB50u;
        // 0x49cb54: 0x7fa60010  sq          $a2, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CB58u;
        goto label_49cb58;
    }
    ctx->pc = 0x49CB50u;
    SET_GPR_U32(ctx, 31, 0x49CB58u);
    ctx->pc = 0x49CB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49CB50u;
    // 0x49cb54: 0x7fa60010  sq          $a2, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x49CB50u, 0x49CB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49CB58u;
label_49cb58:
    // 0x49cb58: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_49cb5c:
    if (ctx->pc == 0x49CB5Cu) {
        ctx->pc = 0x49CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CB58u;
        // 0x49cb5c: 0x7ba60010  lq          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CB60u;
        goto label_49cb60;
    }
    ctx->pc = 0x49CB58u;
    {
        const bool branch_taken_0x49cb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CB58u;
        // 0x49cb5c: 0x7ba60010  lq          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cb58) {
            ctx->pc = 0x49CB84u;
            goto label_49cb84;
        }
    }
    ctx->pc = 0x49CB60u;
label_49cb60:
    // 0x49cb60: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x49cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_49cb64:
    // 0x49cb64: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x49cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_49cb68:
    // 0x49cb68: 0xa4500004  sh          $s0, 0x4($v0)
    ctx->pc = 0x49cb68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 16));
label_49cb6c:
    // 0x49cb6c: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x49cb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_49cb70:
    // 0x49cb70: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x49cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_49cb74:
    // 0x49cb74: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x49cb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_49cb78:
    // 0x49cb78: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x49cb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_49cb7c:
    // 0x49cb7c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x49cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_49cb80:
    // 0x49cb80: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x49cb80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_49cb84:
    // 0x49cb84: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x49cb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_49cb88:
    // 0x49cb88: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x49cb88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_49cb8c:
    // 0x49cb8c: 0x215182b  sltu        $v1, $s0, $s5
    ctx->pc = 0x49cb8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_49cb90:
    // 0x49cb90: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_49cb94:
    if (ctx->pc == 0x49CB94u) {
        ctx->pc = 0x49CB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CB90u;
        // 0x49cb94: 0x2068818  mult        $s1, $s0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CB98u;
        goto label_49cb98;
    }
    ctx->pc = 0x49CB90u;
    {
        const bool branch_taken_0x49cb90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49CB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CB90u;
        // 0x49cb94: 0x2068818  mult        $s1, $s0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cb90) {
            ctx->pc = 0x49CB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49cb38;
        }
    }
    ctx->pc = 0x49CB98u;
label_49cb98:
    // 0x49cb98: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x49cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_49cb9c:
    // 0x49cb9c: 0x32e4ffff  andi        $a0, $s7, 0xFFFF
    ctx->pc = 0x49cb9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
label_49cba0:
    // 0x49cba0: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x49cba0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_49cba4:
    // 0x49cba4: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_49cba8:
    if (ctx->pc == 0x49CBA8u) {
        ctx->pc = 0x49CBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CBA4u;
        // 0x49cba8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CBACu;
        goto label_49cbac;
    }
    ctx->pc = 0x49CBA4u;
    {
        const bool branch_taken_0x49cba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49CBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CBA4u;
        // 0x49cba8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cba4) {
            ctx->pc = 0x49CB18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49cb18;
        }
    }
    ctx->pc = 0x49CBACu;
label_49cbac:
    // 0x49cbac: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x49cbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_49cbb0:
    // 0x49cbb0: 0x96c30016  lhu         $v1, 0x16($s6)
    ctx->pc = 0x49cbb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 22)));
label_49cbb4:
    // 0x49cbb4: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x49cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_49cbb8:
    // 0x49cbb8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x49cbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_49cbbc:
    // 0x49cbbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x49cbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49cbc0:
    // 0x49cbc0: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_49cbc4:
    if (ctx->pc == 0x49CBC4u) {
        ctx->pc = 0x49CBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CBC0u;
        // 0x49cbc4: 0x9455000e  lhu         $s5, 0xE($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CBC8u;
        goto label_49cbc8;
    }
    ctx->pc = 0x49CBC0u;
    {
        const bool branch_taken_0x49cbc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CBC0u;
        // 0x49cbc4: 0x9455000e  lhu         $s5, 0xE($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cbc0) {
            ctx->pc = 0x49CC64u;
            goto label_49cc64;
        }
    }
    ctx->pc = 0x49CBC8u;
label_49cbc8:
    // 0x49cbc8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x49cbc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49cbcc:
    // 0x49cbcc: 0x0  nop
    ctx->pc = 0x49cbccu;
    // NOP
label_49cbd0:
    // 0x49cbd0: 0x12a0001f  beqz        $s5, . + 4 + (0x1F << 2)
label_49cbd4:
    if (ctx->pc == 0x49CBD4u) {
        ctx->pc = 0x49CBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CBD0u;
        // 0x49cbd4: 0x24970001  addiu       $s7, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CBD8u;
        goto label_49cbd8;
    }
    ctx->pc = 0x49CBD0u;
    {
        const bool branch_taken_0x49cbd0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CBD0u;
        // 0x49cbd4: 0x24970001  addiu       $s7, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cbd0) {
            ctx->pc = 0x49CC50u;
            goto label_49cc50;
        }
    }
    ctx->pc = 0x49CBD8u;
label_49cbd8:
    // 0x49cbd8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x49cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_49cbdc:
    // 0x49cbdc: 0x498c0  sll         $s3, $a0, 3
    ctx->pc = 0x49cbdcu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_49cbe0:
    // 0x49cbe0: 0x82f018  mult        $fp, $a0, $v0
    ctx->pc = 0x49cbe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_49cbe4:
    // 0x49cbe4: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x49cbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_49cbe8:
    // 0x49cbe8: 0x2068818  mult        $s1, $s0, $a2
    ctx->pc = 0x49cbe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_49cbec:
    // 0x49cbec: 0x0  nop
    ctx->pc = 0x49cbecu;
    // NOP
label_49cbf0:
    // 0x49cbf0: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x49cbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_49cbf4:
    // 0x49cbf4: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x49cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_49cbf8:
    // 0x49cbf8: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x49cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_49cbfc:
    // 0x49cbfc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x49cbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_49cc00:
    // 0x49cc00: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x49cc00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49cc04:
    // 0x49cc04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x49cc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_49cc08:
    // 0x49cc08: 0xc12a3ec  jal         func_4A8FB0
label_49cc0c:
    if (ctx->pc == 0x49CC0Cu) {
        ctx->pc = 0x49CC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CC08u;
        // 0x49cc0c: 0x7fa60010  sq          $a2, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CC10u;
        goto label_49cc10;
    }
    ctx->pc = 0x49CC08u;
    SET_GPR_U32(ctx, 31, 0x49CC10u);
    ctx->pc = 0x49CC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49CC08u;
    // 0x49cc0c: 0x7fa60010  sq          $a2, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x49CC08u, 0x49CC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49CC10u;
label_49cc10:
    // 0x49cc10: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_49cc14:
    if (ctx->pc == 0x49CC14u) {
        ctx->pc = 0x49CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CC10u;
        // 0x49cc14: 0x7ba60010  lq          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CC18u;
        goto label_49cc18;
    }
    ctx->pc = 0x49CC10u;
    {
        const bool branch_taken_0x49cc10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CC10u;
        // 0x49cc14: 0x7ba60010  lq          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cc10) {
            ctx->pc = 0x49CC3Cu;
            goto label_49cc3c;
        }
    }
    ctx->pc = 0x49CC18u;
label_49cc18:
    // 0x49cc18: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x49cc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_49cc1c:
    // 0x49cc1c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x49cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_49cc20:
    // 0x49cc20: 0xa4500004  sh          $s0, 0x4($v0)
    ctx->pc = 0x49cc20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 16));
label_49cc24:
    // 0x49cc24: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x49cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_49cc28:
    // 0x49cc28: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x49cc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_49cc2c:
    // 0x49cc2c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x49cc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_49cc30:
    // 0x49cc30: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x49cc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_49cc34:
    // 0x49cc34: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x49cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_49cc38:
    // 0x49cc38: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x49cc38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_49cc3c:
    // 0x49cc3c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x49cc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_49cc40:
    // 0x49cc40: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x49cc40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_49cc44:
    // 0x49cc44: 0x215182b  sltu        $v1, $s0, $s5
    ctx->pc = 0x49cc44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_49cc48:
    // 0x49cc48: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_49cc4c:
    if (ctx->pc == 0x49CC4Cu) {
        ctx->pc = 0x49CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CC48u;
        // 0x49cc4c: 0x2068818  mult        $s1, $s0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CC50u;
        goto label_49cc50;
    }
    ctx->pc = 0x49CC48u;
    {
        const bool branch_taken_0x49cc48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CC48u;
        // 0x49cc4c: 0x2068818  mult        $s1, $s0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cc48) {
            ctx->pc = 0x49CBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49cbf0;
        }
    }
    ctx->pc = 0x49CC50u;
label_49cc50:
    // 0x49cc50: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x49cc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_49cc54:
    // 0x49cc54: 0x32e4ffff  andi        $a0, $s7, 0xFFFF
    ctx->pc = 0x49cc54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
label_49cc58:
    // 0x49cc58: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x49cc58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_49cc5c:
    // 0x49cc5c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_49cc60:
    if (ctx->pc == 0x49CC60u) {
        ctx->pc = 0x49CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CC5Cu;
        // 0x49cc60: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CC64u;
        goto label_49cc64;
    }
    ctx->pc = 0x49CC5Cu;
    {
        const bool branch_taken_0x49cc5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CC5Cu;
        // 0x49cc60: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cc5c) {
            ctx->pc = 0x49CBD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49cbd0;
        }
    }
    ctx->pc = 0x49CC64u;
label_49cc64:
    // 0x49cc64: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x49cc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_49cc68:
    // 0x49cc68: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49cc68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49cc6c:
    // 0x49cc6c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x49cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_49cc70:
    // 0x49cc70: 0xae440014  sw          $a0, 0x14($s2)
    ctx->pc = 0x49cc70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 4));
label_49cc74:
    // 0x49cc74: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x49cc74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
label_49cc78:
    // 0x49cc78: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x49cc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_49cc7c:
    // 0x49cc7c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x49cc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_49cc80:
    // 0x49cc80: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x49cc80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_49cc84:
    // 0x49cc84: 0xae840004  sw          $a0, 0x4($s4)
    ctx->pc = 0x49cc84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 4));
label_49cc88:
    // 0x49cc88: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x49cc88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_49cc8c:
    // 0x49cc8c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x49cc8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_49cc90:
    // 0x49cc90: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x49cc90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_49cc94:
    // 0x49cc94: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x49cc94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_49cc98:
    // 0x49cc98: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x49cc98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_49cc9c:
    // 0x49cc9c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x49cc9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_49cca0:
    // 0x49cca0: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x49cca0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_49cca4:
    // 0x49cca4: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x49cca4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49cca8:
    // 0x49cca8: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x49cca8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49ccac:
    // 0x49ccac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49ccacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_49ccb0:
    // 0x49ccb0: 0x3e00008  jr          $ra
label_49ccb4:
    if (ctx->pc == 0x49CCB4u) {
        ctx->pc = 0x49CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CCB0u;
        // 0x49ccb4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CCB8u;
        goto label_fallthrough_0x49ccb0;
    }
    ctx->pc = 0x49CCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CCB0u;
        // 0x49ccb4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49CCB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x49ccb0:
    ctx->pc = 0x49CCB8u;
}
