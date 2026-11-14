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

// Function: sub_001819D0
// Address: 0x1819d0 - 0x181b30
void sub_001819D0_0x1819d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001819D0_0x1819d0");
#endif

    switch (ctx->pc) {
        case 0x181a04u: goto label_181a04;
        case 0x181a18u: goto label_181a18;
        case 0x181a3cu: goto label_181a3c;
        case 0x181a64u: goto label_181a64;
        case 0x181a88u: goto label_181a88;
        case 0x181ab0u: goto label_181ab0;
        case 0x181ae0u: goto label_181ae0;
        case 0x181af0u: goto label_181af0;
        case 0x181b14u: goto label_181b14;
        default: break;
    }

    ctx->pc = 0x1819d0u;

    // 0x1819d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1819d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1819d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1819d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1819d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1819d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1819dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1819dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1819e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1819e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1819e4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1819e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1819e8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1819e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1819ec: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1819ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1819f0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x1819f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x1819f4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x1819f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x1819f8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1819f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1819fc: 0xc05fdc4  jal         func_17F710
    ctx->pc = 0x1819FCu;
    SET_GPR_U32(ctx, 31, 0x181A04u);
    ctx->pc = 0x17F710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F710u, 0x1819FCu, 0x181A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181A04u;
label_181a04:
    // 0x181a04: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x181a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x181a08: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x181a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x181a0c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x181a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x181a10: 0xc041954  jal         func_106550
    ctx->pc = 0x181A10u;
    SET_GPR_U32(ctx, 31, 0x181A18u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x181A10u, 0x181A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181A18u;
label_181a18:
    // 0x181a18: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x181a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x181a1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x181a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x181a20: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x181a20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x181a24: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x181a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181a28: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x181a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x181a2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x181a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x181a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a34: 0xc0609a4  jal         func_182690
    ctx->pc = 0x181A34u;
    SET_GPR_U32(ctx, 31, 0x181A3Cu);
    ctx->pc = 0x182690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182690u, 0x181A34u, 0x181A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181A3Cu;
label_181a3c:
    // 0x181a3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x181a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a40: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x181a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a44: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x181a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181a48: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x181a48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x181a4c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x181a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x181a50: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x181a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x181a54: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x181a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a58: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x181a58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x181a5c: 0xc06078c  jal         func_181E30
    ctx->pc = 0x181A5Cu;
    SET_GPR_U32(ctx, 31, 0x181A64u);
    ctx->pc = 0x181E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E30u, 0x181A5Cu, 0x181A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181A64u;
label_181a64:
    // 0x181a64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x181a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a68: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x181a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x181a6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181a70: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x181A70u;
    {
        const bool branch_taken_0x181a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x181a70) {
            ctx->pc = 0x181A94u;
            goto label_181a94;
        }
    }
    ctx->pc = 0x181A78u;
    // 0x181a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a7c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x181a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x181a80: 0xc06071c  jal         func_181C70
    ctx->pc = 0x181A80u;
    SET_GPR_U32(ctx, 31, 0x181A88u);
    ctx->pc = 0x181C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181C70u, 0x181A80u, 0x181A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181A88u;
label_181a88:
    // 0x181a88: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x181a88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x181a8c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x181A8Cu;
    {
        const bool branch_taken_0x181a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181a8c) {
            ctx->pc = 0x181AB4u;
            goto label_181ab4;
        }
    }
    ctx->pc = 0x181A94u;
label_181a94:
    // 0x181a94: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x181a94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x181a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a9c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x181a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x181aa0: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x181aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x181aa4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x181aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x181aa8: 0xc0606fc  jal         func_181BF0
    ctx->pc = 0x181AA8u;
    SET_GPR_U32(ctx, 31, 0x181AB0u);
    ctx->pc = 0x181BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181BF0u, 0x181AA8u, 0x181AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181AB0u;
label_181ab0:
    // 0x181ab0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x181ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_181ab4:
    // 0x181ab4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x181ab4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x181ab8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x181AB8u;
    {
        const bool branch_taken_0x181ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181ab8) {
            ctx->pc = 0x181AE4u;
            goto label_181ae4;
        }
    }
    ctx->pc = 0x181AC0u;
    // 0x181ac0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x181ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181ac4: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x181ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x181ac8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x181ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x181acc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x181accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x181ad0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x181ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181ad4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x181ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x181ad8: 0xc06078c  jal         func_181E30
    ctx->pc = 0x181AD8u;
    SET_GPR_U32(ctx, 31, 0x181AE0u);
    ctx->pc = 0x181E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E30u, 0x181AD8u, 0x181AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181AE0u;
label_181ae0:
    // 0x181ae0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x181ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_181ae4:
    // 0x181ae4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x181ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181ae8: 0xc0606e0  jal         func_181B80
    ctx->pc = 0x181AE8u;
    SET_GPR_U32(ctx, 31, 0x181AF0u);
    ctx->pc = 0x181B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181B80u, 0x181AE8u, 0x181AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181AF0u;
label_181af0:
    // 0x181af0: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x181af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x181af4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x181af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x181af8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x181af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x181afc: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x181afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x181b00: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x181b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181b04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x181b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x181b08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b0c: 0xc0606cc  jal         func_181B30
    ctx->pc = 0x181B0Cu;
    SET_GPR_U32(ctx, 31, 0x181B14u);
    ctx->pc = 0x181B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181B30u, 0x181B0Cu, 0x181B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181B14u;
label_181b14:
    // 0x181b14: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x181b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181b18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x181b18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181b1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x181b1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181b20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181b20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181b24: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x181b24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x181b28: 0x3e00008  jr          $ra
    ctx->pc = 0x181B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181B30u;
}
