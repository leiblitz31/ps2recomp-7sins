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

// Function: sub_00379930
// Address: 0x379930 - 0x379a00
void sub_00379930_0x379930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379930_0x379930");
#endif

    switch (ctx->pc) {
        case 0x37996cu: goto label_37996c;
        case 0x379994u: goto label_379994;
        case 0x3799b8u: goto label_3799b8;
        default: break;
    }

    ctx->pc = 0x379930u;

    // 0x379930: 0x3e00008  jr          $ra
    ctx->pc = 0x379930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379930u;
        // 0x379934: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379938u;
    // 0x379938: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x379938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x37993c: 0x3e00008  jr          $ra
    ctx->pc = 0x37993Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37993Cu;
        // 0x379940: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37993Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379944u;
    // 0x379944: 0x0  nop
    ctx->pc = 0x379944u;
    // NOP
    // 0x379948: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x379948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37994c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37994cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x379950: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x379950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x379954: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x379954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379958: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x379958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37995c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x37995cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379960: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x379960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x379964: 0xc106406  jal         func_419018
    ctx->pc = 0x379964u;
    SET_GPR_U32(ctx, 31, 0x37996Cu);
    ctx->pc = 0x379968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379964u;
    // 0x379968: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419018u, 0x379964u, 0x37996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37996Cu;
label_37996c:
    // 0x37996c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x37996cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x379970: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x379970u;
    {
        const bool branch_taken_0x379970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x379974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379970u;
        // 0x379974: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379970) {
            ctx->pc = 0x37998Cu;
            goto label_37998c;
        }
    }
    ctx->pc = 0x379978u;
    // 0x379978: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x379978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37997c: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37997Cu;
    {
        const bool branch_taken_0x37997c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x37997c) {
            ctx->pc = 0x37998Cu;
            goto label_37998c;
        }
    }
    ctx->pc = 0x379984u;
    // 0x379984: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x379984u;
    {
        const bool branch_taken_0x379984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379984u;
        // 0x379988: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379984) {
            ctx->pc = 0x3799ACu;
            goto label_3799ac;
        }
    }
    ctx->pc = 0x37998Cu;
label_37998c:
    // 0x37998c: 0xc106406  jal         func_419018
    ctx->pc = 0x37998Cu;
    SET_GPR_U32(ctx, 31, 0x379994u);
    ctx->pc = 0x379990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37998Cu;
    // 0x379990: 0x2404012e  addiu       $a0, $zero, 0x12E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419018u, 0x37998Cu, 0x379994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379994u;
label_379994:
    // 0x379994: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x379994u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x379998: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x379998u;
    {
        const bool branch_taken_0x379998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379998u;
        // 0x37999c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379998) {
            ctx->pc = 0x3799B0u;
            goto label_3799b0;
        }
    }
    ctx->pc = 0x3799A0u;
    // 0x3799a0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3799a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3799a4: 0x3a220003  xori        $v0, $s1, 0x3
    ctx->pc = 0x3799a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)3);
    // 0x3799a8: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x3799a8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
label_3799ac:
    // 0x3799ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3799acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3799b0:
    // 0x3799b0: 0xc0de920  jal         func_37A480
    ctx->pc = 0x3799B0u;
    SET_GPR_U32(ctx, 31, 0x3799B8u);
    ctx->pc = 0x3799B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3799B0u;
    // 0x3799b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A480u, 0x3799B0u, 0x3799B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3799B8u;
label_3799b8:
    // 0x3799b8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3799b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3799bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3799bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3799c0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3799c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3799c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3799c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3799c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3799C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3799CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3799C8u;
        // 0x3799cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3799C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3799D0u;
    // 0x3799d0: 0x8c84006c  lw          $a0, 0x6C($a0)
    ctx->pc = 0x3799d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x3799d4: 0x24030116  addiu       $v1, $zero, 0x116
    ctx->pc = 0x3799d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x3799d8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x3799d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x3799dc: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3799DCu;
    {
        const bool branch_taken_0x3799dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3799E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3799DCu;
        // 0x3799e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3799dc) {
            ctx->pc = 0x3799E8u;
            goto label_3799e8;
        }
    }
    ctx->pc = 0x3799E4u;
    // 0x3799e4: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x3799e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3799e8:
    // 0x3799e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3799E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3799ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3799E8u;
        // 0x3799ec: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3799E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3799F0u;
    // 0x3799f0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3799f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x3799f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3799F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3799F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3799F4u;
        // 0x3799f8: 0x8c62ac54  lw          $v0, -0x53AC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945876)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3799F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3799FCu;
    // 0x3799fc: 0x0  nop
    ctx->pc = 0x3799fcu;
    // NOP
    ctx->pc = 0x379a00u;
}
