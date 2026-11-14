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

// Function: sub_004A4DC0
// Address: 0x4a4dc0 - 0x4a4f88
void sub_004A4DC0_0x4a4dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4DC0_0x4a4dc0");
#endif

    switch (ctx->pc) {
        case 0x4a4e68u: goto label_4a4e68;
        case 0x4a4ea8u: goto label_4a4ea8;
        case 0x4a4ed8u: goto label_4a4ed8;
        case 0x4a4f10u: goto label_4a4f10;
        default: break;
    }

    ctx->pc = 0x4a4dc0u;

    // 0x4a4dc0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x4a4dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x4a4dc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4a4dc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a4dc8: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x4a4dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x4a4dcc: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x4a4dccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x4a4dd0: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x4a4dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x4a4dd4: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x4a4dd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4dd8: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x4a4dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x4a4ddc: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x4a4ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x4a4de0: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x4a4de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x4a4de4: 0x84603  sra         $t0, $t0, 24
    ctx->pc = 0x4a4de4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 24));
    // 0x4a4de8: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x4a4de8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x4a4dec: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x4a4decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x4a4df0: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x4a4df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x4a4df4: 0x7ae03  sra         $s5, $a3, 24
    ctx->pc = 0x4a4df4u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 7), 24));
    // 0x4a4df8: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x4a4df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x4a4dfc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4a4dfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4e00: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x4a4e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x4a4e04: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4a4e04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4e08: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4a4e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x4a4e0c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a4e0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4e10: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4a4e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x4a4e14: 0x2ac20010  slti        $v0, $s6, 0x10
    ctx->pc = 0x4a4e14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x4a4e18: 0xafa80064  sw          $t0, 0x64($sp)
    ctx->pc = 0x4a4e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 8));
    // 0x4a4e1c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x4a4e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x4a4e20: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x4a4e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
    // 0x4a4e24: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x4a4e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x4a4e28: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x4a4e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x4a4e2c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x4a4e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x4a4e30: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x4A4E30u;
    {
        const bool branch_taken_0x4a4e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A4E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4E30u;
        // 0x4a4e34: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4e30) {
            ctx->pc = 0x4A4F54u;
            goto label_4a4f54;
        }
    }
    ctx->pc = 0x4A4E38u;
    // 0x4a4e38: 0x2417001c  addiu       $s7, $zero, 0x1C
    ctx->pc = 0x4a4e38u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x4a4e3c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4a4e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4a4e40: 0x2b71018  mult        $v0, $s5, $s7
    ctx->pc = 0x4a4e40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a4e44: 0x27a50054  addiu       $a1, $sp, 0x54
    ctx->pc = 0x4a4e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x4a4e48: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x4a4e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x4a4e4c: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x4a4e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x4a4e50: 0xafa50074  sw          $a1, 0x74($sp)
    ctx->pc = 0x4a4e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 5));
    // 0x4a4e54: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x4a4e54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4a4e58: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x4a4e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
    // 0x4a4e5c: 0x27be005c  addiu       $fp, $sp, 0x5C
    ctx->pc = 0x4a4e5cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x4a4e60: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x4a4e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x4a4e64: 0x0  nop
    ctx->pc = 0x4a4e64u;
    // NOP
label_4a4e68:
    // 0x4a4e68: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x4a4e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4a4e6c: 0x24740010  addiu       $s4, $v1, 0x10
    ctx->pc = 0x4a4e6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4a4e70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4a4e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4e74: 0x513823  subu        $a3, $v0, $s1
    ctx->pc = 0x4a4e74u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x4a4e78: 0x28e2001d  slti        $v0, $a3, 0x1D
    ctx->pc = 0x4a4e78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x4a4e7c: 0x2e2380a  movz        $a3, $s7, $v0
    ctx->pc = 0x4a4e7cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 23));
    // 0x4a4e80: 0x18e00011  blez        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x4A4E80u;
    {
        const bool branch_taken_0x4a4e80 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x4A4E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4E80u;
        // 0x4a4e84: 0x26530010  addiu       $s3, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4e80) {
            ctx->pc = 0x4A4EC8u;
            goto label_4a4ec8;
        }
    }
    ctx->pc = 0x4A4E88u;
    // 0x4a4e88: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x4a4e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x4a4e8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4a4e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4e90: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4a4e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4e94: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x4a4e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x4a4e98: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x4a4e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a4e9c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a4e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a4ea0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4a4ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a4ea4: 0x0  nop
    ctx->pc = 0x4a4ea4u;
    // NOP
label_4a4ea8:
    // 0x4a4ea8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4a4ea8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a4eac: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x4a4eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x4a4eb0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4a4eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4a4eb4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4a4eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4a4eb8: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x4a4eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a4ebc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4A4EBCu;
    {
        const bool branch_taken_0x4a4ebc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A4EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4EBCu;
        // 0x4a4ec0: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4ebc) {
            ctx->pc = 0x4A4EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a4ea8;
        }
    }
    ctx->pc = 0x4A4EC4u;
    // 0x4a4ec4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4a4ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4a4ec8:
    // 0x4a4ec8: 0x2882001c  slti        $v0, $a0, 0x1C
    ctx->pc = 0x4a4ec8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x4a4ecc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A4ECCu;
    {
        const bool branch_taken_0x4a4ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4ECCu;
        // 0x4a4ed0: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4ecc) {
            ctx->pc = 0x4A4EF4u;
            goto label_4a4ef4;
        }
    }
    ctx->pc = 0x4A4ED4u;
    // 0x4a4ed4: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x4a4ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4a4ed8:
    // 0x4a4ed8: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x4a4ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a4edc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4a4edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4a4ee0: 0x2882001c  slti        $v0, $a0, 0x1C
    ctx->pc = 0x4a4ee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x4a4ee4: 0x0  nop
    ctx->pc = 0x4a4ee4u;
    // NOP
    // 0x4a4ee8: 0x0  nop
    ctx->pc = 0x4a4ee8u;
    // NOP
    // 0x4a4eec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4A4EECu;
    {
        const bool branch_taken_0x4a4eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A4EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4EECu;
        // 0x4a4ef0: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4eec) {
            ctx->pc = 0x4A4ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a4ed8;
        }
    }
    ctx->pc = 0x4A4EF4u;
label_4a4ef4:
    // 0x4a4ef4: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x4a4ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a4ef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a4ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4efc: 0x8fa70074  lw          $a3, 0x74($sp)
    ctx->pc = 0x4a4efcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x4a4f00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4a4f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4f04: 0x8fa80078  lw          $t0, 0x78($sp)
    ctx->pc = 0x4a4f04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4a4f08: 0xc1290d6  jal         func_4A4358
    ctx->pc = 0x4A4F08u;
    SET_GPR_U32(ctx, 31, 0x4A4F10u);
    ctx->pc = 0x4A4F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4F08u;
    // 0x4a4f0c: 0x3c0482d  daddu       $t1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4358u, 0x4A4F08u, 0x4A4F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4F10u;
label_4a4f10:
    // 0x4a4f10: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x4a4f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x4a4f14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4a4f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a4f18: 0xa3a50001  sb          $a1, 0x1($sp)
    ctx->pc = 0x4a4f18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x4a4f1c: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x4a4f1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4f20: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x4a4f20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x4a4f24: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4a4f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4a4f28: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x4a4f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4a4f2c: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x4a4f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4a4f30: 0x6ba7000f  ldl         $a3, 0xF($sp)
    ctx->pc = 0x4a4f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x4a4f34: 0x6fa70008  ldr         $a3, 0x8($sp)
    ctx->pc = 0x4a4f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x4a4f38: 0xb2460007  sdl         $a2, 0x7($s2)
    ctx->pc = 0x4a4f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a4f3c: 0xb6460000  sdr         $a2, 0x0($s2)
    ctx->pc = 0x4a4f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a4f40: 0xb247000f  sdl         $a3, 0xF($s2)
    ctx->pc = 0x4a4f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a4f44: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x4a4f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4a4f48: 0xb6470008  sdr         $a3, 0x8($s2)
    ctx->pc = 0x4a4f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a4f4c: 0x1040ffc6  beqz        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x4A4F4Cu;
    {
        const bool branch_taken_0x4a4f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4F4Cu;
        // 0x4a4f50: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4f4c) {
            ctx->pc = 0x4A4E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a4e68;
        }
    }
    ctx->pc = 0x4A4F54u;
label_4a4f54:
    // 0x4a4f54: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x4a4f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x4a4f58: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4a4f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4f5c: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x4a4f5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x4a4f60: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x4a4f60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x4a4f64: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x4a4f64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x4a4f68: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x4a4f68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x4a4f6c: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x4a4f6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4a4f70: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x4a4f70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4a4f74: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x4a4f74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4a4f78: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4a4f78u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4a4f7c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4a4f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4a4f80: 0x3e00008  jr          $ra
    ctx->pc = 0x4A4F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A4F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4F80u;
        // 0x4a4f84: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A4F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A4F88u;
}
