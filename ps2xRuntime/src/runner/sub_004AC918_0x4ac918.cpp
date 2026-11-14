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

// Function: sub_004AC918
// Address: 0x4ac918 - 0x4aca20
void sub_004AC918_0x4ac918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AC918_0x4ac918");
#endif

    switch (ctx->pc) {
        case 0x4ac990u: goto label_4ac990;
        case 0x4ac9ccu: goto label_4ac9cc;
        case 0x4aca0cu: goto label_4aca0c;
        default: break;
    }

    ctx->pc = 0x4ac918u;

    // 0x4ac918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ac918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ac91c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac920: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x4ac920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x4ac924: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4AC924u;
    {
        const bool branch_taken_0x4ac924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ac924) {
            ctx->pc = 0x4AC928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AC924u;
            // 0x4ac928: 0xac800068  sw          $zero, 0x68($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AC92Cu;
            goto label_4ac92c;
        }
    }
    ctx->pc = 0x4AC92Cu;
label_4ac92c:
    // 0x4ac92c: 0x50a00012  beql        $a1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x4AC92Cu;
    {
        const bool branch_taken_0x4ac92c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac92c) {
            ctx->pc = 0x4AC930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AC92Cu;
            // 0x4ac930: 0x8c820048  lw          $v0, 0x48($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AC978u;
            goto label_4ac978;
        }
    }
    ctx->pc = 0x4AC934u;
    // 0x4ac934: 0x8c82009c  lw          $v0, 0x9C($a0)
    ctx->pc = 0x4ac934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x4ac938: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4AC938u;
    {
        const bool branch_taken_0x4ac938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AC93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC938u;
        // 0x4ac93c: 0xac850068  sw          $a1, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac938) {
            ctx->pc = 0x4AC974u;
            goto label_4ac974;
        }
    }
    ctx->pc = 0x4AC940u;
    // 0x4ac940: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x4ac940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x4ac944: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AC944u;
    {
        const bool branch_taken_0x4ac944 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4AC948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC944u;
        // 0x4ac948: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac944) {
            ctx->pc = 0x4AC95Cu;
            goto label_4ac95c;
        }
    }
    ctx->pc = 0x4AC94Cu;
    // 0x4ac94c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ac94cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ac950: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4ac950u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4ac954: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4AC954u;
    {
        const bool branch_taken_0x4ac954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC954u;
        // 0x4ac958: 0xe4800054  swc1        $f0, 0x54($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac954) {
            ctx->pc = 0x4AC974u;
            goto label_4ac974;
        }
    }
    ctx->pc = 0x4AC95Cu;
label_4ac95c:
    // 0x4ac95c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4ac95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4ac960: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4ac960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4ac964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ac964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ac968: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4ac968u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4ac96c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4ac96cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x4ac970: 0xe4800054  swc1        $f0, 0x54($a0)
    ctx->pc = 0x4ac970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
label_4ac974:
    // 0x4ac974: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x4ac974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4ac978:
    // 0x4ac978: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AC978u;
    {
        const bool branch_taken_0x4ac978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC978u;
        // 0x4ac97c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac978) {
            ctx->pc = 0x4AC990u;
            goto label_4ac990;
        }
    }
    ctx->pc = 0x4AC980u;
    // 0x4ac980: 0x8c870068  lw          $a3, 0x68($a0)
    ctx->pc = 0x4ac980u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x4ac984: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ac984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac988: 0xc1263c0  jal         func_498F00
    ctx->pc = 0x4AC988u;
    SET_GPR_U32(ctx, 31, 0x4AC990u);
    ctx->pc = 0x4AC98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC988u;
    // 0x4ac98c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F00u, 0x4AC988u, 0x4AC990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC990u;
label_4ac990:
    // 0x4ac990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac994: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC994u;
        // 0x4ac998: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC99Cu;
    // 0x4ac99c: 0x0  nop
    ctx->pc = 0x4ac99cu;
    // NOP
    // 0x4ac9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC9A0u;
        // 0x4ac9a4: 0x8c820068  lw          $v0, 0x68($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC9A8u;
    // 0x4ac9a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ac9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ac9ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac9b0: 0xe48c005c  swc1        $f12, 0x5C($a0)
    ctx->pc = 0x4ac9b0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x4ac9b4: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x4ac9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x4ac9b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AC9B8u;
    {
        const bool branch_taken_0x4ac9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC9B8u;
        // 0x4ac9bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac9b8) {
            ctx->pc = 0x4AC9CCu;
            goto label_4ac9cc;
        }
    }
    ctx->pc = 0x4AC9C0u;
    // 0x4ac9c0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x4ac9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4ac9c4: 0xc1263d6  jal         func_498F58
    ctx->pc = 0x4AC9C4u;
    SET_GPR_U32(ctx, 31, 0x4AC9CCu);
    ctx->pc = 0x4AC9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC9C4u;
    // 0x4ac9c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F58u, 0x4AC9C4u, 0x4AC9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC9CCu;
label_4ac9cc:
    // 0x4ac9cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC9D0u;
        // 0x4ac9d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC9D8u;
    // 0x4ac9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC9D8u;
        // 0x4ac9dc: 0xc480005c  lwc1        $f0, 0x5C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC9E0u;
    // 0x4ac9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC9E0u;
        // 0x4ac9e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC9E8u;
    // 0x4ac9e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ac9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ac9ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac9f0: 0xe48c00a0  swc1        $f12, 0xA0($a0)
    ctx->pc = 0x4ac9f0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x4ac9f4: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x4ac9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x4ac9f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AC9F8u;
    {
        const bool branch_taken_0x4ac9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC9F8u;
        // 0x4ac9fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac9f8) {
            ctx->pc = 0x4ACA0Cu;
            goto label_4aca0c;
        }
    }
    ctx->pc = 0x4ACA00u;
    // 0x4aca00: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x4aca00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4aca04: 0xc1263d6  jal         func_498F58
    ctx->pc = 0x4ACA04u;
    SET_GPR_U32(ctx, 31, 0x4ACA0Cu);
    ctx->pc = 0x4ACA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACA04u;
    // 0x4aca08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F58u, 0x4ACA04u, 0x4ACA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACA0Cu;
label_4aca0c:
    // 0x4aca0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aca0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aca10: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACA10u;
        // 0x4aca14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACA18u;
    // 0x4aca18: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACA18u;
        // 0x4aca1c: 0xc48000a0  lwc1        $f0, 0xA0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACA20u;
}
