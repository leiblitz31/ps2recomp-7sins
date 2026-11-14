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

// Function: sub_001FEB40
// Address: 0x1feb40 - 0x1fed90
void sub_001FEB40_0x1feb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEB40_0x1feb40");
#endif

    switch (ctx->pc) {
        case 0x1feb80u: goto label_1feb80;
        case 0x1febf0u: goto label_1febf0;
        case 0x1fec18u: goto label_1fec18;
        case 0x1fec5cu: goto label_1fec5c;
        case 0x1fec84u: goto label_1fec84;
        case 0x1fecc8u: goto label_1fecc8;
        case 0x1fecf0u: goto label_1fecf0;
        case 0x1fed34u: goto label_1fed34;
        case 0x1fed5cu: goto label_1fed5c;
        default: break;
    }

    ctx->pc = 0x1feb40u;

    // 0x1feb40: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1feb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1feb44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1feb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1feb48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1feb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1feb4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1feb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1feb50: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1feb50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1feb54: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1feb54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1feb58: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1feb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1feb5c: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x1feb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x1feb60: 0xafa80070  sw          $t0, 0x70($sp)
    ctx->pc = 0x1feb60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 8));
    // 0x1feb64: 0xe7ac0080  swc1        $f12, 0x80($sp)
    ctx->pc = 0x1feb64u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1feb68: 0xe7ad0090  swc1        $f13, 0x90($sp)
    ctx->pc = 0x1feb68u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1feb6c: 0xafa900a0  sw          $t1, 0xA0($sp)
    ctx->pc = 0x1feb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 9));
    // 0x1feb70: 0xafaa00b0  sw          $t2, 0xB0($sp)
    ctx->pc = 0x1feb70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 10));
    // 0x1feb74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1feb74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feb78: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x1FEB78u;
    {
        const bool branch_taken_0x1feb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feb78) {
            ctx->pc = 0x1FED60u;
            goto label_1fed60;
        }
    }
    ctx->pc = 0x1FEB80u;
label_1feb80:
    // 0x1feb80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1feb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1feb84: 0x1223005c  beq         $s1, $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x1FEB84u;
    {
        const bool branch_taken_0x1feb84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1feb84) {
            ctx->pc = 0x1FECF8u;
            goto label_1fecf8;
        }
    }
    ctx->pc = 0x1FEB8Cu;
    // 0x1feb8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1feb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1feb90: 0x1223003e  beq         $s1, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1FEB90u;
    {
        const bool branch_taken_0x1feb90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1feb90) {
            ctx->pc = 0x1FEC8Cu;
            goto label_1fec8c;
        }
    }
    ctx->pc = 0x1FEB98u;
    // 0x1feb98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1feb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1feb9c: 0x12230020  beq         $s1, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1FEB9Cu;
    {
        const bool branch_taken_0x1feb9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1feb9c) {
            ctx->pc = 0x1FEC20u;
            goto label_1fec20;
        }
    }
    ctx->pc = 0x1FEBA4u;
    // 0x1feba4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEBA4u;
    {
        const bool branch_taken_0x1feba4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feba4) {
            ctx->pc = 0x1FEBB4u;
            goto label_1febb4;
        }
    }
    ctx->pc = 0x1FEBACu;
    // 0x1febac: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x1FEBACu;
    {
        const bool branch_taken_0x1febac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1febac) {
            ctx->pc = 0x1FED5Cu;
            goto label_1fed5c;
        }
    }
    ctx->pc = 0x1FEBB4u;
label_1febb4:
    // 0x1febb4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1febb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1febb8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1febb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1febbc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1febbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1febc0: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1febc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1febc4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1febc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1febc8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1febc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1febcc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1febccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1febd0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1febd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1febd4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1febd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1febd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1febd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1febdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1febdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1febe0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1febe0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1febe4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1febe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1febe8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FEBE8u;
    SET_GPR_U32(ctx, 31, 0x1FEBF0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FEBE8u, 0x1FEBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEBF0u;
label_1febf0:
    // 0x1febf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1febf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1febf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1febf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1febf8: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x1febf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1febfc: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x1febfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fec00: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x1fec00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fec04: 0xc7ad0090  lwc1        $f13, 0x90($sp)
    ctx->pc = 0x1fec04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fec08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fec08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fec0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fec0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fec10: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1FEC10u;
    SET_GPR_U32(ctx, 31, 0x1FEC18u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1FEC10u, 0x1FEC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC18u;
label_1fec18:
    // 0x1fec18: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1FEC18u;
    {
        const bool branch_taken_0x1fec18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fec18) {
            ctx->pc = 0x1FED5Cu;
            goto label_1fed5c;
        }
    }
    ctx->pc = 0x1FEC20u;
label_1fec20:
    // 0x1fec20: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1fec20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fec24: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1fec24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fec28: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fec28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fec2c: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1fec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1fec30: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fec30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fec34: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1fec34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fec38: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fec38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fec3c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fec40: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fec40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fec44: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fec44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fec48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fec48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fec4c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1fec4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1fec50: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1fec50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fec54: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FEC54u;
    SET_GPR_U32(ctx, 31, 0x1FEC5Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FEC54u, 0x1FEC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC5Cu;
label_1fec5c:
    // 0x1fec5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fec5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fec60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fec60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fec64: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x1fec64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fec68: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x1fec68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fec6c: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x1fec6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fec70: 0xc7ad0090  lwc1        $f13, 0x90($sp)
    ctx->pc = 0x1fec70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fec74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fec74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fec78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fec78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fec7c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1FEC7Cu;
    SET_GPR_U32(ctx, 31, 0x1FEC84u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1FEC7Cu, 0x1FEC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC84u;
label_1fec84:
    // 0x1fec84: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1FEC84u;
    {
        const bool branch_taken_0x1fec84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fec84) {
            ctx->pc = 0x1FED5Cu;
            goto label_1fed5c;
        }
    }
    ctx->pc = 0x1FEC8Cu;
label_1fec8c:
    // 0x1fec8c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1fec8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fec90: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1fec90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fec94: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fec94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fec98: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1fec98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1fec9c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fec9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1feca0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1feca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1feca4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1feca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1feca8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1feca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fecac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fecacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fecb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fecb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fecb8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x1fecb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fecbc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1fecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fecc0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FECC0u;
    SET_GPR_U32(ctx, 31, 0x1FECC8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FECC0u, 0x1FECC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FECC8u;
label_1fecc8:
    // 0x1fecc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fecc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feccc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fecccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fecd0: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x1fecd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fecd4: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x1fecd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fecd8: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x1fecd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fecdc: 0xc7ad0090  lwc1        $f13, 0x90($sp)
    ctx->pc = 0x1fecdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fece0: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x1fece0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1fece4: 0x8fa900b0  lw          $t1, 0xB0($sp)
    ctx->pc = 0x1fece4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fece8: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1FECE8u;
    SET_GPR_U32(ctx, 31, 0x1FECF0u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1FECE8u, 0x1FECF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FECF0u;
label_1fecf0:
    // 0x1fecf0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1FECF0u;
    {
        const bool branch_taken_0x1fecf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fecf0) {
            ctx->pc = 0x1FED5Cu;
            goto label_1fed5c;
        }
    }
    ctx->pc = 0x1FECF8u;
label_1fecf8:
    // 0x1fecf8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1fecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fecfc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1fecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fed00: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fed00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fed04: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1fed04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1fed08: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fed08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fed0c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1fed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fed10: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fed10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fed14: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fed14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fed18: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fed18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fed1c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fed20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fed20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fed24: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x1fed24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1fed28: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1fed28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fed2c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FED2Cu;
    SET_GPR_U32(ctx, 31, 0x1FED34u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FED2Cu, 0x1FED34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FED34u;
label_1fed34:
    // 0x1fed34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fed34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fed38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fed38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fed3c: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x1fed3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fed40: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x1fed40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fed44: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x1fed44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fed48: 0xc7ad0090  lwc1        $f13, 0x90($sp)
    ctx->pc = 0x1fed48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fed4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fed4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fed50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fed50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fed54: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1FED54u;
    SET_GPR_U32(ctx, 31, 0x1FED5Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1FED54u, 0x1FED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FED5Cu;
label_1fed5c:
    // 0x1fed5c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fed5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1fed60:
    // 0x1fed60: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x1fed60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1fed64: 0x1460ff86  bnez        $v1, . + 4 + (-0x7A << 2)
    ctx->pc = 0x1FED64u;
    {
        const bool branch_taken_0x1fed64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fed64) {
            ctx->pc = 0x1FEB80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1feb80;
        }
    }
    ctx->pc = 0x1FED6Cu;
    // 0x1fed6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fed6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fed70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fed70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fed74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fed74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fed78: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x1fed78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1fed7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FED7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FED7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FED84u;
    // 0x1fed84: 0x0  nop
    ctx->pc = 0x1fed84u;
    // NOP
    // 0x1fed88: 0x0  nop
    ctx->pc = 0x1fed88u;
    // NOP
    // 0x1fed8c: 0x0  nop
    ctx->pc = 0x1fed8cu;
    // NOP
    ctx->pc = 0x1fed90u;
}
