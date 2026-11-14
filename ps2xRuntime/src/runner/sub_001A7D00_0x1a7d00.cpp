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

// Function: sub_001A7D00
// Address: 0x1a7d00 - 0x1a7ec0
void sub_001A7D00_0x1a7d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7D00_0x1a7d00");
#endif

    switch (ctx->pc) {
        case 0x1a7d2cu: goto label_1a7d2c;
        case 0x1a7d44u: goto label_1a7d44;
        case 0x1a7d5cu: goto label_1a7d5c;
        case 0x1a7d70u: goto label_1a7d70;
        case 0x1a7e20u: goto label_1a7e20;
        case 0x1a7e30u: goto label_1a7e30;
        case 0x1a7e40u: goto label_1a7e40;
        case 0x1a7e74u: goto label_1a7e74;
        case 0x1a7e88u: goto label_1a7e88;
        case 0x1a7e9cu: goto label_1a7e9c;
        default: break;
    }

    ctx->pc = 0x1a7d00u;

    // 0x1a7d00: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1a7d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1a7d04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a7d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a7d08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a7d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a7d0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a7d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a7d10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a7d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a7d14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a7d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a7d18: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x1a7d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x1a7d1c: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x1a7d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x1a7d20: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x1a7d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
    // 0x1a7d24: 0xc12242c  jal         func_4890B0
    ctx->pc = 0x1A7D24u;
    SET_GPR_U32(ctx, 31, 0x1A7D2Cu);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x1A7D24u, 0x1A7D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7D2Cu;
label_1a7d2c:
    // 0x1a7d2c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a7d2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7d30: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1a7d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a7d34: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1a7d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1a7d38: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1a7d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1a7d3c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1A7D3Cu;
    SET_GPR_U32(ctx, 31, 0x1A7D44u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1A7D3Cu, 0x1A7D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7D44u;
label_1a7d44:
    // 0x1a7d44: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a7d44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7d48: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1a7d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a7d4c: 0x278593b0  addiu       $a1, $gp, -0x6C50
    ctx->pc = 0x1a7d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939568));
    // 0x1a7d50: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x1a7d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a7d54: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1A7D54u;
    SET_GPR_U32(ctx, 31, 0x1A7D5Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1A7D54u, 0x1A7D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7D5Cu;
label_1a7d5c:
    // 0x1a7d5c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1a7d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a7d60: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1a7d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a7d64: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A7D64u;
    {
        const bool branch_taken_0x1a7d64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7d64) {
            ctx->pc = 0x1A7D8Cu;
            goto label_1a7d8c;
        }
    }
    ctx->pc = 0x1A7D6Cu;
    // 0x1a7d6c: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1a7d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1a7d70:
    // 0x1a7d70: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1a7d70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a7d74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a7d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a7d78: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a7d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a7d7c: 0x0  nop
    ctx->pc = 0x1a7d7cu;
    // NOP
    // 0x1a7d80: 0x0  nop
    ctx->pc = 0x1a7d80u;
    // NOP
    // 0x1a7d84: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A7D84u;
    {
        const bool branch_taken_0x1a7d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7d84) {
            ctx->pc = 0x1A7D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7d70;
        }
    }
    ctx->pc = 0x1A7D8Cu;
label_1a7d8c:
    // 0x1a7d8c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1a7d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a7d90: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1a7d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1a7d94: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A7D94u;
    {
        const bool branch_taken_0x1a7d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7d94) {
            ctx->pc = 0x1A7DD0u;
            goto label_1a7dd0;
        }
    }
    ctx->pc = 0x1A7D9Cu;
    // 0x1a7d9c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1a7d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1a7da0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a7da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a7da4: 0x0  nop
    ctx->pc = 0x1a7da4u;
    // NOP
    // 0x1a7da8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1a7da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1a7dac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a7dacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a7db0: 0x0  nop
    ctx->pc = 0x1a7db0u;
    // NOP
    // 0x1a7db4: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1a7db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1a7db8: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x1a7db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x1a7dbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a7dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a7dc0: 0x0  nop
    ctx->pc = 0x1a7dc0u;
    // NOP
    // 0x1a7dc4: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1a7dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1a7dc8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A7DC8u;
    {
        const bool branch_taken_0x1a7dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7dc8) {
            ctx->pc = 0x1A7E0Cu;
            goto label_1a7e0c;
        }
    }
    ctx->pc = 0x1A7DD0u;
label_1a7dd0:
    // 0x1a7dd0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1a7dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a7dd4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1a7dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a7dd8: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A7DD8u;
    {
        const bool branch_taken_0x1a7dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7dd8) {
            ctx->pc = 0x1A7E0Cu;
            goto label_1a7e0c;
        }
    }
    ctx->pc = 0x1A7DE0u;
    // 0x1a7de0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1a7de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1a7de4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a7de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a7de8: 0x0  nop
    ctx->pc = 0x1a7de8u;
    // NOP
    // 0x1a7dec: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1a7decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1a7df0: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x1a7df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x1a7df4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a7df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a7df8: 0x0  nop
    ctx->pc = 0x1a7df8u;
    // NOP
    // 0x1a7dfc: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1a7dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1a7e00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a7e00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a7e04: 0x0  nop
    ctx->pc = 0x1a7e04u;
    // NOP
    // 0x1a7e08: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1a7e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1a7e0c:
    // 0x1a7e0c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1a7e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a7e10: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1a7e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1a7e14: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a7e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a7e18: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1A7E18u;
    SET_GPR_U32(ctx, 31, 0x1A7E20u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1A7E18u, 0x1A7E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E20u;
label_1a7e20:
    // 0x1a7e20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a7e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e28: 0xc0a82cc  jal         func_2A0B30
    ctx->pc = 0x1A7E28u;
    SET_GPR_U32(ctx, 31, 0x1A7E30u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x1A7E28u, 0x1A7E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E30u;
label_1a7e30:
    // 0x1a7e30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a7e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e34: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1a7e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a7e38: 0xc121e9c  jal         func_487A70
    ctx->pc = 0x1A7E38u;
    SET_GPR_U32(ctx, 31, 0x1A7E40u);
    ctx->pc = 0x487A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A70u, 0x1A7E38u, 0x1A7E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E40u;
label_1a7e40:
    // 0x1a7e40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a7e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e44: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A7E44u;
    {
        const bool branch_taken_0x1a7e44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7e44) {
            ctx->pc = 0x1A7E68u;
            goto label_1a7e68;
        }
    }
    ctx->pc = 0x1A7E4Cu;
    // 0x1a7e4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a7e4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a7e50: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1a7e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a7e54: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1a7e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1a7e58: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1a7e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a7e5c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1a7e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1a7e60: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A7E60u;
    {
        const bool branch_taken_0x1a7e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7e60) {
            ctx->pc = 0x1A7E9Cu;
            goto label_1a7e9c;
        }
    }
    ctx->pc = 0x1A7E68u;
label_1a7e68:
    // 0x1a7e68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e6c: 0xc106784  jal         func_419E10
    ctx->pc = 0x1A7E6Cu;
    SET_GPR_U32(ctx, 31, 0x1A7E74u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x1A7E6Cu, 0x1A7E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E74u;
label_1a7e74:
    // 0x1a7e74: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1a7e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a7e78: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1a7e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a7e7c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a7e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e80: 0xc104d64  jal         func_413590
    ctx->pc = 0x1A7E80u;
    SET_GPR_U32(ctx, 31, 0x1A7E88u);
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x1A7E80u, 0x1A7E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E88u;
label_1a7e88:
    // 0x1a7e88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e8c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1a7e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a7e90: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x1a7e90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a7e94: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x1A7E94u;
    SET_GPR_U32(ctx, 31, 0x1A7E9Cu);
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x1A7E94u, 0x1A7E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E9Cu;
label_1a7e9c:
    // 0x1a7e9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a7e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a7ea0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a7ea0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a7ea4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a7ea4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7ea8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a7ea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7eac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a7eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7eb0: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x1a7eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1a7eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7EBCu;
    // 0x1a7ebc: 0x0  nop
    ctx->pc = 0x1a7ebcu;
    // NOP
    ctx->pc = 0x1a7ec0u;
}
