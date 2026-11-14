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

// Function: sub_00311050
// Address: 0x311050 - 0x311140
void sub_00311050_0x311050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311050_0x311050");
#endif

    switch (ctx->pc) {
        case 0x3110f0u: goto label_3110f0;
        case 0x311108u: goto label_311108;
        case 0x31111cu: goto label_31111c;
        default: break;
    }

    ctx->pc = 0x311050u;

    // 0x311050: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x311050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x311054: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x311054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x311058: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x311058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x31105c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x31105cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x311060: 0x282a024  and         $s4, $s4, $v0
    ctx->pc = 0x311060u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x311064: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x311064u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x311068: 0x35293fff  ori         $t1, $t1, 0x3FFF
    ctx->pc = 0x311068u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16383);
    // 0x31106c: 0x283a025  or          $s4, $s4, $v1
    ctx->pc = 0x31106cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 3));
    // 0x311070: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x311070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x311074: 0x289a024  and         $s4, $s4, $t1
    ctx->pc = 0x311074u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 9));
    // 0x311078: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x311078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x31107c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31107cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x311080: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x311080u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x311084: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x311084u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x311088: 0x283a024  and         $s4, $s4, $v1
    ctx->pc = 0x311088u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 3));
    // 0x31108c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31108cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x311090: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x311090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x311094: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x311094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x311098: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x311098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31109c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31109cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3110a0: 0x289a025  or          $s4, $s4, $t1
    ctx->pc = 0x3110a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 9));
    // 0x3110a4: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x3110a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x3110a8: 0x282a024  and         $s4, $s4, $v0
    ctx->pc = 0x3110a8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x3110ac: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x3110acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x3110b0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x3110b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x3110b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3110b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3110b8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3110b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x3110bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3110bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3110c0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3110c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3110c4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3110c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3110c8: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x3110c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3110cc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3110ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3110d0: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x3110d0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x3110d4: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x3110d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x3110d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3110d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3110dc: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3110dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3110e0: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x3110e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x3110e4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3110e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3110e8: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3110E8u;
    SET_GPR_U32(ctx, 31, 0x3110F0u);
    ctx->pc = 0x3110ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3110E8u;
    // 0x3110ec: 0x37a40008  ori         $a0, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3110E8u, 0x3110F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3110F0u;
label_3110f0:
    // 0x3110f0: 0x21d8021  addu        $s0, $s0, $sp
    ctx->pc = 0x3110f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x3110f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3110f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3110f8: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3110f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3110fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3110fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311100: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x311100u;
    SET_GPR_U32(ctx, 31, 0x311108u);
    ctx->pc = 0x311104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311100u;
    // 0x311104: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x311100u, 0x311108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311108u;
label_311108:
    // 0x311108: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x311108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31110c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x31110cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311110: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x311110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x311114: 0xc0be19a  jal         func_2F8668
    ctx->pc = 0x311114u;
    SET_GPR_U32(ctx, 31, 0x31111Cu);
    ctx->pc = 0x311118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311114u;
    // 0x311118: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8668u, 0x311114u, 0x31111Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31111Cu;
label_31111c:
    // 0x31111c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x31111cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x311120: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x311120u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x311124: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x311124u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x311128: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x311128u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31112c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x31112cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x311130: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x311130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x311134: 0x3e00008  jr          $ra
    ctx->pc = 0x311134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311134u;
        // 0x311138: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31113Cu;
    // 0x31113c: 0x0  nop
    ctx->pc = 0x31113cu;
    // NOP
    ctx->pc = 0x311140u;
}
