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

// Function: sub_00418020
// Address: 0x418020 - 0x418130
void sub_00418020_0x418020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418020_0x418020");
#endif

    switch (ctx->pc) {
        case 0x418054u: goto label_418054;
        case 0x418110u: goto label_418110;
        case 0x41811cu: goto label_41811c;
        default: break;
    }

    ctx->pc = 0x418020u;

    // 0x418020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x418020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x418024: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x418024u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x418028: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x418028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x41802c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41802cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x418030: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x418030u;
    {
        const bool branch_taken_0x418030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x418034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418030u;
        // 0x418034: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418030) {
            ctx->pc = 0x4180F4u;
            goto label_4180f4;
        }
    }
    ctx->pc = 0x418038u;
    // 0x418038: 0x10a0002f  beqz        $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x418038u;
    {
        const bool branch_taken_0x418038 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x41803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418038u;
        // 0x41803c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418038) {
            ctx->pc = 0x4180F8u;
            goto label_4180f8;
        }
    }
    ctx->pc = 0x418040u;
    // 0x418040: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x418040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x418044: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x418044u;
    {
        const bool branch_taken_0x418044 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x418048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418044u;
        // 0x418048: 0xae050014  sw          $a1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418044) {
            ctx->pc = 0x418054u;
            goto label_418054;
        }
    }
    ctx->pc = 0x41804Cu;
    // 0x41804c: 0xc106794  jal         func_419E50
    ctx->pc = 0x41804Cu;
    SET_GPR_U32(ctx, 31, 0x418054u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x41804Cu, 0x418054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418054u;
label_418054:
    // 0x418054: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x418054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x418058: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x418058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x41805c: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x41805cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x418060: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x418060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x418064: 0xc446001c  lwc1        $f6, 0x1C($v0)
    ctx->pc = 0x418064u;
    { uint32_t bits = FAST_READ32(0x61E89Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x418068: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x418068u;
    {
        const bool branch_taken_0x418068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x41806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418068u;
        // 0x41806c: 0xc4450018  lwc1        $f5, 0x18($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x418068) {
            ctx->pc = 0x418088u;
            goto label_418088;
        }
    }
    ctx->pc = 0x418070u;
    // 0x418070: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x418070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x418074: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x418074u;
    {
        const bool branch_taken_0x418074 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x418074) {
            ctx->pc = 0x418088u;
            goto label_418088;
        }
    }
    ctx->pc = 0x41807Cu;
    // 0x41807c: 0xc6040084  lwc1        $f4, 0x84($s0)
    ctx->pc = 0x41807cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x418080: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x418080u;
    {
        const bool branch_taken_0x418080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x418084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418080u;
        // 0x418084: 0xc6020080  lwc1        $f2, 0x80($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x418080) {
            ctx->pc = 0x4180A0u;
            goto label_4180a0;
        }
    }
    ctx->pc = 0x418088u;
label_418088:
    // 0x418088: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x418088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x41808c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x41808cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x418090: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x418090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x418094: 0xc6020080  lwc1        $f2, 0x80($s0)
    ctx->pc = 0x418094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x418098: 0x46010103  div.s       $f4, $f0, $f1
    ctx->pc = 0x418098u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x41809c: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x41809cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_4180a0:
    // 0x4180a0: 0x46053041  sub.s       $f1, $f6, $f5
    ctx->pc = 0x4180a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x4180a4: 0xc7808048  lwc1        $f0, -0x7FB8($gp)
    ctx->pc = 0x4180a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4180a8: 0x460220c1  sub.s       $f3, $f4, $f2
    ctx->pc = 0x4180a8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x4180ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4180acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4180b0: 0x46022080  add.s       $f2, $f4, $f2
    ctx->pc = 0x4180b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x4180b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4180b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4180b8: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x4180b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4180bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4180bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4180c0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x4180c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4180c4: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x4180c4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x4180c8: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x4180c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4180cc: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x4180ccu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x4180d0: 0x46053041  sub.s       $f1, $f6, $f5
    ctx->pc = 0x4180d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x4180d4: 0x46053000  add.s       $f0, $f6, $f5
    ctx->pc = 0x4180d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x4180d8: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x4180d8u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x4180dc: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x4180dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x4180e0: 0xe601008c  swc1        $f1, 0x8C($s0)
    ctx->pc = 0x4180e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x4180e4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x4180e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x4180e8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x4180e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x4180ec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4180ECu;
    {
        const bool branch_taken_0x4180ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4180F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4180ECu;
        // 0x4180f0: 0xe6000090  swc1        $f0, 0x90($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4180ec) {
            ctx->pc = 0x418120u;
            goto label_418120;
        }
    }
    ctx->pc = 0x4180F4u;
label_4180f4:
    // 0x4180f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4180f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4180f8:
    // 0x4180f8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4180f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4180fc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4180fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x418100: 0x24a50648  addiu       $a1, $a1, 0x648
    ctx->pc = 0x418100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1608));
    // 0x418104: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x418104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x418108: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x418108u;
    SET_GPR_U32(ctx, 31, 0x418110u);
    ctx->pc = 0x41810Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418108u;
    // 0x41810c: 0x34840003  ori         $a0, $a0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x418108u, 0x418110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418110u;
label_418110:
    // 0x418110: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x418110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418114: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x418114u;
    SET_GPR_U32(ctx, 31, 0x41811Cu);
    ctx->pc = 0x418118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418114u;
    // 0x418118: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x418114u, 0x41811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41811Cu;
label_41811c:
    // 0x41811c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x41811cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418120:
    // 0x418120: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x418120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x418124: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x418124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x418128: 0x3e00008  jr          $ra
    ctx->pc = 0x418128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418128u;
        // 0x41812c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x418130u;
}
