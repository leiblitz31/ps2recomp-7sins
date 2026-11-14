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

// Function: sub_003AE440
// Address: 0x3ae440 - 0x3ae508
void sub_003AE440_0x3ae440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE440_0x3ae440");
#endif

    switch (ctx->pc) {
        case 0x3ae47cu: goto label_3ae47c;
        case 0x3ae4dcu: goto label_3ae4dc;
        default: break;
    }

    ctx->pc = 0x3ae440u;

    // 0x3ae440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ae440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3ae444: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ae444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ae448: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3ae448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3ae44c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ae44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae450: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ae450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ae454: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3ae454u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x3ae458: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x3ae458u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3ae45c: 0x2610ce80  addiu       $s0, $s0, -0x3180
    ctx->pc = 0x3ae45cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954624));
    // 0x3ae460: 0x8e020610  lw          $v0, 0x610($s0)
    ctx->pc = 0x3ae460u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61D490u));
    // 0x3ae464: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x3ae464u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3ae468: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3ae468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3ae46c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ae46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ae470: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3ae470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3ae474: 0xc103d16  jal         func_40F458
    ctx->pc = 0x3AE474u;
    SET_GPR_U32(ctx, 31, 0x3AE47Cu);
    ctx->pc = 0x3AE478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE474u;
    // 0x3ae478: 0x8c440590  lw          $a0, 0x590($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F458u, 0x3AE474u, 0x3AE47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE47Cu;
label_3ae47c:
    // 0x3ae47c: 0xae000704  sw          $zero, 0x704($s0)
    ctx->pc = 0x3ae47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1796), GPR_U32(ctx, 0));
    // 0x3ae480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ae480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ae484: 0xae0006f0  sw          $zero, 0x6F0($s0)
    ctx->pc = 0x3ae484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1776), GPR_U32(ctx, 0));
    // 0x3ae488: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3ae488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ae48c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ae48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae490: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE490u;
        // 0x3ae494: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE498u;
    // 0x3ae498: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ae498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3ae49c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ae49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3ae4a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ae4a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae4a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3ae4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3ae4a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ae4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae4ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ae4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ae4b0: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3ae4b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x3ae4b4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3ae4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3ae4b8: 0x2610ce80  addiu       $s0, $s0, -0x3180
    ctx->pc = 0x3ae4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954624));
    // 0x3ae4bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ae4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ae4c0: 0x8e020610  lw          $v0, 0x610($s0)
    ctx->pc = 0x3ae4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61D490u));
    // 0x3ae4c4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3ae4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3ae4c8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3ae4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3ae4cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ae4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ae4d0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3ae4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3ae4d4: 0xc103e6c  jal         func_40F9B0
    ctx->pc = 0x3AE4D4u;
    SET_GPR_U32(ctx, 31, 0x3AE4DCu);
    ctx->pc = 0x3AE4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE4D4u;
    // 0x3ae4d8: 0x8c440590  lw          $a0, 0x590($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F9B0u, 0x3AE4D4u, 0x3AE4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE4DCu;
label_3ae4dc:
    // 0x3ae4dc: 0xae000704  sw          $zero, 0x704($s0)
    ctx->pc = 0x3ae4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1796), GPR_U32(ctx, 0));
    // 0x3ae4e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ae4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ae4e4: 0xae0006f0  sw          $zero, 0x6F0($s0)
    ctx->pc = 0x3ae4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1776), GPR_U32(ctx, 0));
    // 0x3ae4e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3ae4e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ae4ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ae4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE4F0u;
        // 0x3ae4f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE4F8u;
    // 0x3ae4f8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3ae4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x3ae4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE4FCu;
        // 0x3ae500: 0x8c62d5a4  lw          $v0, -0x2A5C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956452)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE504u;
    // 0x3ae504: 0x0  nop
    ctx->pc = 0x3ae504u;
    // NOP
    ctx->pc = 0x3ae508u;
}
