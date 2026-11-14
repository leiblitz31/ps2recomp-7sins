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

// Function: sub_0038D550
// Address: 0x38d550 - 0x38d6c8
void sub_0038D550_0x38d550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D550_0x38d550");
#endif

    switch (ctx->pc) {
        case 0x38d574u: goto label_38d574;
        case 0x38d5a0u: goto label_38d5a0;
        case 0x38d5b0u: goto label_38d5b0;
        case 0x38d5c4u: goto label_38d5c4;
        case 0x38d680u: goto label_38d680;
        case 0x38d6a0u: goto label_38d6a0;
        case 0x38d6acu: goto label_38d6ac;
        default: break;
    }

    ctx->pc = 0x38d550u;

    // 0x38d550: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x38d550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x38d554: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38d554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38d558: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x38d558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x38d55c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x38d55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x38d560: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38d560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d564: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x38d564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x38d568: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x38d568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x38d56c: 0xc103322  jal         func_40CC88
    ctx->pc = 0x38D56Cu;
    SET_GPR_U32(ctx, 31, 0x38D574u);
    ctx->pc = 0x38D570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D56Cu;
    // 0x38d570: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x38D56Cu, 0x38D574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D574u;
label_38d574:
    // 0x38d574: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x38D574u;
    {
        const bool branch_taken_0x38d574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D574u;
        // 0x38d578: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d574) {
            ctx->pc = 0x38D6B0u;
            goto label_38d6b0;
        }
    }
    ctx->pc = 0x38D57Cu;
    // 0x38d57c: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x38d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x38d580: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x38d580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x38d584: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38d584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38d588: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x38d588u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x38d58c: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x38D58Cu;
    {
        const bool branch_taken_0x38d58c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D58Cu;
        // 0x38d590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d58c) {
            ctx->pc = 0x38D68Cu;
            goto label_38d68c;
        }
    }
    ctx->pc = 0x38D594u;
    // 0x38d594: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38d594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d598: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x38D598u;
    SET_GPR_U32(ctx, 31, 0x38D5A0u);
    ctx->pc = 0x38D59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D598u;
    // 0x38d59c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x38D598u, 0x38D5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D5A0u;
label_38d5a0:
    // 0x38d5a0: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x38d5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38d5a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38d5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d5a8: 0xc10480a  jal         func_412028
    ctx->pc = 0x38D5A8u;
    SET_GPR_U32(ctx, 31, 0x38D5B0u);
    ctx->pc = 0x38D5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D5A8u;
    // 0x38d5ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x38D5A8u, 0x38D5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D5B0u;
label_38d5b0:
    // 0x38d5b0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x38d5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38d5b4: 0x1443003f  bne         $v0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x38D5B4u;
    {
        const bool branch_taken_0x38d5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x38D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D5B4u;
        // 0x38d5b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d5b4) {
            ctx->pc = 0x38D6B4u;
            goto label_38d6b4;
        }
    }
    ctx->pc = 0x38D5BCu;
    // 0x38d5bc: 0xc0e35f4  jal         func_38D7D0
    ctx->pc = 0x38D5BCu;
    SET_GPR_U32(ctx, 31, 0x38D5C4u);
    ctx->pc = 0x38D5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D5BCu;
    // 0x38d5c0: 0x93a40016  lbu         $a0, 0x16($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D7D0u, 0x38D5BCu, 0x38D5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D5C4u;
label_38d5c4:
    // 0x38d5c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38d5c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d5c8: 0x12000039  beqz        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x38D5C8u;
    {
        const bool branch_taken_0x38d5c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D5C8u;
        // 0x38d5cc: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d5c8) {
            ctx->pc = 0x38D6B0u;
            goto label_38d6b0;
        }
    }
    ctx->pc = 0x38D5D0u;
    // 0x38d5d0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x38d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x38d5d4: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x38d5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x38d5d8: 0x344202ff  ori         $v0, $v0, 0x2FF
    ctx->pc = 0x38d5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)767);
    // 0x38d5dc: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x38d5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x38d5e0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x38d5e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x38d5e4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x38d5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38d5e8: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x38d5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x38d5ec: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x38d5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38d5f0: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x38d5f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x38d5f4: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x38d5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38d5f8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x38D5F8u;
    {
        const bool branch_taken_0x38d5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D5F8u;
        // 0x38d5fc: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d5f8) {
            ctx->pc = 0x38D628u;
            goto label_38d628;
        }
    }
    ctx->pc = 0x38D600u;
    // 0x38d600: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x38d600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38d604: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38d604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x38d608: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38d608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38d60c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x38d60cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x38d610: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x38d610u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x38d614: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x38d614u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x38d618: 0x46000004  c1          0x4
    ctx->pc = 0x38d618u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x38d61c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38D61Cu;
    {
        const bool branch_taken_0x38d61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D61Cu;
        // 0x38d620: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d61c) {
            ctx->pc = 0x38D62Cu;
            goto label_38d62c;
        }
    }
    ctx->pc = 0x38D624u;
    // 0x38d624: 0x0  nop
    ctx->pc = 0x38d624u;
    // NOP
label_38d628:
    // 0x38d628: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x38d628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38d62c:
    // 0x38d62c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x38d62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x38d630: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x38d630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38d634: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x38d634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38d638: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x38d638u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38d63c: 0x0  nop
    ctx->pc = 0x38d63cu;
    // NOP
    // 0x38d640: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x38D640u;
    {
        const bool branch_taken_0x38d640 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38d640) {
            ctx->pc = 0x38D644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D640u;
            // 0x38d644: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D664u;
            goto label_38d664;
        }
    }
    ctx->pc = 0x38D648u;
    // 0x38d648: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x38d648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38d64c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x38d64cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38d650: 0x0  nop
    ctx->pc = 0x38d650u;
    // NOP
    // 0x38d654: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x38D654u;
    {
        const bool branch_taken_0x38d654 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38d654) {
            ctx->pc = 0x38D658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D654u;
            // 0x38d658: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D664u;
            goto label_38d664;
        }
    }
    ctx->pc = 0x38D65Cu;
    // 0x38d65c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38d660: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x38d660u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
label_38d664:
    // 0x38d664: 0x93a20014  lbu         $v0, 0x14($sp)
    ctx->pc = 0x38d664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x38d668: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38d668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x38d66c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38d66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d670: 0x2484ade8  addiu       $a0, $a0, -0x5218
    ctx->pc = 0x38d670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946280));
    // 0x38d674: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x38d674u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x38d678: 0xc1049e2  jal         func_412788
    ctx->pc = 0x38D678u;
    SET_GPR_U32(ctx, 31, 0x38D680u);
    ctx->pc = 0x38D67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D678u;
    // 0x38d67c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412788u, 0x38D678u, 0x38D680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D680u;
label_38d680:
    // 0x38d680: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x38d680u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x38d684: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x38D684u;
    {
        const bool branch_taken_0x38d684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D684u;
        // 0x38d688: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d684) {
            ctx->pc = 0x38D6B4u;
            goto label_38d6b4;
        }
    }
    ctx->pc = 0x38D68Cu;
label_38d68c:
    // 0x38d68c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38d690: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x38d690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x38d694: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x38d694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x38d698: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x38D698u;
    SET_GPR_U32(ctx, 31, 0x38D6A0u);
    ctx->pc = 0x38D69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D698u;
    // 0x38d69c: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x38D698u, 0x38D6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D6A0u;
label_38d6a0:
    // 0x38d6a0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x38d6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x38d6a4: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x38D6A4u;
    SET_GPR_U32(ctx, 31, 0x38D6ACu);
    ctx->pc = 0x38D6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D6A4u;
    // 0x38d6a8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x38D6A4u, 0x38D6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D6ACu;
label_38d6ac:
    // 0x38d6ac: 0x0  nop
    ctx->pc = 0x38d6acu;
    // NOP
label_38d6b0:
    // 0x38d6b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38d6b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38d6b4:
    // 0x38d6b4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x38d6b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38d6b8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x38d6b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38d6bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x38d6bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38d6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x38D6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D6C0u;
        // 0x38d6c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D6C8u;
}
