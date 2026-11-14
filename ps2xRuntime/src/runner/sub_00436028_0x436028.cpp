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

// Function: sub_00436028
// Address: 0x436028 - 0x436170
void sub_00436028_0x436028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00436028_0x436028");
#endif

    switch (ctx->pc) {
        case 0x43603cu: goto label_43603c;
        case 0x4360ecu: goto label_4360ec;
        default: break;
    }

    ctx->pc = 0x436028u;

    // 0x436028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x436028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x43602c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x43602cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x436030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x436030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x436034: 0xc10a322  jal         func_428C88
    ctx->pc = 0x436034u;
    SET_GPR_U32(ctx, 31, 0x43603Cu);
    ctx->pc = 0x436038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436034u;
    // 0x436038: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x436034u, 0x43603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43603Cu;
label_43603c:
    // 0x43603c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x43603cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x436040: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x436040u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x436044: 0x34c68005  ori         $a2, $a2, 0x8005
    ctx->pc = 0x436044u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32773);
    // 0x436048: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x436048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x43604c: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x43604cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x436050: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x436050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x436054: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x436054u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x436058: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x436058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x43605c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43605cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x436060: 0xdf86ae40  ld          $a2, -0x51C0($gp)
    ctx->pc = 0x436060u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294946368)));
    // 0x436064: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x436064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x436068: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x436068u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x43606c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x43606cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x436070: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x436070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x436074: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x436074u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x436078: 0xdf86ae38  ld          $a2, -0x51C8($gp)
    ctx->pc = 0x436078u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294946360)));
    // 0x43607c: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x43607cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x436080: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x436080u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x436084: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x436084u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x436088: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x436088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x43608c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x43608cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x436090: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x436090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x436094: 0xdf82ae70  ld          $v0, -0x5190($gp)
    ctx->pc = 0x436094u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946416)));
    // 0x436098: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x436098u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x43609c: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x43609cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x4360a0: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x4360a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x4360a4: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x4360a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x4360a8: 0xdf84ae68  ld          $a0, -0x5198($gp)
    ctx->pc = 0x4360a8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
    // 0x4360ac: 0xdf83bf08  ld          $v1, -0x40F8($gp)
    ctx->pc = 0x4360acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294950664)));
    // 0x4360b0: 0x2402fe1f  addiu       $v0, $zero, -0x1E1
    ctx->pc = 0x4360b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
    // 0x4360b4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4360b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4360b8: 0xdf86ae50  ld          $a2, -0x51B0($gp)
    ctx->pc = 0x4360b8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294946384)));
    // 0x4360bc: 0x306301e0  andi        $v1, $v1, 0x1E0
    ctx->pc = 0x4360bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)480);
    // 0x4360c0: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x4360c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x4360c4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4360c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4360c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4360c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4360cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4360ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4360d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4360d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4360d4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4360d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4360d8: 0x9385be2c  lbu         $a1, -0x41D4($gp)
    ctx->pc = 0x4360d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950444)));
    // 0x4360dc: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4360dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4360e0: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x4360E0u;
    {
        const bool branch_taken_0x4360e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4360E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4360E0u;
        // 0x4360e4: 0xff84ae68  sd          $a0, -0x5198($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946408), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4360e0) {
            ctx->pc = 0x436130u;
            goto label_436130;
        }
    }
    ctx->pc = 0x4360E8u;
    // 0x4360e8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4360e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4360ec:
    // 0x4360ec: 0x42000039  di
    ctx->pc = 0x4360ecu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x4360f0: 0x40f  sync.p
    ctx->pc = 0x4360f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4360f4: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x4360f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x4360f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4360f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4360fc: 0x0  nop
    ctx->pc = 0x4360fcu;
    // NOP
    // 0x436100: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x436100u;
    {
        const bool branch_taken_0x436100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x436100) {
            ctx->pc = 0x4360ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4360ec;
        }
    }
    ctx->pc = 0x436108u;
    // 0x436108: 0x9383be2e  lbu         $v1, -0x41D2($gp)
    ctx->pc = 0x436108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950446)));
    // 0x43610c: 0x9382be2d  lbu         $v0, -0x41D3($gp)
    ctx->pc = 0x43610cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950445)));
    // 0x436110: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x436110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x436114: 0x9384be2f  lbu         $a0, -0x41D1($gp)
    ctx->pc = 0x436114u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950447)));
    // 0x436118: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x436118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x43611c: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x43611cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x436120: 0x42000038  ei
    ctx->pc = 0x436120u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x436124: 0x210fc  dsll32      $v0, $v0, 3
    ctx->pc = 0x436124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 3));
    // 0x436128: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x436128u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x43612c: 0x0  nop
    ctx->pc = 0x43612cu;
    // NOP
label_436130:
    // 0x436130: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x436130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x436134: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x436134u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x436138: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x436138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x43613c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x43613cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x436140: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x436140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x436144: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x436144u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x436148: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x436148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x43614c: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x43614cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x436150: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x436150u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x436154: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x436154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x436158: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x436158u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x43615c: 0xaf80bec0  sw          $zero, -0x4140($gp)
    ctx->pc = 0x43615cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 0));
    // 0x436160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x436160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x436164: 0x3e00008  jr          $ra
    ctx->pc = 0x436164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x436168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436164u;
        // 0x436168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x436164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43616Cu;
    // 0x43616c: 0x0  nop
    ctx->pc = 0x43616cu;
    // NOP
    ctx->pc = 0x436170u;
}
