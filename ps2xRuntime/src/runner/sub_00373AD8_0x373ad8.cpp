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

// Function: sub_00373AD8
// Address: 0x373ad8 - 0x373c58
void sub_00373AD8_0x373ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373AD8_0x373ad8");
#endif

    switch (ctx->pc) {
        case 0x373ba0u: goto label_373ba0;
        case 0x373c34u: goto label_373c34;
        case 0x373c40u: goto label_373c40;
        default: break;
    }

    ctx->pc = 0x373ad8u;

label_373ad8:
    // 0x373ad8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x373ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x373adc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x373adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x373ae0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x373ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x373ae4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x373ae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373ae8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x373ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x373aec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x373aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x373af0: 0x463002d  bgezl       $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x373AF0u;
    {
        const bool branch_taken_0x373af0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x373af0) {
            ctx->pc = 0x373AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x373AF0u;
            // 0x373af4: 0xc4a50008  lwc1        $f5, 0x8($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x373BA8u;
            goto label_373ba8;
        }
    }
    ctx->pc = 0x373AF8u;
    // 0x373af8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x373af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x373afc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x373afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373b00: 0x8c50c438  lw          $s0, -0x3BC8($v0)
    ctx->pc = 0x373b00u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61C438u));
    // 0x373b04: 0x26230048  addiu       $v1, $s1, 0x48
    ctx->pc = 0x373b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x373b08: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x373b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x373b0c: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x373b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x373b10: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x373b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x373b14: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x373b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x373b18: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x373b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373b1c: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x373b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x373b20: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x373b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373b24: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x373b24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x373b28: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x373b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x373b2c: 0xe602001c  swc1        $f2, 0x1C($s0)
    ctx->pc = 0x373b2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x373b30: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x373b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373b34: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x373b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x373b38: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x373b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373b3c: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x373b3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x373b40: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x373b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373b44: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x373b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x373b48: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x373b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373b4c: 0xe6010044  swc1        $f1, 0x44($s0)
    ctx->pc = 0x373b4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x373b50: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x373b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373b54: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x373b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x373b58: 0xc6210048  lwc1        $f1, 0x48($s1)
    ctx->pc = 0x373b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373b5c: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x373b5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x373b60: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x373b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373b64: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x373b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x373b68: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x373b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373b6c: 0xe601003c  swc1        $f1, 0x3C($s0)
    ctx->pc = 0x373b6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x373b70: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x373b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373b74: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x373b74u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x373b78: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x373b78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x373b7c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x373b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373b80: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x373b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373b84: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x373b84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x373b88: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x373b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x373b8c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x373b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373b90: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x373b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373b94: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x373b94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x373b98: 0xc104d24  jal         func_413490
    ctx->pc = 0x373B98u;
    SET_GPR_U32(ctx, 31, 0x373BA0u);
    ctx->pc = 0x373B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373B98u;
    // 0x373b9c: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x373B98u, 0x373BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373BA0u;
label_373ba0:
    // 0x373ba0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x373BA0u;
    {
        const bool branch_taken_0x373ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373BA0u;
        // 0x373ba4: 0xe600004c  swc1        $f0, 0x4C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x373ba0) {
            ctx->pc = 0x373C40u;
            goto label_373c40;
        }
    }
    ctx->pc = 0x373BA8u;
label_373ba8:
    // 0x373ba8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x373ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373bac: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x373bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373bb0: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x373bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x373bb4: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x373bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x373bb8: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x373bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x373bbc: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x373bbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x373bc0: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x373bc0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x373bc4: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x373bc4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x373bc8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x373bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x373bcc: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x373bccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x373bd0: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x373bd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x373bd4: 0xc6260004  lwc1        $f6, 0x4($s1)
    ctx->pc = 0x373bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x373bd8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x373bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x373bdc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x373bdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x373be0: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x373be0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x373be4: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x373be4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x373be8: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x373be8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x373bec: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x373BECu;
    {
        const bool branch_taken_0x373bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x373BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373BECu;
        // 0x373bf0: 0xe7a50008  swc1        $f5, 0x8($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x373bec) {
            ctx->pc = 0x373C00u;
            goto label_373c00;
        }
    }
    ctx->pc = 0x373BF4u;
    // 0x373bf4: 0xe7a6002c  swc1        $f6, 0x2C($sp)
    ctx->pc = 0x373bf4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x373bf8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x373BF8u;
    {
        const bool branch_taken_0x373bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373BF8u;
        // 0x373bfc: 0xe7a60000  swc1        $f6, 0x0($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x373bf8) {
            ctx->pc = 0x373C28u;
            goto label_373c28;
        }
    }
    ctx->pc = 0x373C00u;
label_373c00:
    // 0x373c00: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x373c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x373c04: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x373C04u;
    {
        const bool branch_taken_0x373c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x373C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373C04u;
        // 0x373c08: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373c04) {
            ctx->pc = 0x373C18u;
            goto label_373c18;
        }
    }
    ctx->pc = 0x373C0Cu;
    // 0x373c0c: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x373c0cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x373c10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x373C10u;
    {
        const bool branch_taken_0x373c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373C10u;
        // 0x373c14: 0xe7a60004  swc1        $f6, 0x4($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x373c10) {
            ctx->pc = 0x373C28u;
            goto label_373c28;
        }
    }
    ctx->pc = 0x373C18u;
label_373c18:
    // 0x373c18: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x373C18u;
    {
        const bool branch_taken_0x373c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x373c18) {
            ctx->pc = 0x373C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x373C18u;
            // 0x373c1c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x373C2Cu;
            goto label_373c2c;
        }
    }
    ctx->pc = 0x373C20u;
    // 0x373c20: 0xe7a60034  swc1        $f6, 0x34($sp)
    ctx->pc = 0x373c20u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x373c24: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x373c24u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_373c28:
    // 0x373c28: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x373c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_373c2c:
    // 0x373c2c: 0xc0dceb6  jal         func_373AD8
    ctx->pc = 0x373C2Cu;
    SET_GPR_U32(ctx, 31, 0x373C34u);
    ctx->pc = 0x373C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373C2Cu;
    // 0x373c30: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373AD8u;
    goto label_373ad8;
    ctx->pc = 0x373C34u;
label_373c34:
    // 0x373c34: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x373c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x373c38: 0xc0dceb6  jal         func_373AD8
    ctx->pc = 0x373C38u;
    SET_GPR_U32(ctx, 31, 0x373C40u);
    ctx->pc = 0x373C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373C38u;
    // 0x373c3c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373AD8u;
    goto label_373ad8;
    ctx->pc = 0x373C40u;
label_373c40:
    // 0x373c40: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x373c40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373c44: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x373c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x373c48: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x373c48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x373c4c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x373c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x373c50: 0x3e00008  jr          $ra
    ctx->pc = 0x373C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373C50u;
        // 0x373c54: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373C58u;
}
