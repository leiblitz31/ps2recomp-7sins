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

// Function: sub_00407478
// Address: 0x407478 - 0x407578
void sub_00407478_0x407478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00407478_0x407478");
#endif

    switch (ctx->pc) {
        case 0x4074b4u: goto label_4074b4;
        case 0x407540u: goto label_407540;
        case 0x407550u: goto label_407550;
        case 0x407558u: goto label_407558;
        default: break;
    }

    ctx->pc = 0x407478u;

    // 0x407478: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x407478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x40747c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x40747cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x407480: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x407480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x407484: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x407484u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407488: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x407488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x40748c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x40748cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407490: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x407490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x407494: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x407494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x407498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x40749c: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x40749cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4074a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4074A0u;
    {
        const bool branch_taken_0x4074a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4074A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4074A0u;
        // 0x4074a4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4074a0) {
            ctx->pc = 0x4074B4u;
            goto label_4074b4;
        }
    }
    ctx->pc = 0x4074A8u;
    // 0x4074a8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4074a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4074ac: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x4074ACu;
    SET_GPR_U32(ctx, 31, 0x4074B4u);
    ctx->pc = 0x4074B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4074ACu;
    // 0x4074b0: 0x24a50440  addiu       $a1, $a1, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x4074ACu, 0x4074B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4074B4u;
label_4074b4:
    // 0x4074b4: 0x10323a  dsrl        $a2, $s0, 8
    ctx->pc = 0x4074b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) >> 8);
    // 0x4074b8: 0x10163a  dsrl        $v0, $s0, 24
    ctx->pc = 0x4074b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) >> 24);
    // 0x4074bc: 0x101c3a  dsrl        $v1, $s0, 16
    ctx->pc = 0x4074bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) >> 16);
    // 0x4074c0: 0x11463a  dsrl        $t0, $s1, 24
    ctx->pc = 0x4074c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) >> 24);
    // 0x4074c4: 0x114c3a  dsrl        $t1, $s1, 16
    ctx->pc = 0x4074c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 17) >> 16);
    // 0x4074c8: 0x11523a  dsrl        $t2, $s1, 8
    ctx->pc = 0x4074c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) >> 8);
    // 0x4074cc: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x4074ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x4074d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4074d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4074d4: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x4074d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x4074d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4074d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4074dc: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x4074dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x4074e0: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x4074e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x4074e4: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x4074e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x4074e8: 0x320700ff  andi        $a3, $s0, 0xFF
    ctx->pc = 0x4074e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x4074ec: 0x322b00ff  andi        $t3, $s1, 0xFF
    ctx->pc = 0x4074ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x4074f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4074f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4074f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4074f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4074f8: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x4074f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x4074fc: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x4074fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x407500: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x407500u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x407504: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x407504u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x407508: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x407508u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x40750c: 0xa3a60002  sb          $a2, 0x2($sp)
    ctx->pc = 0x40750cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x407510: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x407510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407514: 0xa3b30008  sb          $s3, 0x8($sp)
    ctx->pc = 0x407514u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 19));
    // 0x407518: 0x2785ac88  addiu       $a1, $gp, -0x5378
    ctx->pc = 0x407518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945928));
    // 0x40751c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x40751cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x407520: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x407520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x407524: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x407524u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x407528: 0xa3a70003  sb          $a3, 0x3($sp)
    ctx->pc = 0x407528u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x40752c: 0xa3a80004  sb          $t0, 0x4($sp)
    ctx->pc = 0x40752cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 8));
    // 0x407530: 0xa3a90005  sb          $t1, 0x5($sp)
    ctx->pc = 0x407530u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 9));
    // 0x407534: 0xa3aa0006  sb          $t2, 0x6($sp)
    ctx->pc = 0x407534u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 10));
    // 0x407538: 0xc101b98  jal         func_406E60
    ctx->pc = 0x407538u;
    SET_GPR_U32(ctx, 31, 0x407540u);
    ctx->pc = 0x40753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407538u;
    // 0x40753c: 0xa3ab0007  sb          $t3, 0x7($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 7), (uint8_t)GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406E60u, 0x407538u, 0x407540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407540u;
label_407540:
    // 0x407540: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x407540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407544: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x407544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407548: 0xc101bc2  jal         func_406F08
    ctx->pc = 0x407548u;
    SET_GPR_U32(ctx, 31, 0x407550u);
    ctx->pc = 0x40754Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407548u;
    // 0x40754c: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F08u, 0x407548u, 0x407550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407550u;
label_407550:
    // 0x407550: 0xc101bda  jal         func_406F68
    ctx->pc = 0x407550u;
    SET_GPR_U32(ctx, 31, 0x407558u);
    ctx->pc = 0x407554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407550u;
    // 0x407554: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F68u, 0x407550u, 0x407558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407558u;
label_407558:
    // 0x407558: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x407558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x40755c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x40755cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x407560: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x407560u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x407564: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x407564u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x407568: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x407568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40756c: 0x3e00008  jr          $ra
    ctx->pc = 0x40756Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40756Cu;
        // 0x407570: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40756Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x407574u;
    // 0x407574: 0x0  nop
    ctx->pc = 0x407574u;
    // NOP
    ctx->pc = 0x407578u;
}
