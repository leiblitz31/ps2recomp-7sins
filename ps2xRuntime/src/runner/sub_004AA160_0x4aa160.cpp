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

// Function: sub_004AA160
// Address: 0x4aa160 - 0x4aa230
void sub_004AA160_0x4aa160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AA160_0x4aa160");
#endif

    switch (ctx->pc) {
        case 0x4aa174u: goto label_4aa174;
        case 0x4aa17cu: goto label_4aa17c;
        default: break;
    }

    ctx->pc = 0x4aa160u;

    // 0x4aa160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4aa160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4aa164: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4aa164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4aa168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aa168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aa16c: 0xc12b9d8  jal         func_4AE760
    ctx->pc = 0x4AA16Cu;
    SET_GPR_U32(ctx, 31, 0x4AA174u);
    ctx->pc = 0x4AE760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE760u, 0x4AA16Cu, 0x4AA174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA174u;
label_4aa174:
    // 0x4aa174: 0xc12b9dc  jal         func_4AE770
    ctx->pc = 0x4AA174u;
    SET_GPR_U32(ctx, 31, 0x4AA17Cu);
    ctx->pc = 0x4AA178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA174u;
    // 0x4aa178: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE770u, 0x4AA174u, 0x4AA17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA17Cu;
label_4aa17c:
    // 0x4aa17c: 0x8f83b890  lw          $v1, -0x4770($gp)
    ctx->pc = 0x4aa17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949008)));
    // 0x4aa180: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4aa180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa184: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x4aa184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4aa188: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA188u;
    {
        const bool branch_taken_0x4aa188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA188u;
        // 0x4aa18c: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa188) {
            ctx->pc = 0x4AA198u;
            goto label_4aa198;
        }
    }
    ctx->pc = 0x4AA190u;
    // 0x4aa190: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4AA190u;
    {
        const bool branch_taken_0x4aa190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA190u;
        // 0x4aa194: 0x432023  subu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa190) {
            ctx->pc = 0x4AA19Cu;
            goto label_4aa19c;
        }
    }
    ctx->pc = 0x4AA198u;
label_4aa198:
    // 0x4aa198: 0x2032023  subu        $a0, $s0, $v1
    ctx->pc = 0x4aa198u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_4aa19c:
    // 0x4aa19c: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AA19Cu;
    {
        const bool branch_taken_0x4aa19c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4AA1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA19Cu;
        // 0x4aa1a0: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa19c) {
            ctx->pc = 0x4AA1B4u;
            goto label_4aa1b4;
        }
    }
    ctx->pc = 0x4AA1A4u;
    // 0x4aa1a4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4aa1a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4aa1a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4aa1a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4aa1ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4AA1ACu;
    {
        const bool branch_taken_0x4aa1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa1ac) {
            ctx->pc = 0x4AA1C8u;
            goto label_4aa1c8;
        }
    }
    ctx->pc = 0x4AA1B4u;
label_4aa1b4:
    // 0x4aa1b4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4aa1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4aa1b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4aa1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4aa1bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4aa1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4aa1c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4aa1c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4aa1c4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4aa1c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4aa1c8:
    // 0x4aa1c8: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AA1C8u;
    {
        const bool branch_taken_0x4aa1c8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4AA1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA1C8u;
        // 0x4aa1cc: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa1c8) {
            ctx->pc = 0x4AA1E0u;
            goto label_4aa1e0;
        }
    }
    ctx->pc = 0x4AA1D0u;
    // 0x4aa1d0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4aa1d0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4aa1d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4aa1d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4aa1d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4AA1D8u;
    {
        const bool branch_taken_0x4aa1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa1d8) {
            ctx->pc = 0x4AA1F4u;
            goto label_4aa1f4;
        }
    }
    ctx->pc = 0x4AA1E0u;
label_4aa1e0:
    // 0x4aa1e0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x4aa1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4aa1e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4aa1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4aa1e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4aa1e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4aa1ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4aa1ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4aa1f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4aa1f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4aa1f4:
    // 0x4aa1f4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x4aa1f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x4aa1f8: 0x8f82b88c  lw          $v0, -0x4774($gp)
    ctx->pc = 0x4aa1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949004)));
    // 0x4aa1fc: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x4aa1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x4aa200: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4aa200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4aa204: 0xaf90b890  sw          $s0, -0x4770($gp)
    ctx->pc = 0x4aa204u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949008), GPR_U32(ctx, 16));
    // 0x4aa208: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4aa208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa20c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aa20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa210: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4aa210u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4aa214: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4aa214u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4aa218: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x4aa218u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x4aa21c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4aa21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4aa220: 0xaf82b88c  sw          $v0, -0x4774($gp)
    ctx->pc = 0x4aa220u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949004), GPR_U32(ctx, 2));
    // 0x4aa224: 0x3e00008  jr          $ra
    ctx->pc = 0x4AA224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AA228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA224u;
        // 0x4aa228: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AA224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AA22Cu;
    // 0x4aa22c: 0x0  nop
    ctx->pc = 0x4aa22cu;
    // NOP
    ctx->pc = 0x4aa230u;
}
