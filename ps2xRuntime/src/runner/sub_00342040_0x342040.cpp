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

// Function: sub_00342040
// Address: 0x342040 - 0x342210
void sub_00342040_0x342040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342040_0x342040");
#endif

    switch (ctx->pc) {
        case 0x342040u: goto label_342040;
        case 0x342044u: goto label_342044;
        case 0x342048u: goto label_342048;
        case 0x34204cu: goto label_34204c;
        case 0x342050u: goto label_342050;
        case 0x342054u: goto label_342054;
        case 0x342058u: goto label_342058;
        case 0x34205cu: goto label_34205c;
        case 0x342060u: goto label_342060;
        case 0x342064u: goto label_342064;
        case 0x342068u: goto label_342068;
        case 0x34206cu: goto label_34206c;
        case 0x342070u: goto label_342070;
        case 0x342074u: goto label_342074;
        case 0x342078u: goto label_342078;
        case 0x34207cu: goto label_34207c;
        case 0x342080u: goto label_342080;
        case 0x342084u: goto label_342084;
        case 0x342088u: goto label_342088;
        case 0x34208cu: goto label_34208c;
        case 0x342090u: goto label_342090;
        case 0x342094u: goto label_342094;
        case 0x342098u: goto label_342098;
        case 0x34209cu: goto label_34209c;
        case 0x3420a0u: goto label_3420a0;
        case 0x3420a4u: goto label_3420a4;
        case 0x3420a8u: goto label_3420a8;
        case 0x3420acu: goto label_3420ac;
        case 0x3420b0u: goto label_3420b0;
        case 0x3420b4u: goto label_3420b4;
        case 0x3420b8u: goto label_3420b8;
        case 0x3420bcu: goto label_3420bc;
        case 0x3420c0u: goto label_3420c0;
        case 0x3420c4u: goto label_3420c4;
        case 0x3420c8u: goto label_3420c8;
        case 0x3420ccu: goto label_3420cc;
        case 0x3420d0u: goto label_3420d0;
        case 0x3420d4u: goto label_3420d4;
        case 0x3420d8u: goto label_3420d8;
        case 0x3420dcu: goto label_3420dc;
        case 0x3420e0u: goto label_3420e0;
        case 0x3420e4u: goto label_3420e4;
        case 0x3420e8u: goto label_3420e8;
        case 0x3420ecu: goto label_3420ec;
        case 0x3420f0u: goto label_3420f0;
        case 0x3420f4u: goto label_3420f4;
        case 0x3420f8u: goto label_3420f8;
        case 0x3420fcu: goto label_3420fc;
        case 0x342100u: goto label_342100;
        case 0x342104u: goto label_342104;
        case 0x342108u: goto label_342108;
        case 0x34210cu: goto label_34210c;
        case 0x342110u: goto label_342110;
        case 0x342114u: goto label_342114;
        case 0x342118u: goto label_342118;
        case 0x34211cu: goto label_34211c;
        case 0x342120u: goto label_342120;
        case 0x342124u: goto label_342124;
        case 0x342128u: goto label_342128;
        case 0x34212cu: goto label_34212c;
        case 0x342130u: goto label_342130;
        case 0x342134u: goto label_342134;
        case 0x342138u: goto label_342138;
        case 0x34213cu: goto label_34213c;
        case 0x342140u: goto label_342140;
        case 0x342144u: goto label_342144;
        case 0x342148u: goto label_342148;
        case 0x34214cu: goto label_34214c;
        case 0x342150u: goto label_342150;
        case 0x342154u: goto label_342154;
        case 0x342158u: goto label_342158;
        case 0x34215cu: goto label_34215c;
        case 0x342160u: goto label_342160;
        case 0x342164u: goto label_342164;
        case 0x342168u: goto label_342168;
        case 0x34216cu: goto label_34216c;
        case 0x342170u: goto label_342170;
        case 0x342174u: goto label_342174;
        case 0x342178u: goto label_342178;
        case 0x34217cu: goto label_34217c;
        case 0x342180u: goto label_342180;
        case 0x342184u: goto label_342184;
        case 0x342188u: goto label_342188;
        case 0x34218cu: goto label_34218c;
        case 0x342190u: goto label_342190;
        case 0x342194u: goto label_342194;
        case 0x342198u: goto label_342198;
        case 0x34219cu: goto label_34219c;
        case 0x3421a0u: goto label_3421a0;
        case 0x3421a4u: goto label_3421a4;
        case 0x3421a8u: goto label_3421a8;
        case 0x3421acu: goto label_3421ac;
        case 0x3421b0u: goto label_3421b0;
        case 0x3421b4u: goto label_3421b4;
        case 0x3421b8u: goto label_3421b8;
        case 0x3421bcu: goto label_3421bc;
        case 0x3421c0u: goto label_3421c0;
        case 0x3421c4u: goto label_3421c4;
        case 0x3421c8u: goto label_3421c8;
        case 0x3421ccu: goto label_3421cc;
        case 0x3421d0u: goto label_3421d0;
        case 0x3421d4u: goto label_3421d4;
        case 0x3421d8u: goto label_3421d8;
        case 0x3421dcu: goto label_3421dc;
        case 0x3421e0u: goto label_3421e0;
        case 0x3421e4u: goto label_3421e4;
        case 0x3421e8u: goto label_3421e8;
        case 0x3421ecu: goto label_3421ec;
        case 0x3421f0u: goto label_3421f0;
        case 0x3421f4u: goto label_3421f4;
        case 0x3421f8u: goto label_3421f8;
        case 0x3421fcu: goto label_3421fc;
        case 0x342200u: goto label_342200;
        case 0x342204u: goto label_342204;
        case 0x342208u: goto label_342208;
        case 0x34220cu: goto label_34220c;
        default: break;
    }

    ctx->pc = 0x342040u;

label_342040:
    // 0x342040: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x342040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_342044:
    // 0x342044: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x342044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_342048:
    // 0x342048: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x342048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_34204c:
    // 0x34204c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x34204cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_342050:
    // 0x342050: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x342050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_342054:
    // 0x342054: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x342054u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_342058:
    // 0x342058: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x342058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_34205c:
    // 0x34205c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x34205cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_342060:
    // 0x342060: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x342060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_342064:
    // 0x342064: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x342064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_342068:
    // 0x342068: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x342068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_34206c:
    // 0x34206c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x34206cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_342070:
    // 0x342070: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x342070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_342074:
    // 0x342074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_342078:
    // 0x342078: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x342078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_34207c:
    // 0x34207c: 0x8e54000c  lw          $s4, 0xC($s2)
    ctx->pc = 0x34207cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_342080:
    // 0x342080: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x342080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_342084:
    // 0x342084: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_342088:
    if (ctx->pc == 0x342088u) {
        ctx->pc = 0x342088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342084u;
        // 0x342088: 0x8e570018  lw          $s7, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34208Cu;
        goto label_34208c;
    }
    ctx->pc = 0x342084u;
    {
        const bool branch_taken_0x342084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342084u;
        // 0x342088: 0x8e570018  lw          $s7, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342084) {
            ctx->pc = 0x3421DCu;
            goto label_3421dc;
        }
    }
    ctx->pc = 0x34208Cu;
label_34208c:
    // 0x34208c: 0xc0d0988  jal         func_342620
label_342090:
    if (ctx->pc == 0x342090u) {
        ctx->pc = 0x342090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34208Cu;
        // 0x342090: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342094u;
        goto label_342094;
    }
    ctx->pc = 0x34208Cu;
    SET_GPR_U32(ctx, 31, 0x342094u);
    ctx->pc = 0x342090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34208Cu;
    // 0x342090: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342620u, 0x34208Cu, 0x342094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342094u;
label_342094:
    // 0x342094: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x342094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_342098:
    // 0x342098: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x342098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_34209c:
    // 0x34209c: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3420a0:
    if (ctx->pc == 0x3420A0u) {
        ctx->pc = 0x3420A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34209Cu;
        // 0x3420a0: 0x8e430020  lw          $v1, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3420A4u;
        goto label_3420a4;
    }
    ctx->pc = 0x34209Cu;
    {
        const bool branch_taken_0x34209c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34209c) {
            ctx->pc = 0x3420A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34209Cu;
            // 0x3420a0: 0x8e430020  lw          $v1, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3420F8u;
            goto label_3420f8;
        }
    }
    ctx->pc = 0x3420A4u;
label_3420a4:
    // 0x3420a4: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3420a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3420a8:
    // 0x3420a8: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_3420ac:
    if (ctx->pc == 0x3420ACu) {
        ctx->pc = 0x3420ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3420A8u;
        // 0x3420ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3420B0u;
        goto label_3420b0;
    }
    ctx->pc = 0x3420A8u;
    {
        const bool branch_taken_0x3420a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3420ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3420A8u;
        // 0x3420ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3420a8) {
            ctx->pc = 0x3420F4u;
            goto label_3420f4;
        }
    }
    ctx->pc = 0x3420B0u;
label_3420b0:
    // 0x3420b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3420b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3420b4:
    // 0x3420b4: 0x0  nop
    ctx->pc = 0x3420b4u;
    // NOP
label_3420b8:
    // 0x3420b8: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x3420b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_3420bc:
    // 0x3420bc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3420bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3420c0:
    // 0x3420c0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3420c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3420c4:
    // 0x3420c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3420c8:
    if (ctx->pc == 0x3420C8u) {
        ctx->pc = 0x3420C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3420C4u;
        // 0x3420c8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3420CCu;
        goto label_3420cc;
    }
    ctx->pc = 0x3420C4u;
    {
        const bool branch_taken_0x3420c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3420C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3420C4u;
        // 0x3420c8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3420c4) {
            ctx->pc = 0x3420E0u;
            goto label_3420e0;
        }
    }
    ctx->pc = 0x3420CCu;
label_3420cc:
    // 0x3420cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3420ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3420d0:
    // 0x3420d0: 0x40f809  jalr        $v0
label_3420d4:
    if (ctx->pc == 0x3420D4u) {
        ctx->pc = 0x3420D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3420D0u;
        // 0x3420d4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3420D8u;
        goto label_3420d8;
    }
    ctx->pc = 0x3420D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3420D8u);
        ctx->pc = 0x3420D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3420D0u;
        // 0x3420d4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3420D0u, 0x3420D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3420D8u;
label_3420d8:
    // 0x3420d8: 0x14520041  bne         $v0, $s2, . + 4 + (0x41 << 2)
label_3420dc:
    if (ctx->pc == 0x3420DCu) {
        ctx->pc = 0x3420DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3420D8u;
        // 0x3420dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3420E0u;
        goto label_3420e0;
    }
    ctx->pc = 0x3420D8u;
    {
        const bool branch_taken_0x3420d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x3420DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3420D8u;
        // 0x3420dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3420d8) {
            ctx->pc = 0x3421E0u;
            goto label_3421e0;
        }
    }
    ctx->pc = 0x3420E0u;
label_3420e0:
    // 0x3420e0: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3420e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3420e4:
    // 0x3420e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3420e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3420e8:
    // 0x3420e8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3420e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3420ec:
    // 0x3420ec: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_3420f0:
    if (ctx->pc == 0x3420F0u) {
        ctx->pc = 0x3420F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3420ECu;
        // 0x3420f0: 0x2631002c  addiu       $s1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3420F4u;
        goto label_3420f4;
    }
    ctx->pc = 0x3420ECu;
    {
        const bool branch_taken_0x3420ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3420F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3420ECu;
        // 0x3420f0: 0x2631002c  addiu       $s1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3420ec) {
            ctx->pc = 0x3420B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3420b8;
        }
    }
    ctx->pc = 0x3420F4u;
label_3420f4:
    // 0x3420f4: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x3420f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3420f8:
    // 0x3420f8: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_3420fc:
    if (ctx->pc == 0x3420FCu) {
        ctx->pc = 0x3420FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3420F8u;
        // 0x3420fc: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342100u;
        goto label_342100;
    }
    ctx->pc = 0x3420F8u;
    {
        const bool branch_taken_0x3420f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3420FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3420F8u;
        // 0x3420fc: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3420f8) {
            ctx->pc = 0x342180u;
            goto label_342180;
        }
    }
    ctx->pc = 0x342100u;
label_342100:
    // 0x342100: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x342100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_342104:
    // 0x342104: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_342108:
    if (ctx->pc == 0x342108u) {
        ctx->pc = 0x342108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342104u;
        // 0x342108: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34210Cu;
        goto label_34210c;
    }
    ctx->pc = 0x342104u;
    {
        const bool branch_taken_0x342104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x342104) {
            ctx->pc = 0x342108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342104u;
            // 0x342108: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342180u;
            goto label_342180;
        }
    }
    ctx->pc = 0x34210Cu;
label_34210c:
    // 0x34210c: 0x8c750000  lw          $s5, 0x0($v1)
    ctx->pc = 0x34210cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_342110:
    // 0x342110: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x342110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_342114:
    // 0x342114: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x342114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_342118:
    // 0x342118: 0x18600015  blez        $v1, . + 4 + (0x15 << 2)
label_34211c:
    if (ctx->pc == 0x34211Cu) {
        ctx->pc = 0x34211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342118u;
        // 0x34211c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342120u;
        goto label_342120;
    }
    ctx->pc = 0x342118u;
    {
        const bool branch_taken_0x342118 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x34211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342118u;
        // 0x34211c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342118) {
            ctx->pc = 0x342170u;
            goto label_342170;
        }
    }
    ctx->pc = 0x342120u;
label_342120:
    // 0x342120: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x342120u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342124:
    // 0x342124: 0x0  nop
    ctx->pc = 0x342124u;
    // NOP
label_342128:
    // 0x342128: 0x8ee20018  lw          $v0, 0x18($s7)
    ctx->pc = 0x342128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
label_34212c:
    // 0x34212c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x34212cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_342130:
    // 0x342130: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x342130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_342134:
    // 0x342134: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_342138:
    if (ctx->pc == 0x342138u) {
        ctx->pc = 0x342138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342134u;
        // 0x342138: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34213Cu;
        goto label_34213c;
    }
    ctx->pc = 0x342134u;
    {
        const bool branch_taken_0x342134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342134u;
        // 0x342138: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342134) {
            ctx->pc = 0x342158u;
            goto label_342158;
        }
    }
    ctx->pc = 0x34213Cu;
label_34213c:
    // 0x34213c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34213cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_342140:
    // 0x342140: 0x40f809  jalr        $v0
label_342144:
    if (ctx->pc == 0x342144u) {
        ctx->pc = 0x342144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342140u;
        // 0x342144: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342148u;
        goto label_342148;
    }
    ctx->pc = 0x342140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x342148u);
        ctx->pc = 0x342144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342140u;
        // 0x342144: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342140u, 0x342148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342148u;
label_342148:
    // 0x342148: 0x50510004  beql        $v0, $s1, . + 4 + (0x4 << 2)
label_34214c:
    if (ctx->pc == 0x34214Cu) {
        ctx->pc = 0x34214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342148u;
        // 0x34214c: 0x8e820014  lw          $v0, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342150u;
        goto label_342150;
    }
    ctx->pc = 0x342148u;
    {
        const bool branch_taken_0x342148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x342148) {
            ctx->pc = 0x34214Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342148u;
            // 0x34214c: 0x8e820014  lw          $v0, 0x14($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34215Cu;
            goto label_34215c;
        }
    }
    ctx->pc = 0x342150u;
label_342150:
    // 0x342150: 0x10000023  b           . + 4 + (0x23 << 2)
label_342154:
    if (ctx->pc == 0x342154u) {
        ctx->pc = 0x342154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342150u;
        // 0x342154: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342158u;
        goto label_342158;
    }
    ctx->pc = 0x342150u;
    {
        const bool branch_taken_0x342150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342150u;
        // 0x342154: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342150) {
            ctx->pc = 0x3421E0u;
            goto label_3421e0;
        }
    }
    ctx->pc = 0x342158u;
label_342158:
    // 0x342158: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x342158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_34215c:
    // 0x34215c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x34215cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_342160:
    // 0x342160: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x342160u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_342164:
    // 0x342164: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x342164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_342168:
    // 0x342168: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_34216c:
    if (ctx->pc == 0x34216Cu) {
        ctx->pc = 0x34216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342168u;
        // 0x34216c: 0x2673001c  addiu       $s3, $s3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342170u;
        goto label_342170;
    }
    ctx->pc = 0x342168u;
    {
        const bool branch_taken_0x342168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342168u;
        // 0x34216c: 0x2673001c  addiu       $s3, $s3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342168) {
            ctx->pc = 0x342128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342128;
        }
    }
    ctx->pc = 0x342170u;
label_342170:
    // 0x342170: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x342170u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_342174:
    // 0x342174: 0x1635ffe8  bne         $s1, $s5, . + 4 + (-0x18 << 2)
label_342178:
    if (ctx->pc == 0x342178u) {
        ctx->pc = 0x34217Cu;
        goto label_34217c;
    }
    ctx->pc = 0x342174u;
    {
        const bool branch_taken_0x342174 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        if (branch_taken_0x342174) {
            ctx->pc = 0x342118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342118;
        }
    }
    ctx->pc = 0x34217Cu;
label_34217c:
    // 0x34217c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x34217cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_342180:
    // 0x342180: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x342180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_342184:
    // 0x342184: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_342188:
    if (ctx->pc == 0x342188u) {
        ctx->pc = 0x342188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342184u;
        // 0x342188: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34218Cu;
        goto label_34218c;
    }
    ctx->pc = 0x342184u;
    {
        const bool branch_taken_0x342184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342184u;
        // 0x342188: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342184) {
            ctx->pc = 0x3421E0u;
            goto label_3421e0;
        }
    }
    ctx->pc = 0x34218Cu;
label_34218c:
    // 0x34218c: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x34218cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_342190:
    // 0x342190: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_342194:
    if (ctx->pc == 0x342194u) {
        ctx->pc = 0x342194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342190u;
        // 0x342194: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342198u;
        goto label_342198;
    }
    ctx->pc = 0x342190u;
    {
        const bool branch_taken_0x342190 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x342194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342190u;
        // 0x342194: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342190) {
            ctx->pc = 0x3421DCu;
            goto label_3421dc;
        }
    }
    ctx->pc = 0x342198u;
label_342198:
    // 0x342198: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x342198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34219c:
    // 0x34219c: 0x0  nop
    ctx->pc = 0x34219cu;
    // NOP
label_3421a0:
    // 0x3421a0: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x3421a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_3421a4:
    // 0x3421a4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3421a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3421a8:
    // 0x3421a8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3421a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3421ac:
    // 0x3421ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3421b0:
    if (ctx->pc == 0x3421B0u) {
        ctx->pc = 0x3421B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3421ACu;
        // 0x3421b0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3421B4u;
        goto label_3421b4;
    }
    ctx->pc = 0x3421ACu;
    {
        const bool branch_taken_0x3421ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3421B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3421ACu;
        // 0x3421b0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3421ac) {
            ctx->pc = 0x3421C8u;
            goto label_3421c8;
        }
    }
    ctx->pc = 0x3421B4u;
label_3421b4:
    // 0x3421b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3421b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3421b8:
    // 0x3421b8: 0x40f809  jalr        $v0
label_3421bc:
    if (ctx->pc == 0x3421BCu) {
        ctx->pc = 0x3421BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3421B8u;
        // 0x3421bc: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3421C0u;
        goto label_3421c0;
    }
    ctx->pc = 0x3421B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3421C0u);
        ctx->pc = 0x3421BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3421B8u;
        // 0x3421bc: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3421B8u, 0x3421C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3421C0u;
label_3421c0:
    // 0x3421c0: 0x14520007  bne         $v0, $s2, . + 4 + (0x7 << 2)
label_3421c4:
    if (ctx->pc == 0x3421C4u) {
        ctx->pc = 0x3421C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3421C0u;
        // 0x3421c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3421C8u;
        goto label_3421c8;
    }
    ctx->pc = 0x3421C0u;
    {
        const bool branch_taken_0x3421c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x3421C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3421C0u;
        // 0x3421c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3421c0) {
            ctx->pc = 0x3421E0u;
            goto label_3421e0;
        }
    }
    ctx->pc = 0x3421C8u;
label_3421c8:
    // 0x3421c8: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3421c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3421cc:
    // 0x3421cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3421ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3421d0:
    // 0x3421d0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3421d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3421d4:
    // 0x3421d4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_3421d8:
    if (ctx->pc == 0x3421D8u) {
        ctx->pc = 0x3421D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3421D4u;
        // 0x3421d8: 0x2631002c  addiu       $s1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3421DCu;
        goto label_3421dc;
    }
    ctx->pc = 0x3421D4u;
    {
        const bool branch_taken_0x3421d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3421D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3421D4u;
        // 0x3421d8: 0x2631002c  addiu       $s1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3421d4) {
            ctx->pc = 0x3421A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3421a0;
        }
    }
    ctx->pc = 0x3421DCu;
label_3421dc:
    // 0x3421dc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3421dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3421e0:
    // 0x3421e0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3421e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3421e4:
    // 0x3421e4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3421e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3421e8:
    // 0x3421e8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3421e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3421ec:
    // 0x3421ec: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3421ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3421f0:
    // 0x3421f0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3421f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3421f4:
    // 0x3421f4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3421f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3421f8:
    // 0x3421f8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3421f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3421fc:
    // 0x3421fc: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3421fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_342200:
    // 0x342200: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x342200u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_342204:
    // 0x342204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_342208:
    // 0x342208: 0x3e00008  jr          $ra
label_34220c:
    if (ctx->pc == 0x34220Cu) {
        ctx->pc = 0x34220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342208u;
        // 0x34220c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342210u;
        goto label_fallthrough_0x342208;
    }
    ctx->pc = 0x342208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342208u;
        // 0x34220c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x342208:
    ctx->pc = 0x342210u;
}
