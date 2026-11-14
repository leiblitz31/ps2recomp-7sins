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

// Function: sub_001D8DC0
// Address: 0x1d8dc0 - 0x1d9090
void sub_001D8DC0_0x1d8dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8DC0_0x1d8dc0");
#endif

    switch (ctx->pc) {
        case 0x1d8e80u: goto label_1d8e80;
        case 0x1d8e90u: goto label_1d8e90;
        case 0x1d8ea4u: goto label_1d8ea4;
        case 0x1d8eccu: goto label_1d8ecc;
        case 0x1d8ee8u: goto label_1d8ee8;
        case 0x1d8f08u: goto label_1d8f08;
        case 0x1d8f24u: goto label_1d8f24;
        case 0x1d8f2cu: goto label_1d8f2c;
        case 0x1d8f70u: goto label_1d8f70;
        case 0x1d8f8cu: goto label_1d8f8c;
        case 0x1d8facu: goto label_1d8fac;
        case 0x1d8fd4u: goto label_1d8fd4;
        case 0x1d900cu: goto label_1d900c;
        case 0x1d9054u: goto label_1d9054;
        default: break;
    }

    ctx->pc = 0x1d8dc0u;

    // 0x1d8dc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1d8dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1d8dc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d8dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d8dc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d8dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d8dcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d8dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d8dd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d8dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d8dd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d8dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d8dd8: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1d8dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x1d8ddc: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1d8ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d8de0: 0x8c6300c8  lw          $v1, 0xC8($v1)
    ctx->pc = 0x1d8de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1d8de4: 0x106000a1  beqz        $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x1D8DE4u;
    {
        const bool branch_taken_0x1d8de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8de4) {
            ctx->pc = 0x1D906Cu;
            goto label_1d906c;
        }
    }
    ctx->pc = 0x1D8DECu;
    // 0x1d8dec: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x1d8decu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d8df0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1d8df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d8df4: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x1d8df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8df8: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x1d8df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x1d8dfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8e00: 0x0  nop
    ctx->pc = 0x1d8e00u;
    // NOP
    // 0x1d8e04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d8e04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8e08: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8E08u;
    {
        const bool branch_taken_0x1d8e08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8e08) {
            ctx->pc = 0x1D8E1Cu;
            goto label_1d8e1c;
        }
    }
    ctx->pc = 0x1D8E10u;
    // 0x1d8e10: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x1d8e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d8e14: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1D8E14u;
    {
        const bool branch_taken_0x1d8e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8e14) {
            ctx->pc = 0x1D8E6Cu;
            goto label_1d8e6c;
        }
    }
    ctx->pc = 0x1D8E1Cu;
label_1d8e1c:
    // 0x1d8e1c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1d8e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d8e20: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x1d8e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8e24: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1d8e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1d8e28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8e2c: 0x0  nop
    ctx->pc = 0x1d8e2cu;
    // NOP
    // 0x1d8e30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d8e30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8e34: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8E34u;
    {
        const bool branch_taken_0x1d8e34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8e34) {
            ctx->pc = 0x1D8E48u;
            goto label_1d8e48;
        }
    }
    ctx->pc = 0x1D8E3Cu;
    // 0x1d8e3c: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x1d8e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d8e40: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D8E40u;
    {
        const bool branch_taken_0x1d8e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8e40) {
            ctx->pc = 0x1D8E6Cu;
            goto label_1d8e6c;
        }
    }
    ctx->pc = 0x1D8E48u;
label_1d8e48:
    // 0x1d8e48: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1d8e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d8e4c: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x1d8e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8e50: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x1d8e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x1d8e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8e58: 0x0  nop
    ctx->pc = 0x1d8e58u;
    // NOP
    // 0x1d8e5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d8e5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8e60: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8E60u;
    {
        const bool branch_taken_0x1d8e60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8e60) {
            ctx->pc = 0x1D8E6Cu;
            goto label_1d8e6c;
        }
    }
    ctx->pc = 0x1D8E68u;
    // 0x1d8e68: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x1d8e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1d8e6c:
    // 0x1d8e6c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1d8e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d8e70: 0x8c4400c8  lw          $a0, 0xC8($v0)
    ctx->pc = 0x1d8e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x1d8e74: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1d8e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1d8e78: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1D8E78u;
    SET_GPR_U32(ctx, 31, 0x1D8E80u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D8E78u, 0x1D8E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8E80u;
label_1d8e80:
    // 0x1d8e80: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d8e80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8e84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d8e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8e88: 0xc097010  jal         func_25C040
    ctx->pc = 0x1D8E88u;
    SET_GPR_U32(ctx, 31, 0x1D8E90u);
    ctx->pc = 0x25C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C040u, 0x1D8E88u, 0x1D8E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8E90u;
label_1d8e90:
    // 0x1d8e90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d8e90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8e94: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1d8e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d8e98: 0x8c4400c8  lw          $a0, 0xC8($v0)
    ctx->pc = 0x1d8e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x1d8e9c: 0xc048b18  jal         func_122C60
    ctx->pc = 0x1D8E9Cu;
    SET_GPR_U32(ctx, 31, 0x1D8EA4u);
    ctx->pc = 0x122C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C60u, 0x1D8E9Cu, 0x1D8EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8EA4u;
label_1d8ea4:
    // 0x1d8ea4: 0x12200071  beqz        $s1, . + 4 + (0x71 << 2)
    ctx->pc = 0x1D8EA4u;
    {
        const bool branch_taken_0x1d8ea4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8ea4) {
            ctx->pc = 0x1D906Cu;
            goto label_1d906c;
        }
    }
    ctx->pc = 0x1D8EACu;
    // 0x1d8eac: 0x2e21000a  sltiu       $at, $s1, 0xA
    ctx->pc = 0x1d8eacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d8eb0: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D8EB0u;
    {
        const bool branch_taken_0x1d8eb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8eb0) {
            ctx->pc = 0x1D8ED4u;
            goto label_1d8ed4;
        }
    }
    ctx->pc = 0x1D8EB8u;
    // 0x1d8eb8: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1d8eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1d8ebc: 0x278597d8  addiu       $a1, $gp, -0x6828
    ctx->pc = 0x1d8ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940632));
    // 0x1d8ec0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d8ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ec4: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1D8EC4u;
    SET_GPR_U32(ctx, 31, 0x1D8ECCu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1D8EC4u, 0x1D8ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8ECCu;
label_1d8ecc:
    // 0x1d8ecc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D8ECCu;
    {
        const bool branch_taken_0x1d8ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8ecc) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8ED4u;
label_1d8ed4:
    // 0x1d8ed4: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1d8ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1d8ed8: 0x278597e0  addiu       $a1, $gp, -0x6820
    ctx->pc = 0x1d8ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940640));
    // 0x1d8edc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d8edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ee0: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1D8EE0u;
    SET_GPR_U32(ctx, 31, 0x1D8EE8u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1D8EE0u, 0x1D8EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8EE8u;
label_1d8ee8:
    // 0x1d8ee8: 0x2e01000a  sltiu       $at, $s0, 0xA
    ctx->pc = 0x1d8ee8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d8eec: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D8EECu;
    {
        const bool branch_taken_0x1d8eec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8eec) {
            ctx->pc = 0x1D8F10u;
            goto label_1d8f10;
        }
    }
    ctx->pc = 0x1D8EF4u;
    // 0x1d8ef4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1d8ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d8ef8: 0x278597e8  addiu       $a1, $gp, -0x6818
    ctx->pc = 0x1d8ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940648));
    // 0x1d8efc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d8efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8f00: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1D8F00u;
    SET_GPR_U32(ctx, 31, 0x1D8F08u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1D8F00u, 0x1D8F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8F08u;
label_1d8f08:
    // 0x1d8f08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D8F08u;
    {
        const bool branch_taken_0x1d8f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8f08) {
            ctx->pc = 0x1D8F24u;
            goto label_1d8f24;
        }
    }
    ctx->pc = 0x1D8F10u;
label_1d8f10:
    // 0x1d8f10: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1d8f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d8f14: 0x278597ec  addiu       $a1, $gp, -0x6814
    ctx->pc = 0x1d8f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940652));
    // 0x1d8f18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d8f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8f1c: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1D8F1Cu;
    SET_GPR_U32(ctx, 31, 0x1D8F24u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1D8F1Cu, 0x1D8F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8F24u;
label_1d8f24:
    // 0x1d8f24: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1D8F24u;
    SET_GPR_U32(ctx, 31, 0x1D8F2Cu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1D8F24u, 0x1D8F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8F2Cu;
label_1d8f2c:
    // 0x1d8f2c: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x1d8f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d8f30: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1d8f30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8f34: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x1d8f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x1d8f38: 0x2463de00  addiu       $v1, $v1, -0x2200
    ctx->pc = 0x1d8f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958592));
    // 0x1d8f3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d8f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d8f40: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d8f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d8f44: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d8f44u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1d8f48: 0x1010  mfhi        $v0
    ctx->pc = 0x1d8f48u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d8f4c: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x1d8f4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d8f50: 0x2e41000a  sltiu       $at, $s2, 0xA
    ctx->pc = 0x1d8f50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d8f54: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D8F54u;
    {
        const bool branch_taken_0x1d8f54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8f54) {
            ctx->pc = 0x1D8F78u;
            goto label_1d8f78;
        }
    }
    ctx->pc = 0x1D8F5Cu;
    // 0x1d8f5c: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x1d8f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1d8f60: 0x278597e8  addiu       $a1, $gp, -0x6818
    ctx->pc = 0x1d8f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940648));
    // 0x1d8f64: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d8f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8f68: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1D8F68u;
    SET_GPR_U32(ctx, 31, 0x1D8F70u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1D8F68u, 0x1D8F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8F70u;
label_1d8f70:
    // 0x1d8f70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D8F70u;
    {
        const bool branch_taken_0x1d8f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8f70) {
            ctx->pc = 0x1D8F8Cu;
            goto label_1d8f8c;
        }
    }
    ctx->pc = 0x1D8F78u;
label_1d8f78:
    // 0x1d8f78: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x1d8f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1d8f7c: 0x278597ec  addiu       $a1, $gp, -0x6814
    ctx->pc = 0x1d8f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940652));
    // 0x1d8f80: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d8f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8f84: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1D8F84u;
    SET_GPR_U32(ctx, 31, 0x1D8F8Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1D8F84u, 0x1D8F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8F8Cu;
label_1d8f8c:
    // 0x1d8f8c: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x1d8f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x1d8f90: 0x2484bf40  addiu       $a0, $a0, -0x40C0
    ctx->pc = 0x1d8f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950720));
    // 0x1d8f94: 0x278597f0  addiu       $a1, $gp, -0x6810
    ctx->pc = 0x1d8f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940656));
    // 0x1d8f98: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x1d8f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1d8f9c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1d8f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d8fa0: 0x27a80058  addiu       $t0, $sp, 0x58
    ctx->pc = 0x1d8fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1d8fa4: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1D8FA4u;
    SET_GPR_U32(ctx, 31, 0x1D8FACu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1D8FA4u, 0x1D8FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8FACu;
label_1d8fac:
    // 0x1d8fac: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1d8facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d8fb0: 0x8c63010c  lw          $v1, 0x10C($v1)
    ctx->pc = 0x1d8fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
    // 0x1d8fb4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8FB4u;
    {
        const bool branch_taken_0x1d8fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8fb4) {
            ctx->pc = 0x1D8FD4u;
            goto label_1d8fd4;
        }
    }
    ctx->pc = 0x1D8FBCu;
    // 0x1d8fbc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1d8fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d8fc0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1d8fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1d8fc4: 0x8c45010c  lw          $a1, 0x10C($v0)
    ctx->pc = 0x1d8fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x1d8fc8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d8fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8fcc: 0xc08f71c  jal         func_23DC70
    ctx->pc = 0x1D8FCCu;
    SET_GPR_U32(ctx, 31, 0x1D8FD4u);
    ctx->pc = 0x23DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC70u, 0x1D8FCCu, 0x1D8FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8FD4u;
label_1d8fd4:
    // 0x1d8fd4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1d8fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d8fd8: 0xc462004c  lwc1        $f2, 0x4C($v1)
    ctx->pc = 0x1d8fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d8fdc: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1d8fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d8fe0: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1d8fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8fe4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1d8fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1d8fe8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d8fe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8fec: 0x0  nop
    ctx->pc = 0x1d8fecu;
    // NOP
    // 0x1d8ff0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d8ff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d8ff4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1d8ff4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8ff8: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x1D8FF8u;
    {
        const bool branch_taken_0x1d8ff8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8ff8) {
            ctx->pc = 0x1D906Cu;
            goto label_1d906c;
        }
    }
    ctx->pc = 0x1D9000u;
    // 0x1d9000: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1d9000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d9004: 0xc064ddc  jal         func_193770
    ctx->pc = 0x1D9004u;
    SET_GPR_U32(ctx, 31, 0x1D900Cu);
    ctx->pc = 0x193770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193770u, 0x1D9004u, 0x1D900Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D900Cu;
label_1d900c:
    // 0x1d900c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1d900cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x1d9010: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d9010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d9014: 0x0  nop
    ctx->pc = 0x1d9014u;
    // NOP
    // 0x1d9018: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1d9018u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d901c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1d901cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d9020: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1d9020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9024: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d9024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9028: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1D9028u;
    {
        const bool branch_taken_0x1d9028 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9028) {
            ctx->pc = 0x1D906Cu;
            goto label_1d906c;
        }
    }
    ctx->pc = 0x1D9030u;
    // 0x1d9030: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d9030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d9034: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9038: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1d9038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1d903c: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x1d903cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x1d9040: 0x24a5bf40  addiu       $a1, $a1, -0x40C0
    ctx->pc = 0x1d9040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950720));
    // 0x1d9044: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d9044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9048: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d9048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d904c: 0xc08f6a0  jal         func_23DA80
    ctx->pc = 0x1D904Cu;
    SET_GPR_U32(ctx, 31, 0x1D9054u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x1D904Cu, 0x1D9054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9054u;
label_1d9054:
    // 0x1d9054: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1d9054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d9058: 0xac62010c  sw          $v0, 0x10C($v1)
    ctx->pc = 0x1d9058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 268), GPR_U32(ctx, 2));
    // 0x1d905c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1d905cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d9060: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1d9060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9064: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1d9064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d9068: 0xe4600110  swc1        $f0, 0x110($v1)
    ctx->pc = 0x1d9068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
label_1d906c:
    // 0x1d906c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d906cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d9070: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d9070u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9074: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d9074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9078: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d9078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d907c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d907cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9080: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1d9080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d9084: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D908Cu;
    // 0x1d908c: 0x0  nop
    ctx->pc = 0x1d908cu;
    // NOP
    ctx->pc = 0x1d9090u;
}
