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

// Function: sub_002A2E30
// Address: 0x2a2e30 - 0x2a2fc0
void sub_002A2E30_0x2a2e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2E30_0x2a2e30");
#endif

    switch (ctx->pc) {
        case 0x2a2e8cu: goto label_2a2e8c;
        case 0x2a2ea8u: goto label_2a2ea8;
        case 0x2a2eb8u: goto label_2a2eb8;
        case 0x2a2eecu: goto label_2a2eec;
        case 0x2a2f08u: goto label_2a2f08;
        case 0x2a2f18u: goto label_2a2f18;
        case 0x2a2f38u: goto label_2a2f38;
        default: break;
    }

    ctx->pc = 0x2a2e30u;

    // 0x2a2e30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a2e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a2e34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a2e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a2e38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a2e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a2e3c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2a2e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2a2e40: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2a2e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2a2e44: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2a2e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2a2e48: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x2a2e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x2a2e4c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2a2e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a2e50: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x2A2E50u;
    {
        const bool branch_taken_0x2a2e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2e50) {
            ctx->pc = 0x2A2FA0u;
            goto label_2a2fa0;
        }
    }
    ctx->pc = 0x2A2E58u;
    // 0x2a2e58: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2a2e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a2e5c: 0x2470fff9  addiu       $s0, $v1, -0x7
    ctx->pc = 0x2a2e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967289));
    // 0x2a2e60: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2a2e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a2e64: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a2e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a2e68: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A2E68u;
    {
        const bool branch_taken_0x2a2e68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a2e68) {
            ctx->pc = 0x2A2EC0u;
            goto label_2a2ec0;
        }
    }
    ctx->pc = 0x2A2E70u;
    // 0x2a2e70: 0x8f82bc40  lw          $v0, -0x43C0($gp)
    ctx->pc = 0x2a2e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949952)));
    // 0x2a2e74: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2A2E74u;
    {
        const bool branch_taken_0x2a2e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2e74) {
            ctx->pc = 0x2A2F28u;
            goto label_2a2f28;
        }
    }
    ctx->pc = 0x2A2E7Cu;
    // 0x2a2e7c: 0x8f84bc44  lw          $a0, -0x43BC($gp)
    ctx->pc = 0x2a2e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949956)));
    // 0x2a2e80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a2e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2e84: 0xc09fd2c  jal         func_27F4B0
    ctx->pc = 0x2A2E84u;
    SET_GPR_U32(ctx, 31, 0x2A2E8Cu);
    ctx->pc = 0x27F4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F4B0u, 0x2A2E84u, 0x2A2E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2E8Cu;
label_2a2e8c:
    // 0x2a2e8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a2e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2e90: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2A2E90u;
    {
        const bool branch_taken_0x2a2e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2e90) {
            ctx->pc = 0x2A2F28u;
            goto label_2a2f28;
        }
    }
    ctx->pc = 0x2A2E98u;
    // 0x2a2e98: 0x8f84bc44  lw          $a0, -0x43BC($gp)
    ctx->pc = 0x2a2e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949956)));
    // 0x2a2e9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a2e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2ea0: 0xc09fd2c  jal         func_27F4B0
    ctx->pc = 0x2A2EA0u;
    SET_GPR_U32(ctx, 31, 0x2A2EA8u);
    ctx->pc = 0x27F4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F4B0u, 0x2A2EA0u, 0x2A2EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2EA8u;
label_2a2ea8:
    // 0x2a2ea8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2a2ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2eac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a2eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2eb0: 0xc0a8b78  jal         func_2A2DE0
    ctx->pc = 0x2A2EB0u;
    SET_GPR_U32(ctx, 31, 0x2A2EB8u);
    ctx->pc = 0x2A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2DE0u, 0x2A2EB0u, 0x2A2EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2EB8u;
label_2a2eb8:
    // 0x2a2eb8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2A2EB8u;
    {
        const bool branch_taken_0x2a2eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2eb8) {
            ctx->pc = 0x2A2F28u;
            goto label_2a2f28;
        }
    }
    ctx->pc = 0x2A2EC0u;
label_2a2ec0:
    // 0x2a2ec0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2a2ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a2ec4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a2ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2ec8: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A2EC8u;
    {
        const bool branch_taken_0x2a2ec8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a2ec8) {
            ctx->pc = 0x2A2F20u;
            goto label_2a2f20;
        }
    }
    ctx->pc = 0x2A2ED0u;
    // 0x2a2ed0: 0x8f82bc40  lw          $v0, -0x43C0($gp)
    ctx->pc = 0x2a2ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949952)));
    // 0x2a2ed4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A2ED4u;
    {
        const bool branch_taken_0x2a2ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2ed4) {
            ctx->pc = 0x2A2F28u;
            goto label_2a2f28;
        }
    }
    ctx->pc = 0x2A2EDCu;
    // 0x2a2edc: 0x8f84bc40  lw          $a0, -0x43C0($gp)
    ctx->pc = 0x2a2edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949952)));
    // 0x2a2ee0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a2ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2ee4: 0xc09fd2c  jal         func_27F4B0
    ctx->pc = 0x2A2EE4u;
    SET_GPR_U32(ctx, 31, 0x2A2EECu);
    ctx->pc = 0x27F4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F4B0u, 0x2A2EE4u, 0x2A2EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2EECu;
label_2a2eec:
    // 0x2a2eec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a2eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2ef0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A2EF0u;
    {
        const bool branch_taken_0x2a2ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2ef0) {
            ctx->pc = 0x2A2F28u;
            goto label_2a2f28;
        }
    }
    ctx->pc = 0x2A2EF8u;
    // 0x2a2ef8: 0x8f84bc40  lw          $a0, -0x43C0($gp)
    ctx->pc = 0x2a2ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949952)));
    // 0x2a2efc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a2efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f00: 0xc09fd2c  jal         func_27F4B0
    ctx->pc = 0x2A2F00u;
    SET_GPR_U32(ctx, 31, 0x2A2F08u);
    ctx->pc = 0x27F4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F4B0u, 0x2A2F00u, 0x2A2F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F08u;
label_2a2f08:
    // 0x2a2f08: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2a2f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2f0c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a2f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2f10: 0xc0a8b78  jal         func_2A2DE0
    ctx->pc = 0x2A2F10u;
    SET_GPR_U32(ctx, 31, 0x2A2F18u);
    ctx->pc = 0x2A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2DE0u, 0x2A2F10u, 0x2A2F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F18u;
label_2a2f18:
    // 0x2a2f18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A2F18u;
    {
        const bool branch_taken_0x2a2f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2f18) {
            ctx->pc = 0x2A2F28u;
            goto label_2a2f28;
        }
    }
    ctx->pc = 0x2A2F20u;
label_2a2f20:
    // 0x2a2f20: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2A2F20u;
    {
        const bool branch_taken_0x2a2f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2f20) {
            ctx->pc = 0x2A2FA0u;
            goto label_2a2fa0;
        }
    }
    ctx->pc = 0x2A2F28u;
label_2a2f28:
    // 0x2a2f28: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2a2f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2a2f2c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2a2f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2a2f30: 0xc0858ac  jal         func_2162B0
    ctx->pc = 0x2A2F30u;
    SET_GPR_U32(ctx, 31, 0x2A2F38u);
    ctx->pc = 0x2162B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2162B0u, 0x2A2F30u, 0x2A2F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F38u;
label_2a2f38:
    // 0x2a2f38: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2a2f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2f3c: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x2a2f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x2a2f40: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2a2f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a2f44: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A2F44u;
    {
        const bool branch_taken_0x2a2f44 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2a2f44) {
            ctx->pc = 0x2A2F60u;
            goto label_2a2f60;
        }
    }
    ctx->pc = 0x2A2F4Cu;
    // 0x2a2f4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a2f4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2f50: 0x0  nop
    ctx->pc = 0x2a2f50u;
    // NOP
    // 0x2a2f54: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a2f54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a2f58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A2F58u;
    {
        const bool branch_taken_0x2a2f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2f58) {
            ctx->pc = 0x2A2F7Cu;
            goto label_2a2f7c;
        }
    }
    ctx->pc = 0x2A2F60u;
label_2a2f60:
    // 0x2a2f60: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x2a2f60u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2a2f64: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a2f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a2f68: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a2f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a2f6c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a2f6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2f70: 0x0  nop
    ctx->pc = 0x2a2f70u;
    // NOP
    // 0x2a2f74: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a2f74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a2f78: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a2f78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a2f7c:
    // 0x2a2f7c: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x2a2f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x2a2f80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a2f80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2f84: 0x0  nop
    ctx->pc = 0x2a2f84u;
    // NOP
    // 0x2a2f88: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2a2f88u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2a2f8c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2a2f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2f90: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x2a2f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x2a2f94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a2f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2f98: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2a2f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2f9c: 0xa0640038  sb          $a0, 0x38($v1)
    ctx->pc = 0x2a2f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 4));
label_2a2fa0:
    // 0x2a2fa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a2fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2fa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a2fa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2fa8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2a2fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a2fac: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2FB4u;
    // 0x2a2fb4: 0x0  nop
    ctx->pc = 0x2a2fb4u;
    // NOP
    // 0x2a2fb8: 0x0  nop
    ctx->pc = 0x2a2fb8u;
    // NOP
    // 0x2a2fbc: 0x0  nop
    ctx->pc = 0x2a2fbcu;
    // NOP
    ctx->pc = 0x2a2fc0u;
}
