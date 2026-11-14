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

// Function: sub_00478CA0
// Address: 0x478ca0 - 0x478df0
void sub_00478CA0_0x478ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00478CA0_0x478ca0");
#endif

    switch (ctx->pc) {
        case 0x478cc4u: goto label_478cc4;
        case 0x478ce8u: goto label_478ce8;
        case 0x478d5cu: goto label_478d5c;
        case 0x478d88u: goto label_478d88;
        case 0x478da8u: goto label_478da8;
        default: break;
    }

    ctx->pc = 0x478ca0u;

label_478ca0:
    // 0x478ca0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x478ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x478ca4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x478ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x478ca8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x478ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x478cac: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x478cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x478cb0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x478cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x478cb4: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x478cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x478cb8: 0xa3a80070  sb          $t0, 0x70($sp)
    ctx->pc = 0x478cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 8));
    // 0x478cbc: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x478CBCu;
    {
        const bool branch_taken_0x478cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x478cbc) {
            ctx->pc = 0x478DACu;
            goto label_478dac;
        }
    }
    ctx->pc = 0x478CC4u;
label_478cc4:
    // 0x478cc4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x478cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x478cc8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x478CC8u;
    {
        const bool branch_taken_0x478cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x478cc8) {
            ctx->pc = 0x478CF0u;
            goto label_478cf0;
        }
    }
    ctx->pc = 0x478CD0u;
    // 0x478cd0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x478cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478cd4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x478cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x478cd8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x478cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x478cdc: 0x83a70070  lb          $a3, 0x70($sp)
    ctx->pc = 0x478cdcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x478ce0: 0xc11e414  jal         func_479050
    ctx->pc = 0x478CE0u;
    SET_GPR_U32(ctx, 31, 0x478CE8u);
    ctx->pc = 0x479050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x479050u, 0x478CE0u, 0x478CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478CE8u;
label_478ce8:
    // 0x478ce8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x478CE8u;
    {
        const bool branch_taken_0x478ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x478ce8) {
            ctx->pc = 0x478DDCu;
            goto label_478ddc;
        }
    }
    ctx->pc = 0x478CF0u;
label_478cf0:
    // 0x478cf0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x478cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x478cf4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x478cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x478cf8: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x478cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x478cfc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x478cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x478d00: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x478d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478d04: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x478d04u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x478d08: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x478d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x478d0c: 0x418c3  sra         $v1, $a0, 3
    ctx->pc = 0x478d0cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
    // 0x478d10: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x478D10u;
    {
        const bool branch_taken_0x478d10 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x478d10) {
            ctx->pc = 0x478D20u;
            goto label_478d20;
        }
    }
    ctx->pc = 0x478D18u;
    // 0x478d18: 0x24820007  addiu       $v0, $a0, 0x7
    ctx->pc = 0x478d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x478d1c: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x478d1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_478d20:
    // 0x478d20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x478d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x478d24: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x478d24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x478d28: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x478D28u;
    {
        const bool branch_taken_0x478d28 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x478d28) {
            ctx->pc = 0x478D38u;
            goto label_478d38;
        }
    }
    ctx->pc = 0x478D30u;
    // 0x478d30: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x478d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x478d34: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x478d34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_478d38:
    // 0x478d38: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x478d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x478d3c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x478d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478d40: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x478d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x478d44: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x478d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x478d48: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x478d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478d4c: 0x2446fff8  addiu       $a2, $v0, -0x8
    ctx->pc = 0x478d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x478d50: 0x83a70070  lb          $a3, 0x70($sp)
    ctx->pc = 0x478d50u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x478d54: 0xc11e37c  jal         func_478DF0
    ctx->pc = 0x478D54u;
    SET_GPR_U32(ctx, 31, 0x478D5Cu);
    ctx->pc = 0x478DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478DF0u, 0x478D54u, 0x478D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478D5Cu;
label_478d5c:
    // 0x478d5c: 0x27a30028  addiu       $v1, $sp, 0x28
    ctx->pc = 0x478d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x478d60: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x478d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x478d64: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x478d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x478d68: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x478d68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x478d6c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x478d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x478d70: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x478d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478d74: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x478d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x478d78: 0xdfa60028  ld          $a2, 0x28($sp)
    ctx->pc = 0x478d78u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x478d7c: 0x83a70070  lb          $a3, 0x70($sp)
    ctx->pc = 0x478d7cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x478d80: 0xc11e434  jal         func_4790D0
    ctx->pc = 0x478D80u;
    SET_GPR_U32(ctx, 31, 0x478D88u);
    ctx->pc = 0x4790D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4790D0u, 0x478D80u, 0x478D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478D88u;
label_478d88:
    // 0x478d88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x478d88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x478d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478d90: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x478d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x478d94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x478d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478d98: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x478d98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x478d9c: 0x83a80070  lb          $t0, 0x70($sp)
    ctx->pc = 0x478d9cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x478da0: 0xc11e328  jal         func_478CA0
    ctx->pc = 0x478DA0u;
    SET_GPR_U32(ctx, 31, 0x478DA8u);
    ctx->pc = 0x478CA0u;
    goto label_478ca0;
    ctx->pc = 0x478DA8u;
label_478da8:
    // 0x478da8: 0xafb00040  sw          $s0, 0x40($sp)
    ctx->pc = 0x478da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 16));
label_478dac:
    // 0x478dac: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x478dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x478db0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x478db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478db4: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x478db4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x478db8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x478db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x478dbc: 0x418c3  sra         $v1, $a0, 3
    ctx->pc = 0x478dbcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
    // 0x478dc0: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x478DC0u;
    {
        const bool branch_taken_0x478dc0 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x478dc0) {
            ctx->pc = 0x478DD0u;
            goto label_478dd0;
        }
    }
    ctx->pc = 0x478DC8u;
    // 0x478dc8: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x478dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x478dcc: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x478dccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_478dd0:
    // 0x478dd0: 0x28610011  slti        $at, $v1, 0x11
    ctx->pc = 0x478dd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x478dd4: 0x1020ffbb  beqz        $at, . + 4 + (-0x45 << 2)
    ctx->pc = 0x478DD4u;
    {
        const bool branch_taken_0x478dd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x478dd4) {
            ctx->pc = 0x478CC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_478cc4;
        }
    }
    ctx->pc = 0x478DDCu;
label_478ddc:
    // 0x478ddc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x478ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478de0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x478de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x478de4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x478de4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x478de8: 0x3e00008  jr          $ra
    ctx->pc = 0x478DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x478DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x478DF0u;
}
