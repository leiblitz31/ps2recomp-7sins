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

// Function: sub_0035B590
// Address: 0x35b590 - 0x35d478
void sub_0035B590_0x35b590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B590_0x35b590");
#endif

    switch (ctx->pc) {
        case 0x35b618u: goto label_35b618;
        case 0x35b644u: goto label_35b644;
        case 0x35b690u: goto label_35b690;
        case 0x35b6b8u: goto label_35b6b8;
        case 0x35b730u: goto label_35b730;
        case 0x35b85cu: goto label_35b85c;
        case 0x35b918u: goto label_35b918;
        case 0x35b934u: goto label_35b934;
        case 0x35b984u: goto label_35b984;
        case 0x35b9a8u: goto label_35b9a8;
        case 0x35ba00u: goto label_35ba00;
        case 0x35ba28u: goto label_35ba28;
        case 0x35ba84u: goto label_35ba84;
        case 0x35baa8u: goto label_35baa8;
        case 0x35bae8u: goto label_35bae8;
        case 0x35bb18u: goto label_35bb18;
        case 0x35bc6cu: goto label_35bc6c;
        case 0x35bdc0u: goto label_35bdc0;
        case 0x35bf18u: goto label_35bf18;
        case 0x35bf54u: goto label_35bf54;
        case 0x35bf78u: goto label_35bf78;
        case 0x35c028u: goto label_35c028;
        case 0x35c088u: goto label_35c088;
        case 0x35c0b0u: goto label_35c0b0;
        case 0x35c14cu: goto label_35c14c;
        case 0x35c170u: goto label_35c170;
        case 0x35c210u: goto label_35c210;
        case 0x35c238u: goto label_35c238;
        case 0x35c2d4u: goto label_35c2d4;
        case 0x35c434u: goto label_35c434;
        case 0x35c578u: goto label_35c578;
        case 0x35c5a8u: goto label_35c5a8;
        case 0x35c6fcu: goto label_35c6fc;
        case 0x35c850u: goto label_35c850;
        case 0x35c9a4u: goto label_35c9a4;
        case 0x35cb0cu: goto label_35cb0c;
        case 0x35cb54u: goto label_35cb54;
        case 0x35cb78u: goto label_35cb78;
        case 0x35ced0u: goto label_35ced0;
        case 0x35d240u: goto label_35d240;
        case 0x35d248u: goto label_35d248;
        case 0x35d25cu: goto label_35d25c;
        default: break;
    }

    ctx->pc = 0x35b590u;

    // 0x35b590: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x35b590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x35b594: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x35b594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x35b598: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x35b598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35b59c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x35b59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x35b5a0: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x35b5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x35b5a4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x35b5a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b5a8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x35b5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x35b5ac: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x35b5acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b5b0: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x35b5b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x35b5b4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x35b5b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b5b8: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x35b5b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x35b5bc: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x35b5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x35b5c0: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x35b5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x35b5c4: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x35b5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x35b5c8: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x35b5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x35b5cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x35b5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x35b5d0: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x35b5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x35b5d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x35b5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x35b5d8: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x35b5d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x35b5dc: 0x8d020038  lw          $v0, 0x38($t0)
    ctx->pc = 0x35b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x35b5e0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x35b5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x35b5e4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x35b5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35b5e8: 0x8d1e0008  lw          $fp, 0x8($t0)
    ctx->pc = 0x35b5e8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x35b5ec: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x35b5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x35b5f0: 0xc5000070  lwc1        $f0, 0x70($t0)
    ctx->pc = 0x35b5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35b5f4: 0xc5010074  lwc1        $f1, 0x74($t0)
    ctx->pc = 0x35b5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35b5f8: 0x46020542  mul.s       $f21, $f0, $f2
    ctx->pc = 0x35b5f8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x35b5fc: 0x8d100004  lw          $s0, 0x4($t0)
    ctx->pc = 0x35b5fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x35b600: 0x46020d82  mul.s       $f22, $f1, $f2
    ctx->pc = 0x35b600u;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x35b604: 0x8d140034  lw          $s4, 0x34($t0)
    ctx->pc = 0x35b604u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x35b608: 0x17c30707  bne         $fp, $v1, . + 4 + (0x707 << 2)
    ctx->pc = 0x35B608u;
    {
        const bool branch_taken_0x35b608 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        ctx->pc = 0x35B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B608u;
        // 0x35b60c: 0x8c920000  lw          $s2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b608) {
            ctx->pc = 0x35D228u;
            goto label_35d228;
        }
    }
    ctx->pc = 0x35B610u;
    // 0x35b610: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x35B610u;
    SET_GPR_U32(ctx, 31, 0x35B618u);
    ctx->pc = 0x35B614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B610u;
    // 0x35b614: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x35B610u, 0x35B618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B618u;
label_35b618:
    // 0x35b618: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35b618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35b61c: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x35b61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x35b620: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35b620u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x35b624: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x35b624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x35b628: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x35B628u;
    {
        const bool branch_taken_0x35b628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B628u;
        // 0x35b62c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b628) {
            ctx->pc = 0x35B660u;
            goto label_35b660;
        }
    }
    ctx->pc = 0x35B630u;
    // 0x35b630: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x35b630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35b634: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35b634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35b638: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35b638u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x35b63c: 0xf  sync
    ctx->pc = 0x35b63cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35b640: 0x40f  sync.p
    ctx->pc = 0x35b640u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35b644:
    // 0x35b644: 0x0  nop
    ctx->pc = 0x35b644u;
    // NOP
    // 0x35b648: 0x0  nop
    ctx->pc = 0x35b648u;
    // NOP
    // 0x35b64c: 0x0  nop
    ctx->pc = 0x35b64cu;
    // NOP
    // 0x35b650: 0x0  nop
    ctx->pc = 0x35b650u;
    // NOP
    // 0x35b654: 0x0  nop
    ctx->pc = 0x35b654u;
    // NOP
    // 0x35b658: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35B658u;
    {
        const bool branch_taken_0x35b658 = (false);
        if (branch_taken_0x35b658) {
            ctx->pc = 0x35B644u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b644;
        }
    }
    ctx->pc = 0x35B660u;
label_35b660:
    // 0x35b660: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35b660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35b664: 0x2a2a00c0  slti        $t2, $s1, 0xC0
    ctx->pc = 0x35b664u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)192) ? 1 : 0);
    // 0x35b668: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35b668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35b66c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35b670: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35b670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35b674: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x35B674u;
    {
        const bool branch_taken_0x35b674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B674u;
        // 0x35b678: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b674) {
            ctx->pc = 0x35B6D4u;
            goto label_35b6d4;
        }
    }
    ctx->pc = 0x35B67Cu;
    // 0x35b67c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x35b67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35b680: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35b680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35b684: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35b684u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x35b688: 0xf  sync
    ctx->pc = 0x35b688u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35b68c: 0x40f  sync.p
    ctx->pc = 0x35b68cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35b690:
    // 0x35b690: 0x0  nop
    ctx->pc = 0x35b690u;
    // NOP
    // 0x35b694: 0x0  nop
    ctx->pc = 0x35b694u;
    // NOP
    // 0x35b698: 0x0  nop
    ctx->pc = 0x35b698u;
    // NOP
    // 0x35b69c: 0x0  nop
    ctx->pc = 0x35b69cu;
    // NOP
    // 0x35b6a0: 0x0  nop
    ctx->pc = 0x35b6a0u;
    // NOP
    // 0x35b6a4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35B6A4u;
    {
        const bool branch_taken_0x35b6a4 = (false);
        if (branch_taken_0x35b6a4) {
            ctx->pc = 0x35B690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b690;
        }
    }
    ctx->pc = 0x35B6ACu;
    // 0x35b6ac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35b6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35b6b0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35b6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35b6b4: 0x0  nop
    ctx->pc = 0x35b6b4u;
    // NOP
label_35b6b8:
    // 0x35b6b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35b6bc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35b6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35b6c0: 0x0  nop
    ctx->pc = 0x35b6c0u;
    // NOP
    // 0x35b6c4: 0x0  nop
    ctx->pc = 0x35b6c4u;
    // NOP
    // 0x35b6c8: 0x0  nop
    ctx->pc = 0x35b6c8u;
    // NOP
    // 0x35b6cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35B6CCu;
    {
        const bool branch_taken_0x35b6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b6cc) {
            ctx->pc = 0x35B6B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b6b8;
        }
    }
    ctx->pc = 0x35B6D4u;
label_35b6d4:
    // 0x35b6d4: 0x3c097000  lui         $t1, 0x7000
    ctx->pc = 0x35b6d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
    // 0x35b6d8: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x35b6d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x35b6dc: 0x35293f00  ori         $t1, $t1, 0x3F00
    ctx->pc = 0x35b6dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16128);
    // 0x35b6e0: 0x35083f10  ori         $t0, $t0, 0x3F10
    ctx->pc = 0x35b6e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16144);
    // 0x35b6e4: 0x6aa40007  ldl         $a0, 0x7($s5)
    ctx->pc = 0x35b6e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x35b6e8: 0x6ea40000  ldr         $a0, 0x0($s5)
    ctx->pc = 0x35b6e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x35b6ec: 0x8ea70008  lw          $a3, 0x8($s5)
    ctx->pc = 0x35b6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x35b6f0: 0xb1240007  sdl         $a0, 0x7($t1)
    ctx->pc = 0x35b6f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35b6f4: 0xb5240000  sdr         $a0, 0x0($t1)
    ctx->pc = 0x35b6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35b6f8: 0x3c0e7000  lui         $t6, 0x7000
    ctx->pc = 0x35b6f8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)28672 << 16));
    // 0x35b6fc: 0xad270008  sw          $a3, 0x8($t1)
    ctx->pc = 0x35b6fcu;
    runtime->Store32(rdram, ctx, 0x70003F08u, GPR_U32(ctx, 7)); // MMIO: 0x70003f08
    // 0x35b700: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x35b700u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x35b704: 0x6ac40007  ldl         $a0, 0x7($s6)
    ctx->pc = 0x35b704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x35b708: 0x6ec40000  ldr         $a0, 0x0($s6)
    ctx->pc = 0x35b708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x35b70c: 0x8ec70008  lw          $a3, 0x8($s6)
    ctx->pc = 0x35b70cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x35b710: 0xb1040007  sdl         $a0, 0x7($t0)
    ctx->pc = 0x35b710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35b714: 0xb5040000  sdr         $a0, 0x0($t0)
    ctx->pc = 0x35b714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35b718: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x35b718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x35b71c: 0xad070008  sw          $a3, 0x8($t0)
    ctx->pc = 0x35b71cu;
    runtime->Store32(rdram, ctx, 0x70003F18u, GPR_U32(ctx, 7)); // MMIO: 0x70003f18
    // 0x35b720: 0x34c63f30  ori         $a2, $a2, 0x3F30
    ctx->pc = 0x35b720u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16176);
    // 0x35b724: 0x34a53f40  ori         $a1, $a1, 0x3F40
    ctx->pc = 0x35b724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16192);
    // 0x35b728: 0x35ce3f20  ori         $t6, $t6, 0x3F20
    ctx->pc = 0x35b728u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)16160);
    // 0x35b72c: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x35b72cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
label_35b730:
    // 0x35b730: 0x42000039  di
    ctx->pc = 0x35b730u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35b734: 0x40f  sync.p
    ctx->pc = 0x35b734u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35b738: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35b738u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35b73c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x35b73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x35b740: 0x0  nop
    ctx->pc = 0x35b740u;
    // NOP
    // 0x35b744: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35B744u;
    {
        const bool branch_taken_0x35b744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b744) {
            ctx->pc = 0x35B730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b730;
        }
    }
    ctx->pc = 0x35B74Cu;
    // 0x35b74c: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x35b74cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x35b750: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x35b750u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x35b754: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x35b754u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x35b758: 0x4a0002ff  vnop
    ctx->pc = 0x35b758u;
    // NOP operation, no action needed for VU0
    // 0x35b75c: 0x4a0002ff  vnop
    ctx->pc = 0x35b75cu;
    // NOP operation, no action needed for VU0
    // 0x35b760: 0x4b0002a2  vaddi.x     $vf10, $vf0, $I
    ctx->pc = 0x35b760u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35b764: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x35b764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x35b768: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x35b768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x35b76c: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x35b76cu;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x35b770: 0x4a0002ff  vnop
    ctx->pc = 0x35b770u;
    // NOP operation, no action needed for VU0
    // 0x35b774: 0x4a0002ff  vnop
    ctx->pc = 0x35b774u;
    // NOP operation, no action needed for VU0
    // 0x35b778: 0x4a8002a2  vaddi.y     $vf10, $vf0, $I
    ctx->pc = 0x35b778u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35b77c: 0x3c044009  lui         $a0, 0x4009
    ctx->pc = 0x35b77cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16393 << 16));
    // 0x35b780: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x35b780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x35b784: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x35b784u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x35b788: 0x4a0002ff  vnop
    ctx->pc = 0x35b788u;
    // NOP operation, no action needed for VU0
    // 0x35b78c: 0x4a0002ff  vnop
    ctx->pc = 0x35b78cu;
    // NOP operation, no action needed for VU0
    // 0x35b790: 0x4a4002a2  vaddi.z     $vf10, $vf0, $I
    ctx->pc = 0x35b790u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35b794: 0x3c04c049  lui         $a0, 0xC049
    ctx->pc = 0x35b794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49225 << 16));
    // 0x35b798: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x35b798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x35b79c: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x35b79cu;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x35b7a0: 0x4a0002ff  vnop
    ctx->pc = 0x35b7a0u;
    // NOP operation, no action needed for VU0
    // 0x35b7a4: 0x4a0002ff  vnop
    ctx->pc = 0x35b7a4u;
    // NOP operation, no action needed for VU0
    // 0x35b7a8: 0x4b0002e2  vaddi.x     $vf11, $vf0, $I
    ctx->pc = 0x35b7a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x35b7ac: 0x3c04c084  lui         $a0, 0xC084
    ctx->pc = 0x35b7acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49284 << 16));
    // 0x35b7b0: 0x348487ed  ori         $a0, $a0, 0x87ED
    ctx->pc = 0x35b7b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34797);
    // 0x35b7b4: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x35b7b4u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x35b7b8: 0x4a0002ff  vnop
    ctx->pc = 0x35b7b8u;
    // NOP operation, no action needed for VU0
    // 0x35b7bc: 0x4a0002ff  vnop
    ctx->pc = 0x35b7bcu;
    // NOP operation, no action needed for VU0
    // 0x35b7c0: 0x4a8002e2  vaddi.y     $vf11, $vf0, $I
    ctx->pc = 0x35b7c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x35b7c4: 0x3c04b94f  lui         $a0, 0xB94F
    ctx->pc = 0x35b7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47439 << 16));
    // 0x35b7c8: 0x3484b21f  ori         $a0, $a0, 0xB21F
    ctx->pc = 0x35b7c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45599);
    // 0x35b7cc: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x35b7ccu;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x35b7d0: 0x4a0002ff  vnop
    ctx->pc = 0x35b7d0u;
    // NOP operation, no action needed for VU0
    // 0x35b7d4: 0x4a0002ff  vnop
    ctx->pc = 0x35b7d4u;
    // NOP operation, no action needed for VU0
    // 0x35b7d8: 0x4a4002e2  vaddi.z     $vf11, $vf0, $I
    ctx->pc = 0x35b7d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x35b7dc: 0x3c04be2a  lui         $a0, 0xBE2A
    ctx->pc = 0x35b7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48682 << 16));
    // 0x35b7e0: 0x3484aaa4  ori         $a0, $a0, 0xAAA4
    ctx->pc = 0x35b7e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43684);
    // 0x35b7e4: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x35b7e4u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x35b7e8: 0x4a0002ff  vnop
    ctx->pc = 0x35b7e8u;
    // NOP operation, no action needed for VU0
    // 0x35b7ec: 0x4a0002ff  vnop
    ctx->pc = 0x35b7ecu;
    // NOP operation, no action needed for VU0
    // 0x35b7f0: 0x4b000322  vaddi.x     $vf12, $vf0, $I
    ctx->pc = 0x35b7f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x35b7f4: 0x3c043c08  lui         $a0, 0x3C08
    ctx->pc = 0x35b7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15368 << 16));
    // 0x35b7f8: 0x3484873e  ori         $a0, $a0, 0x873E
    ctx->pc = 0x35b7f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34622);
    // 0x35b7fc: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x35b7fcu;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x35b800: 0x4a0002ff  vnop
    ctx->pc = 0x35b800u;
    // NOP operation, no action needed for VU0
    // 0x35b804: 0x4a0002ff  vnop
    ctx->pc = 0x35b804u;
    // NOP operation, no action needed for VU0
    // 0x35b808: 0x4a800322  vaddi.y     $vf12, $vf0, $I
    ctx->pc = 0x35b808u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x35b80c: 0x3c04362e  lui         $a0, 0x362E
    ctx->pc = 0x35b80cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13870 << 16));
    // 0x35b810: 0x34849c14  ori         $a0, $a0, 0x9C14
    ctx->pc = 0x35b810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39956);
    // 0x35b814: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x35b814u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x35b818: 0x4a0002ff  vnop
    ctx->pc = 0x35b818u;
    // NOP operation, no action needed for VU0
    // 0x35b81c: 0x4a0002ff  vnop
    ctx->pc = 0x35b81cu;
    // NOP operation, no action needed for VU0
    // 0x35b820: 0x4a400322  vaddi.z     $vf12, $vf0, $I
    ctx->pc = 0x35b820u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x35b824: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x35b824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x35b828: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x35b828u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x35b82c: 0x4a0002ff  vnop
    ctx->pc = 0x35b82cu;
    // NOP operation, no action needed for VU0
    // 0x35b830: 0x4a0002ff  vnop
    ctx->pc = 0x35b830u;
    // NOP operation, no action needed for VU0
    // 0x35b834: 0x4b000362  vaddi.x     $vf13, $vf0, $I
    ctx->pc = 0x35b834u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x35b838: 0x42000038  ei
    ctx->pc = 0x35b838u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35b83c: 0xe4d5000c  swc1        $f21, 0xC($a2)
    ctx->pc = 0x35b83cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x35b840: 0xe4d50000  swc1        $f21, 0x0($a2)
    ctx->pc = 0x35b840u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x35b844: 0xe4d50008  swc1        $f21, 0x8($a2)
    ctx->pc = 0x35b844u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x35b848: 0xe4d50004  swc1        $f21, 0x4($a2)
    ctx->pc = 0x35b848u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x35b84c: 0xe4b60000  swc1        $f22, 0x0($a1)
    ctx->pc = 0x35b84cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x35b850: 0xe4b6000c  swc1        $f22, 0xC($a1)
    ctx->pc = 0x35b850u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x35b854: 0xe4b60008  swc1        $f22, 0x8($a1)
    ctx->pc = 0x35b854u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x35b858: 0xe4b60004  swc1        $f22, 0x4($a1)
    ctx->pc = 0x35b858u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_35b85c:
    // 0x35b85c: 0x42000039  di
    ctx->pc = 0x35b85cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35b860: 0x40f  sync.p
    ctx->pc = 0x35b860u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35b864: 0x40046000  mfc0        $a0, Status
    ctx->pc = 0x35b864u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_status);
    // 0x35b868: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x35b868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x35b86c: 0x0  nop
    ctx->pc = 0x35b86cu;
    // NOP
    // 0x35b870: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35B870u;
    {
        const bool branch_taken_0x35b870 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b870) {
            ctx->pc = 0x35B85Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b85c;
        }
    }
    ctx->pc = 0x35B878u;
    // 0x35b878: 0xd9220000  lqc2        $vf2, 0x0($t1)
    ctx->pc = 0x35b878u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x35b87c: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x35b87cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35b880: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x35b880u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35b884: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x35b884u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35b888: 0x4a0002ff  vnop
    ctx->pc = 0x35b888u;
    // NOP operation, no action needed for VU0
    // 0x35b88c: 0x4be4122a  vmul.xyzw   $vf8, $vf2, $vf4
    ctx->pc = 0x35b88cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35b890: 0x4be41c2a  vmul.xyzw   $vf16, $vf3, $vf4
    ctx->pc = 0x35b890u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x35b894: 0x4be5126a  vmul.xyzw   $vf9, $vf2, $vf5
    ctx->pc = 0x35b894u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35b898: 0x4be51c6a  vmul.xyzw   $vf17, $vf3, $vf5
    ctx->pc = 0x35b898u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x35b89c: 0x42000038  ei
    ctx->pc = 0x35b89cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35b8a0: 0x154001cf  bnez        $t2, . + 4 + (0x1CF << 2)
    ctx->pc = 0x35B8A0u;
    {
        const bool branch_taken_0x35b8a0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x35B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B8A0u;
        // 0x35b8a4: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b8a0) {
            ctx->pc = 0x35BFE0u;
            goto label_35bfe0;
        }
    }
    ctx->pc = 0x35B8A8u;
    // 0x35b8a8: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x35b8a8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x35b8ac: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x35b8acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x35b8b0: 0xafb50038  sw          $s5, 0x38($sp)
    ctx->pc = 0x35b8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 21));
    // 0x35b8b4: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x35b8b4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
    // 0x35b8b8: 0xafb5003c  sw          $s5, 0x3C($sp)
    ctx->pc = 0x35b8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 21));
    // 0x35b8bc: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x35b8bcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x35b8c0: 0xafb50040  sw          $s5, 0x40($sp)
    ctx->pc = 0x35b8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 21));
    // 0x35b8c4: 0x3c191000  lui         $t9, 0x1000
    ctx->pc = 0x35b8c4u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)4096 << 16));
    // 0x35b8c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x35b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b8cc: 0x3c171000  lui         $s7, 0x1000
    ctx->pc = 0x35b8ccu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4096 << 16));
    // 0x35b8d0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x35b8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x35b8d4: 0x3c161000  lui         $s6, 0x1000
    ctx->pc = 0x35b8d4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)4096 << 16));
    // 0x35b8d8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x35b8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35b8dc: 0x3442d080  ori         $v0, $v0, 0xD080
    ctx->pc = 0x35b8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53376);
    // 0x35b8e0: 0x3463d010  ori         $v1, $v1, 0xD010
    ctx->pc = 0x35b8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53264);
    // 0x35b8e4: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x35b8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x35b8e8: 0x3484d020  ori         $a0, $a0, 0xD020
    ctx->pc = 0x35b8e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53280);
    // 0x35b8ec: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x35b8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x35b8f0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x35b8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x35b8f4: 0x34e7d000  ori         $a3, $a3, 0xD000
    ctx->pc = 0x35b8f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)53248);
    // 0x35b8f8: 0x358ce020  ori         $t4, $t4, 0xE020
    ctx->pc = 0x35b8f8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)57376);
    // 0x35b8fc: 0x24180100  addiu       $t8, $zero, 0x100
    ctx->pc = 0x35b8fcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35b900: 0x356bd400  ori         $t3, $t3, 0xD400
    ctx->pc = 0x35b900u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)54272);
    // 0x35b904: 0x240f0200  addiu       $t7, $zero, 0x200
    ctx->pc = 0x35b904u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35b908: 0x3739e010  ori         $t9, $t9, 0xE010
    ctx->pc = 0x35b908u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)57360);
    // 0x35b90c: 0x36f7d480  ori         $s7, $s7, 0xD480
    ctx->pc = 0x35b90cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)54400);
    // 0x35b910: 0x36d6d410  ori         $s6, $s6, 0xD410
    ctx->pc = 0x35b910u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)54288);
    // 0x35b914: 0x36b5d420  ori         $s5, $s5, 0xD420
    ctx->pc = 0x35b914u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)54304);
label_35b918:
    // 0x35b918: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x35b918u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 7), 0))); // MMIO: 0x1000d000
    // 0x35b91c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35b91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35b920: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x35B920u;
    {
        const bool branch_taken_0x35b920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b920) {
            ctx->pc = 0x35B950u;
            goto label_35b950;
        }
    }
    ctx->pc = 0x35B928u;
    // 0x35b928: 0xad980000  sw          $t8, 0x0($t4)
    ctx->pc = 0x35b928u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 24));
    // 0x35b92c: 0xf  sync
    ctx->pc = 0x35b92cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35b930: 0x40f  sync.p
    ctx->pc = 0x35b930u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35b934:
    // 0x35b934: 0x0  nop
    ctx->pc = 0x35b934u;
    // NOP
    // 0x35b938: 0x0  nop
    ctx->pc = 0x35b938u;
    // NOP
    // 0x35b93c: 0x0  nop
    ctx->pc = 0x35b93cu;
    // NOP
    // 0x35b940: 0x0  nop
    ctx->pc = 0x35b940u;
    // NOP
    // 0x35b944: 0x0  nop
    ctx->pc = 0x35b944u;
    // NOP
    // 0x35b948: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35B948u;
    {
        const bool branch_taken_0x35b948 = (false);
        if (branch_taken_0x35b948) {
            ctx->pc = 0x35B934u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b934;
        }
    }
    ctx->pc = 0x35B950u;
label_35b950:
    // 0x35b950: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x35b950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x35b954: 0x2631ff40  addiu       $s1, $s1, -0xC0
    ctx->pc = 0x35b954u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967104));
    // 0x35b958: 0xafb10044  sw          $s1, 0x44($sp)
    ctx->pc = 0x35b958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 17));
    // 0x35b95c: 0x26433000  addiu       $v1, $s2, 0x3000
    ctx->pc = 0x35b95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 12288));
    // 0x35b960: 0x26840300  addiu       $a0, $s4, 0x300
    ctx->pc = 0x35b960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 768));
    // 0x35b964: 0x26110c00  addiu       $s1, $s0, 0xC00
    ctx->pc = 0x35b964u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3072));
    // 0x35b968: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x35b968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x35b96c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35b96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35b970: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x35B970u;
    {
        const bool branch_taken_0x35b970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B970u;
        // 0x35b974: 0xafa4004c  sw          $a0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b970) {
            ctx->pc = 0x35B9C4u;
            goto label_35b9c4;
        }
    }
    ctx->pc = 0x35B978u;
    // 0x35b978: 0xad8f0000  sw          $t7, 0x0($t4)
    ctx->pc = 0x35b978u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 15));
    // 0x35b97c: 0xf  sync
    ctx->pc = 0x35b97cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35b980: 0x40f  sync.p
    ctx->pc = 0x35b980u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35b984:
    // 0x35b984: 0x0  nop
    ctx->pc = 0x35b984u;
    // NOP
    // 0x35b988: 0x0  nop
    ctx->pc = 0x35b988u;
    // NOP
    // 0x35b98c: 0x0  nop
    ctx->pc = 0x35b98cu;
    // NOP
    // 0x35b990: 0x0  nop
    ctx->pc = 0x35b990u;
    // NOP
    // 0x35b994: 0x0  nop
    ctx->pc = 0x35b994u;
    // NOP
    // 0x35b998: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35B998u;
    {
        const bool branch_taken_0x35b998 = (false);
        if (branch_taken_0x35b998) {
            ctx->pc = 0x35B984u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b984;
        }
    }
    ctx->pc = 0x35B9A0u;
    // 0x35b9a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35b9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35b9a4: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35b9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_35b9a8:
    // 0x35b9a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35b9ac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35b9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35b9b0: 0x0  nop
    ctx->pc = 0x35b9b0u;
    // NOP
    // 0x35b9b4: 0x0  nop
    ctx->pc = 0x35b9b4u;
    // NOP
    // 0x35b9b8: 0x0  nop
    ctx->pc = 0x35b9b8u;
    // NOP
    // 0x35b9bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35B9BCu;
    {
        const bool branch_taken_0x35b9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b9bc) {
            ctx->pc = 0x35B9A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b9a8;
        }
    }
    ctx->pc = 0x35B9C4u;
label_35b9c4:
    // 0x35b9c4: 0xaf2f0000  sw          $t7, 0x0($t9)
    ctx->pc = 0x35b9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 15));
    // 0x35b9c8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x35b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x35b9cc: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x35b9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x35b9d0: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x35b9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
    // 0x35b9d4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x35b9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x35b9d8: 0xad780000  sw          $t8, 0x0($t3)
    ctx->pc = 0x35b9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 24));
    // 0x35b9dc: 0xf  sync
    ctx->pc = 0x35b9dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35b9e0: 0x40f  sync.p
    ctx->pc = 0x35b9e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35b9e4: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x35b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x35b9e8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35b9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35b9ec: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x35B9ECu;
    {
        const bool branch_taken_0x35b9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b9ec) {
            ctx->pc = 0x35BA44u;
            goto label_35ba44;
        }
    }
    ctx->pc = 0x35B9F4u;
    // 0x35b9f4: 0xad8f0000  sw          $t7, 0x0($t4)
    ctx->pc = 0x35b9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 15));
    // 0x35b9f8: 0xf  sync
    ctx->pc = 0x35b9f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35b9fc: 0x40f  sync.p
    ctx->pc = 0x35b9fcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35ba00:
    // 0x35ba00: 0x0  nop
    ctx->pc = 0x35ba00u;
    // NOP
    // 0x35ba04: 0x0  nop
    ctx->pc = 0x35ba04u;
    // NOP
    // 0x35ba08: 0x0  nop
    ctx->pc = 0x35ba08u;
    // NOP
    // 0x35ba0c: 0x0  nop
    ctx->pc = 0x35ba0cu;
    // NOP
    // 0x35ba10: 0x0  nop
    ctx->pc = 0x35ba10u;
    // NOP
    // 0x35ba14: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35BA14u;
    {
        const bool branch_taken_0x35ba14 = (false);
        if (branch_taken_0x35ba14) {
            ctx->pc = 0x35BA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ba00;
        }
    }
    ctx->pc = 0x35BA1Cu;
    // 0x35ba1c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35ba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35ba20: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35ba20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35ba24: 0x0  nop
    ctx->pc = 0x35ba24u;
    // NOP
label_35ba28:
    // 0x35ba28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35ba2c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35ba2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35ba30: 0x0  nop
    ctx->pc = 0x35ba30u;
    // NOP
    // 0x35ba34: 0x0  nop
    ctx->pc = 0x35ba34u;
    // NOP
    // 0x35ba38: 0x0  nop
    ctx->pc = 0x35ba38u;
    // NOP
    // 0x35ba3c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35BA3Cu;
    {
        const bool branch_taken_0x35ba3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ba3c) {
            ctx->pc = 0x35BA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ba28;
        }
    }
    ctx->pc = 0x35BA44u;
label_35ba44:
    // 0x35ba44: 0xaf2f0000  sw          $t7, 0x0($t9)
    ctx->pc = 0x35ba44u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 15));
    // 0x35ba48: 0x24030300  addiu       $v1, $zero, 0x300
    ctx->pc = 0x35ba48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x35ba4c: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x35ba4cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x35ba50: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x35ba50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x35ba54: 0xaed00000  sw          $s0, 0x0($s6)
    ctx->pc = 0x35ba54u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
    // 0x35ba58: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x35ba58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x35ba5c: 0xad780000  sw          $t8, 0x0($t3)
    ctx->pc = 0x35ba5cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 24));
    // 0x35ba60: 0xf  sync
    ctx->pc = 0x35ba60u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35ba64: 0x40f  sync.p
    ctx->pc = 0x35ba64u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35ba68: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x35ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x35ba6c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35ba6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35ba70: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x35BA70u;
    {
        const bool branch_taken_0x35ba70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BA70u;
        // 0x35ba74: 0x3c097000  lui         $t1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ba70) {
            ctx->pc = 0x35BAC4u;
            goto label_35bac4;
        }
    }
    ctx->pc = 0x35BA78u;
    // 0x35ba78: 0xad8f0000  sw          $t7, 0x0($t4)
    ctx->pc = 0x35ba78u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 15));
    // 0x35ba7c: 0xf  sync
    ctx->pc = 0x35ba7cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35ba80: 0x40f  sync.p
    ctx->pc = 0x35ba80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35ba84:
    // 0x35ba84: 0x0  nop
    ctx->pc = 0x35ba84u;
    // NOP
    // 0x35ba88: 0x0  nop
    ctx->pc = 0x35ba88u;
    // NOP
    // 0x35ba8c: 0x0  nop
    ctx->pc = 0x35ba8cu;
    // NOP
    // 0x35ba90: 0x0  nop
    ctx->pc = 0x35ba90u;
    // NOP
    // 0x35ba94: 0x0  nop
    ctx->pc = 0x35ba94u;
    // NOP
    // 0x35ba98: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35BA98u;
    {
        const bool branch_taken_0x35ba98 = (false);
        if (branch_taken_0x35ba98) {
            ctx->pc = 0x35BA84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ba84;
        }
    }
    ctx->pc = 0x35BAA0u;
    // 0x35baa0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35baa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35baa4: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35baa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_35baa8:
    // 0x35baa8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35baac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35baacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35bab0: 0x0  nop
    ctx->pc = 0x35bab0u;
    // NOP
    // 0x35bab4: 0x0  nop
    ctx->pc = 0x35bab4u;
    // NOP
    // 0x35bab8: 0x0  nop
    ctx->pc = 0x35bab8u;
    // NOP
    // 0x35babc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35BABCu;
    {
        const bool branch_taken_0x35babc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BABCu;
        // 0x35bac0: 0x3c097000  lui         $t1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35babc) {
            ctx->pc = 0x35BAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35baa8;
        }
    }
    ctx->pc = 0x35BAC4u;
label_35bac4:
    // 0x35bac4: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x35bac4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x35bac8: 0x35290300  ori         $t1, $t1, 0x300
    ctx->pc = 0x35bac8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)768);
    // 0x35bacc: 0x35080f00  ori         $t0, $t0, 0xF00
    ctx->pc = 0x35baccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)3840);
    // 0x35bad0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x35bad0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bad4: 0x3c0d0001  lui         $t5, 0x1
    ctx->pc = 0x35bad4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)1 << 16));
    // 0x35bad8: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x35bad8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x35badc: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x35badcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x35bae0: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x35bae0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x35bae4: 0x0  nop
    ctx->pc = 0x35bae4u;
    // NOP
label_35bae8:
    // 0x35bae8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x35bae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35baec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35baecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35baf0: 0xe4203f20  swc1        $f0, 0x3F20($at)
    ctx->pc = 0x35baf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F20u, bits); }
    // 0x35baf4: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x35baf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35baf8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35baf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35bafc: 0xe4213f24  swc1        $f1, 0x3F24($at)
    ctx->pc = 0x35bafcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F24u, bits); }
    // 0x35bb00: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x35bb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35bb04: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35bb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35bb08: 0xe4203f28  swc1        $f0, 0x3F28($at)
    ctx->pc = 0x35bb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F28u, bits); }
    // 0x35bb0c: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x35bb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35bb10: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35bb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35bb14: 0xe4213f2c  swc1        $f1, 0x3F2C($at)
    ctx->pc = 0x35bb14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F2Cu, bits); }
label_35bb18:
    // 0x35bb18: 0x42000039  di
    ctx->pc = 0x35bb18u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35bb1c: 0x40f  sync.p
    ctx->pc = 0x35bb1cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35bb20: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35bb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35bb24: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x35bb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x35bb28: 0x0  nop
    ctx->pc = 0x35bb28u;
    // NOP
    // 0x35bb2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35BB2Cu;
    {
        const bool branch_taken_0x35bb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35bb2c) {
            ctx->pc = 0x35BB18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35bb18;
        }
    }
    ctx->pc = 0x35BB34u;
    // 0x35bb34: 0xd9c10000  lqc2        $vf1, 0x0($t6)
    ctx->pc = 0x35bb34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x35bb38: 0xd9340000  lqc2        $vf20, 0x0($t1)
    ctx->pc = 0x35bb38u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x35bb3c: 0xd93b0010  lqc2        $vf27, 0x10($t1)
    ctx->pc = 0x35bb3cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x35bb40: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x35bb40u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35bb44: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x35bb44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35bb48: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x35bb48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35bb4c: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x35bb4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35bb50: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x35bb50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35bb54: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x35bb54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35bb58: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x35bb58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35bb5c: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x35bb5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35bb60: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x35bb60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35bb64: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x35bb64u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35bb68: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x35bb68u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35bb6c: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x35bb6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35bb70: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x35bb70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35bb74: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x35bb74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35bb78: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x35bb78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35bb7c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x35bb7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35bb80: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x35bb80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35bb84: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x35bb84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35bb88: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x35bb88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35bb8c: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x35bb8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35bb90: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x35bb90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35bb94: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x35bb94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35bb98: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x35bb98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35bb9c: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x35bb9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35bba0: 0x4bc74098  vmulx.xyz   $vf2, $vf8, $vf7x
    ctx->pc = 0x35bba0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35bba4: 0x4bc780da  vmulz.xyz   $vf3, $vf16, $vf7z
    ctx->pc = 0x35bba4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35bba8: 0x4bc7491a  vmulz.xyz   $vf4, $vf9, $vf7z
    ctx->pc = 0x35bba8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35bbac: 0x4bc78958  vmulx.xyz   $vf5, $vf17, $vf7x
    ctx->pc = 0x35bbacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35bbb0: 0x4be314ac  vsub.xyzw   $vf18, $vf2, $vf3
    ctx->pc = 0x35bbb0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35bbb4: 0x4be524e8  vadd.xyzw   $vf19, $vf4, $vf5
    ctx->pc = 0x35bbb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35bbb8: 0x4bc74099  vmuly.xyz   $vf2, $vf8, $vf7y
    ctx->pc = 0x35bbb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35bbbc: 0x4bc780db  vmulw.xyz   $vf3, $vf16, $vf7w
    ctx->pc = 0x35bbbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35bbc0: 0x4bc7491b  vmulw.xyz   $vf4, $vf9, $vf7w
    ctx->pc = 0x35bbc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35bbc4: 0x4bc78959  vmuly.xyz   $vf5, $vf17, $vf7y
    ctx->pc = 0x35bbc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35bbc8: 0x4be3166c  vsub.xyzw   $vf25, $vf2, $vf3
    ctx->pc = 0x35bbc8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = PS2_VBLEND(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x35bbcc: 0x4be526a8  vadd.xyzw   $vf26, $vf4, $vf5
    ctx->pc = 0x35bbccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x35bbd0: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x35bbd0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35bbd4: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x35bbd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35bbd8: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x35bbd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35bbdc: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x35bbdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35bbe0: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x35bbe0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35bbe4: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x35bbe4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35bbe8: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x35bbe8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35bbec: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x35bbecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35bbf0: 0x4bf9df2c  vsub.xyzw   $vf28, $vf27, $vf25
    ctx->pc = 0x35bbf0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35bbf4: 0x4bf9df68  vadd.xyzw   $vf29, $vf27, $vf25
    ctx->pc = 0x35bbf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35bbf8: 0x4bf9dfa8  vadd.xyzw   $vf30, $vf27, $vf25
    ctx->pc = 0x35bbf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35bbfc: 0x4bf9dfec  vsub.xyzw   $vf31, $vf27, $vf25
    ctx->pc = 0x35bbfcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35bc00: 0x4bfae72c  vsub.xyzw   $vf28, $vf28, $vf26
    ctx->pc = 0x35bc00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35bc04: 0x4bfaef6c  vsub.xyzw   $vf29, $vf29, $vf26
    ctx->pc = 0x35bc04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35bc08: 0x4bfaf7a8  vadd.xyzw   $vf30, $vf30, $vf26
    ctx->pc = 0x35bc08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35bc0c: 0x4bfaffe8  vadd.xyzw   $vf31, $vf31, $vf26
    ctx->pc = 0x35bc0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35bc10: 0xf9150000  sqc2        $vf21, 0x0($t0)
    ctx->pc = 0x35bc10u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35bc14: 0xf9160010  sqc2        $vf22, 0x10($t0)
    ctx->pc = 0x35bc14u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35bc18: 0xf9170020  sqc2        $vf23, 0x20($t0)
    ctx->pc = 0x35bc18u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35bc1c: 0xf9180030  sqc2        $vf24, 0x30($t0)
    ctx->pc = 0x35bc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35bc20: 0xf91c0040  sqc2        $vf28, 0x40($t0)
    ctx->pc = 0x35bc20u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x35bc24: 0xf91d0050  sqc2        $vf29, 0x50($t0)
    ctx->pc = 0x35bc24u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x35bc28: 0xf91e0060  sqc2        $vf30, 0x60($t0)
    ctx->pc = 0x35bc28u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x35bc2c: 0xf91f0070  sqc2        $vf31, 0x70($t0)
    ctx->pc = 0x35bc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x35bc30: 0x42000038  ei
    ctx->pc = 0x35bc30u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35bc34: 0x25240020  addiu       $a0, $t1, 0x20
    ctx->pc = 0x35bc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x35bc38: 0x25030080  addiu       $v1, $t0, 0x80
    ctx->pc = 0x35bc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x35bc3c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x35bc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35bc40: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35bc40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35bc44: 0xe4203f20  swc1        $f0, 0x3F20($at)
    ctx->pc = 0x35bc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F20u, bits); }
    // 0x35bc48: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x35bc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35bc4c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35bc4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35bc50: 0xe4213f24  swc1        $f1, 0x3F24($at)
    ctx->pc = 0x35bc50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F24u, bits); }
    // 0x35bc54: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x35bc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35bc58: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35bc58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35bc5c: 0xe4203f28  swc1        $f0, 0x3F28($at)
    ctx->pc = 0x35bc5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F28u, bits); }
    // 0x35bc60: 0xc541000c  lwc1        $f1, 0xC($t2)
    ctx->pc = 0x35bc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35bc64: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35bc64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35bc68: 0xe4213f2c  swc1        $f1, 0x3F2C($at)
    ctx->pc = 0x35bc68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F2Cu, bits); }
label_35bc6c:
    // 0x35bc6c: 0x42000039  di
    ctx->pc = 0x35bc6cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35bc70: 0x40f  sync.p
    ctx->pc = 0x35bc70u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35bc74: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35bc78: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x35bc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x35bc7c: 0x0  nop
    ctx->pc = 0x35bc7cu;
    // NOP
    // 0x35bc80: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35BC80u;
    {
        const bool branch_taken_0x35bc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35bc80) {
            ctx->pc = 0x35BC6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35bc6c;
        }
    }
    ctx->pc = 0x35BC88u;
    // 0x35bc88: 0xd9c10000  lqc2        $vf1, 0x0($t6)
    ctx->pc = 0x35bc88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x35bc8c: 0xd8940000  lqc2        $vf20, 0x0($a0)
    ctx->pc = 0x35bc8cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35bc90: 0xd89b0010  lqc2        $vf27, 0x10($a0)
    ctx->pc = 0x35bc90u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x35bc94: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x35bc94u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35bc98: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x35bc98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35bc9c: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x35bc9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35bca0: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x35bca0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35bca4: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x35bca4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35bca8: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x35bca8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35bcac: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x35bcacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35bcb0: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x35bcb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35bcb4: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x35bcb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35bcb8: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x35bcb8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35bcbc: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x35bcbcu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35bcc0: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x35bcc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35bcc4: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x35bcc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35bcc8: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x35bcc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35bccc: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x35bcccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35bcd0: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x35bcd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35bcd4: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x35bcd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35bcd8: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x35bcd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35bcdc: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x35bcdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35bce0: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x35bce0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35bce4: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x35bce4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35bce8: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x35bce8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35bcec: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x35bcecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35bcf0: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x35bcf0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35bcf4: 0x4bc74098  vmulx.xyz   $vf2, $vf8, $vf7x
    ctx->pc = 0x35bcf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35bcf8: 0x4bc780da  vmulz.xyz   $vf3, $vf16, $vf7z
    ctx->pc = 0x35bcf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35bcfc: 0x4bc7491a  vmulz.xyz   $vf4, $vf9, $vf7z
    ctx->pc = 0x35bcfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35bd00: 0x4bc78958  vmulx.xyz   $vf5, $vf17, $vf7x
    ctx->pc = 0x35bd00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35bd04: 0x4be314ac  vsub.xyzw   $vf18, $vf2, $vf3
    ctx->pc = 0x35bd04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35bd08: 0x4be524e8  vadd.xyzw   $vf19, $vf4, $vf5
    ctx->pc = 0x35bd08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35bd0c: 0x4bc74099  vmuly.xyz   $vf2, $vf8, $vf7y
    ctx->pc = 0x35bd0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35bd10: 0x4bc780db  vmulw.xyz   $vf3, $vf16, $vf7w
    ctx->pc = 0x35bd10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35bd14: 0x4bc7491b  vmulw.xyz   $vf4, $vf9, $vf7w
    ctx->pc = 0x35bd14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35bd18: 0x4bc78959  vmuly.xyz   $vf5, $vf17, $vf7y
    ctx->pc = 0x35bd18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35bd1c: 0x4be3166c  vsub.xyzw   $vf25, $vf2, $vf3
    ctx->pc = 0x35bd1cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = PS2_VBLEND(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x35bd20: 0x4be526a8  vadd.xyzw   $vf26, $vf4, $vf5
    ctx->pc = 0x35bd20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x35bd24: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x35bd24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35bd28: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x35bd28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35bd2c: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x35bd2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35bd30: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x35bd30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35bd34: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x35bd34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35bd38: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x35bd38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35bd3c: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x35bd3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35bd40: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x35bd40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35bd44: 0x4bf9df2c  vsub.xyzw   $vf28, $vf27, $vf25
    ctx->pc = 0x35bd44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35bd48: 0x4bf9df68  vadd.xyzw   $vf29, $vf27, $vf25
    ctx->pc = 0x35bd48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35bd4c: 0x4bf9dfa8  vadd.xyzw   $vf30, $vf27, $vf25
    ctx->pc = 0x35bd4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35bd50: 0x4bf9dfec  vsub.xyzw   $vf31, $vf27, $vf25
    ctx->pc = 0x35bd50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35bd54: 0x4bfae72c  vsub.xyzw   $vf28, $vf28, $vf26
    ctx->pc = 0x35bd54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35bd58: 0x4bfaef6c  vsub.xyzw   $vf29, $vf29, $vf26
    ctx->pc = 0x35bd58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35bd5c: 0x4bfaf7a8  vadd.xyzw   $vf30, $vf30, $vf26
    ctx->pc = 0x35bd5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35bd60: 0x4bfaffe8  vadd.xyzw   $vf31, $vf31, $vf26
    ctx->pc = 0x35bd60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35bd64: 0xf8750000  sqc2        $vf21, 0x0($v1)
    ctx->pc = 0x35bd64u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35bd68: 0xf8760010  sqc2        $vf22, 0x10($v1)
    ctx->pc = 0x35bd68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35bd6c: 0xf8770020  sqc2        $vf23, 0x20($v1)
    ctx->pc = 0x35bd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35bd70: 0xf8780030  sqc2        $vf24, 0x30($v1)
    ctx->pc = 0x35bd70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35bd74: 0xf87c0040  sqc2        $vf28, 0x40($v1)
    ctx->pc = 0x35bd74u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x35bd78: 0xf87d0050  sqc2        $vf29, 0x50($v1)
    ctx->pc = 0x35bd78u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x35bd7c: 0xf87e0060  sqc2        $vf30, 0x60($v1)
    ctx->pc = 0x35bd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x35bd80: 0xf87f0070  sqc2        $vf31, 0x70($v1)
    ctx->pc = 0x35bd80u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x35bd84: 0x42000038  ei
    ctx->pc = 0x35bd84u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35bd88: 0x25240040  addiu       $a0, $t1, 0x40
    ctx->pc = 0x35bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x35bd8c: 0x25030100  addiu       $v1, $t0, 0x100
    ctx->pc = 0x35bd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 256));
    // 0x35bd90: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x35bd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35bd94: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35bd94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35bd98: 0xe4203f20  swc1        $f0, 0x3F20($at)
    ctx->pc = 0x35bd98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F20u, bits); }
    // 0x35bd9c: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x35bd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35bda0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35bda0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35bda4: 0xe4213f24  swc1        $f1, 0x3F24($at)
    ctx->pc = 0x35bda4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F24u, bits); }
    // 0x35bda8: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x35bda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35bdac: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35bdacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35bdb0: 0xe4203f28  swc1        $f0, 0x3F28($at)
    ctx->pc = 0x35bdb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F28u, bits); }
    // 0x35bdb4: 0xc5410014  lwc1        $f1, 0x14($t2)
    ctx->pc = 0x35bdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35bdb8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35bdb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35bdbc: 0xe4213f2c  swc1        $f1, 0x3F2C($at)
    ctx->pc = 0x35bdbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F2Cu, bits); }
label_35bdc0:
    // 0x35bdc0: 0x42000039  di
    ctx->pc = 0x35bdc0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35bdc4: 0x40f  sync.p
    ctx->pc = 0x35bdc4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35bdc8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35bdcc: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x35bdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x35bdd0: 0x0  nop
    ctx->pc = 0x35bdd0u;
    // NOP
    // 0x35bdd4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35BDD4u;
    {
        const bool branch_taken_0x35bdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35bdd4) {
            ctx->pc = 0x35BDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35bdc0;
        }
    }
    ctx->pc = 0x35BDDCu;
    // 0x35bddc: 0xd9c10000  lqc2        $vf1, 0x0($t6)
    ctx->pc = 0x35bddcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x35bde0: 0xd8940000  lqc2        $vf20, 0x0($a0)
    ctx->pc = 0x35bde0u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35bde4: 0xd89b0010  lqc2        $vf27, 0x10($a0)
    ctx->pc = 0x35bde4u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x35bde8: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x35bde8u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35bdec: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x35bdecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35bdf0: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x35bdf0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35bdf4: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x35bdf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35bdf8: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x35bdf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35bdfc: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x35bdfcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35be00: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x35be00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35be04: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x35be04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35be08: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x35be08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35be0c: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x35be0cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35be10: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x35be10u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35be14: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x35be14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35be18: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x35be18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35be1c: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x35be1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35be20: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x35be20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35be24: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x35be24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35be28: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x35be28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35be2c: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x35be2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35be30: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x35be30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35be34: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x35be34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35be38: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x35be38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35be3c: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x35be3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35be40: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x35be40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35be44: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x35be44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35be48: 0x4bc74098  vmulx.xyz   $vf2, $vf8, $vf7x
    ctx->pc = 0x35be48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35be4c: 0x4bc780da  vmulz.xyz   $vf3, $vf16, $vf7z
    ctx->pc = 0x35be4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35be50: 0x4bc7491a  vmulz.xyz   $vf4, $vf9, $vf7z
    ctx->pc = 0x35be50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35be54: 0x4bc78958  vmulx.xyz   $vf5, $vf17, $vf7x
    ctx->pc = 0x35be54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35be58: 0x4be314ac  vsub.xyzw   $vf18, $vf2, $vf3
    ctx->pc = 0x35be58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35be5c: 0x4be524e8  vadd.xyzw   $vf19, $vf4, $vf5
    ctx->pc = 0x35be5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35be60: 0x4bc74099  vmuly.xyz   $vf2, $vf8, $vf7y
    ctx->pc = 0x35be60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35be64: 0x4bc780db  vmulw.xyz   $vf3, $vf16, $vf7w
    ctx->pc = 0x35be64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35be68: 0x4bc7491b  vmulw.xyz   $vf4, $vf9, $vf7w
    ctx->pc = 0x35be68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35be6c: 0x4bc78959  vmuly.xyz   $vf5, $vf17, $vf7y
    ctx->pc = 0x35be6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35be70: 0x4be3166c  vsub.xyzw   $vf25, $vf2, $vf3
    ctx->pc = 0x35be70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = PS2_VBLEND(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x35be74: 0x4be526a8  vadd.xyzw   $vf26, $vf4, $vf5
    ctx->pc = 0x35be74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x35be78: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x35be78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35be7c: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x35be7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35be80: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x35be80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35be84: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x35be84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35be88: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x35be88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35be8c: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x35be8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35be90: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x35be90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35be94: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x35be94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35be98: 0x4bf9df2c  vsub.xyzw   $vf28, $vf27, $vf25
    ctx->pc = 0x35be98u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35be9c: 0x4bf9df68  vadd.xyzw   $vf29, $vf27, $vf25
    ctx->pc = 0x35be9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35bea0: 0x4bf9dfa8  vadd.xyzw   $vf30, $vf27, $vf25
    ctx->pc = 0x35bea0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35bea4: 0x4bf9dfec  vsub.xyzw   $vf31, $vf27, $vf25
    ctx->pc = 0x35bea4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35bea8: 0x4bfae72c  vsub.xyzw   $vf28, $vf28, $vf26
    ctx->pc = 0x35bea8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35beac: 0x4bfaef6c  vsub.xyzw   $vf29, $vf29, $vf26
    ctx->pc = 0x35beacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35beb0: 0x4bfaf7a8  vadd.xyzw   $vf30, $vf30, $vf26
    ctx->pc = 0x35beb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35beb4: 0x4bfaffe8  vadd.xyzw   $vf31, $vf31, $vf26
    ctx->pc = 0x35beb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35beb8: 0xf8750000  sqc2        $vf21, 0x0($v1)
    ctx->pc = 0x35beb8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35bebc: 0xf8760010  sqc2        $vf22, 0x10($v1)
    ctx->pc = 0x35bebcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35bec0: 0xf8770020  sqc2        $vf23, 0x20($v1)
    ctx->pc = 0x35bec0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35bec4: 0xf8780030  sqc2        $vf24, 0x30($v1)
    ctx->pc = 0x35bec4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35bec8: 0xf87c0040  sqc2        $vf28, 0x40($v1)
    ctx->pc = 0x35bec8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x35becc: 0xf87d0050  sqc2        $vf29, 0x50($v1)
    ctx->pc = 0x35beccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x35bed0: 0xf87e0060  sqc2        $vf30, 0x60($v1)
    ctx->pc = 0x35bed0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x35bed4: 0xf87f0070  sqc2        $vf31, 0x70($v1)
    ctx->pc = 0x35bed4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x35bed8: 0x42000038  ei
    ctx->pc = 0x35bed8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35bedc: 0x25290060  addiu       $t1, $t1, 0x60
    ctx->pc = 0x35bedcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
    // 0x35bee0: 0x254a0018  addiu       $t2, $t2, 0x18
    ctx->pc = 0x35bee0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 24));
    // 0x35bee4: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x35bee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x35bee8: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x35bee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x35beec: 0x26730006  addiu       $s3, $s3, 0x6
    ctx->pc = 0x35beecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
    // 0x35bef0: 0x2a6200c0  slti        $v0, $s3, 0xC0
    ctx->pc = 0x35bef0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)192) ? 1 : 0);
    // 0x35bef4: 0x1440fefc  bnez        $v0, . + 4 + (-0x104 << 2)
    ctx->pc = 0x35BEF4u;
    {
        const bool branch_taken_0x35bef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BEF4u;
        // 0x35bef8: 0x25080180  addiu       $t0, $t0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bef4) {
            ctx->pc = 0x35BAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35bae8;
        }
    }
    ctx->pc = 0x35BEFCu;
    // 0x35befc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x35befcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x35bf00: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35bf00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35bf04: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x35BF04u;
    {
        const bool branch_taken_0x35bf04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35bf04) {
            ctx->pc = 0x35BF38u;
            goto label_35bf38;
        }
    }
    ctx->pc = 0x35BF0Cu;
    // 0x35bf0c: 0xad980000  sw          $t8, 0x0($t4)
    ctx->pc = 0x35bf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 24));
    // 0x35bf10: 0xf  sync
    ctx->pc = 0x35bf10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35bf14: 0x40f  sync.p
    ctx->pc = 0x35bf14u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35bf18:
    // 0x35bf18: 0x0  nop
    ctx->pc = 0x35bf18u;
    // NOP
    // 0x35bf1c: 0x0  nop
    ctx->pc = 0x35bf1cu;
    // NOP
    // 0x35bf20: 0x0  nop
    ctx->pc = 0x35bf20u;
    // NOP
    // 0x35bf24: 0x0  nop
    ctx->pc = 0x35bf24u;
    // NOP
    // 0x35bf28: 0x0  nop
    ctx->pc = 0x35bf28u;
    // NOP
    // 0x35bf2c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35BF2Cu;
    {
        const bool branch_taken_0x35bf2c = (false);
        if (branch_taken_0x35bf2c) {
            ctx->pc = 0x35BF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35bf18;
        }
    }
    ctx->pc = 0x35BF34u;
    // 0x35bf34: 0x0  nop
    ctx->pc = 0x35bf34u;
    // NOP
label_35bf38:
    // 0x35bf38: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x35bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x35bf3c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35bf3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35bf40: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x35BF40u;
    {
        const bool branch_taken_0x35bf40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35bf40) {
            ctx->pc = 0x35BF94u;
            goto label_35bf94;
        }
    }
    ctx->pc = 0x35BF48u;
    // 0x35bf48: 0xad8f0000  sw          $t7, 0x0($t4)
    ctx->pc = 0x35bf48u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 15));
    // 0x35bf4c: 0xf  sync
    ctx->pc = 0x35bf4cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35bf50: 0x40f  sync.p
    ctx->pc = 0x35bf50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35bf54:
    // 0x35bf54: 0x0  nop
    ctx->pc = 0x35bf54u;
    // NOP
    // 0x35bf58: 0x0  nop
    ctx->pc = 0x35bf58u;
    // NOP
    // 0x35bf5c: 0x0  nop
    ctx->pc = 0x35bf5cu;
    // NOP
    // 0x35bf60: 0x0  nop
    ctx->pc = 0x35bf60u;
    // NOP
    // 0x35bf64: 0x0  nop
    ctx->pc = 0x35bf64u;
    // NOP
    // 0x35bf68: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35BF68u;
    {
        const bool branch_taken_0x35bf68 = (false);
        if (branch_taken_0x35bf68) {
            ctx->pc = 0x35BF54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35bf54;
        }
    }
    ctx->pc = 0x35BF70u;
    // 0x35bf70: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35bf70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35bf74: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35bf74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_35bf78:
    // 0x35bf78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35bf7c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35bf7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35bf80: 0x0  nop
    ctx->pc = 0x35bf80u;
    // NOP
    // 0x35bf84: 0x0  nop
    ctx->pc = 0x35bf84u;
    // NOP
    // 0x35bf88: 0x0  nop
    ctx->pc = 0x35bf88u;
    // NOP
    // 0x35bf8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35BF8Cu;
    {
        const bool branch_taken_0x35bf8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35bf8c) {
            ctx->pc = 0x35BF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35bf78;
        }
    }
    ctx->pc = 0x35BF94u;
label_35bf94:
    // 0x35bf94: 0xaf380000  sw          $t8, 0x0($t9)
    ctx->pc = 0x35bf94u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 24));
    // 0x35bf98: 0x24030f00  addiu       $v1, $zero, 0xF00
    ctx->pc = 0x35bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    // 0x35bf9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x35bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35bfa0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35bfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x35bfa4: 0x24030300  addiu       $v1, $zero, 0x300
    ctx->pc = 0x35bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x35bfa8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x35bfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x35bfac: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x35bfacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
    // 0x35bfb0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x35bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35bfb4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35bfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x35bfb8: 0xacf80000  sw          $t8, 0x0($a3)
    ctx->pc = 0x35bfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 24));
    // 0x35bfbc: 0xf  sync
    ctx->pc = 0x35bfbcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35bfc0: 0x40f  sync.p
    ctx->pc = 0x35bfc0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35bfc4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x35bfc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bfc8: 0x8fb10044  lw          $s1, 0x44($sp)
    ctx->pc = 0x35bfc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x35bfcc: 0x8fb20048  lw          $s2, 0x48($sp)
    ctx->pc = 0x35bfccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35bfd0: 0x2a2200c0  slti        $v0, $s1, 0xC0
    ctx->pc = 0x35bfd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)192) ? 1 : 0);
    // 0x35bfd4: 0x1040fe50  beqz        $v0, . + 4 + (-0x1B0 << 2)
    ctx->pc = 0x35BFD4u;
    {
        const bool branch_taken_0x35bfd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BFD4u;
        // 0x35bfd8: 0x8fb4004c  lw          $s4, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bfd4) {
            ctx->pc = 0x35B918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b918;
        }
    }
    ctx->pc = 0x35BFDCu;
    // 0x35bfdc: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x35bfdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_35bfe0:
    // 0x35bfe0: 0x14400309  bnez        $v0, . + 4 + (0x309 << 2)
    ctx->pc = 0x35BFE0u;
    {
        const bool branch_taken_0x35bfe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BFE0u;
        // 0x35bfe4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bfe0) {
            ctx->pc = 0x35CC08u;
            goto label_35cc08;
        }
    }
    ctx->pc = 0x35BFE8u;
    // 0x35bfe8: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x35bfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x35bfec: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x35bfecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x35bff0: 0x222180b  movn        $v1, $s1, $v0
    ctx->pc = 0x35bff0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
    // 0x35bff4: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x35bff4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
    // 0x35bff8: 0x45880  sll         $t3, $a0, 2
    ctx->pc = 0x35bff8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35bffc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35c000: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x35c000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x35c004: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35c004u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x35c008: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x35c008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x35c00c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x35C00Cu;
    {
        const bool branch_taken_0x35c00c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C00Cu;
        // 0x35c010: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c00c) {
            ctx->pc = 0x35C048u;
            goto label_35c048;
        }
    }
    ctx->pc = 0x35C014u;
    // 0x35c014: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x35c014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35c018: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35c018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35c01c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35c01cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x35c020: 0xf  sync
    ctx->pc = 0x35c020u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35c024: 0x40f  sync.p
    ctx->pc = 0x35c024u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35c028:
    // 0x35c028: 0x0  nop
    ctx->pc = 0x35c028u;
    // NOP
    // 0x35c02c: 0x0  nop
    ctx->pc = 0x35c02cu;
    // NOP
    // 0x35c030: 0x0  nop
    ctx->pc = 0x35c030u;
    // NOP
    // 0x35c034: 0x0  nop
    ctx->pc = 0x35c034u;
    // NOP
    // 0x35c038: 0x0  nop
    ctx->pc = 0x35c038u;
    // NOP
    // 0x35c03c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35C03Cu;
    {
        const bool branch_taken_0x35c03c = (false);
        if (branch_taken_0x35c03c) {
            ctx->pc = 0x35C028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c028;
        }
    }
    ctx->pc = 0x35C044u;
    // 0x35c044: 0x0  nop
    ctx->pc = 0x35c044u;
    // NOP
label_35c048:
    // 0x35c048: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35c048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35c04c: 0x4aa00  sll         $s5, $a0, 8
    ctx->pc = 0x35c04cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x35c050: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x35c050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x35c054: 0x22b8823  subu        $s1, $s1, $t3
    ctx->pc = 0x35c054u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 11)));
    // 0x35c058: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35c058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35c05c: 0x25660003  addiu       $a2, $t3, 0x3
    ctx->pc = 0x35c05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x35c060: 0x46900  sll         $t5, $a0, 4
    ctx->pc = 0x35c060u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x35c064: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x35c064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x35c068: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x35C068u;
    {
        const bool branch_taken_0x35c068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C068u;
        // 0x35c06c: 0x47980  sll         $t7, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c068) {
            ctx->pc = 0x35C0CCu;
            goto label_35c0cc;
        }
    }
    ctx->pc = 0x35C070u;
    // 0x35c070: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35c070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35c074: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x35c074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35c078: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35c078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35c07c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35c07cu;
    runtime->Store32(rdram, ctx, 0x1000E020u, GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x35c080: 0xf  sync
    ctx->pc = 0x35c080u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35c084: 0x40f  sync.p
    ctx->pc = 0x35c084u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35c088:
    // 0x35c088: 0x0  nop
    ctx->pc = 0x35c088u;
    // NOP
    // 0x35c08c: 0x0  nop
    ctx->pc = 0x35c08cu;
    // NOP
    // 0x35c090: 0x0  nop
    ctx->pc = 0x35c090u;
    // NOP
    // 0x35c094: 0x0  nop
    ctx->pc = 0x35c094u;
    // NOP
    // 0x35c098: 0x0  nop
    ctx->pc = 0x35c098u;
    // NOP
    // 0x35c09c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35C09Cu;
    {
        const bool branch_taken_0x35c09c = (false);
        if (branch_taken_0x35c09c) {
            ctx->pc = 0x35C088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c088;
        }
    }
    ctx->pc = 0x35C0A4u;
    // 0x35c0a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35c0a8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35c0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35c0ac: 0x0  nop
    ctx->pc = 0x35c0acu;
    // NOP
label_35c0b0:
    // 0x35c0b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35c0b4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35c0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35c0b8: 0x0  nop
    ctx->pc = 0x35c0b8u;
    // NOP
    // 0x35c0bc: 0x0  nop
    ctx->pc = 0x35c0bcu;
    // NOP
    // 0x35c0c0: 0x0  nop
    ctx->pc = 0x35c0c0u;
    // NOP
    // 0x35c0c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35C0C4u;
    {
        const bool branch_taken_0x35c0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c0c4) {
            ctx->pc = 0x35C0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c0b0;
        }
    }
    ctx->pc = 0x35C0CCu;
label_35c0cc:
    // 0x35c0cc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35c0d0: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x35c0d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35c0d4: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x35c0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x35c0d8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x35c0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35c0dc: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x35c0dcu;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 7)); // MMIO: 0x1000e010
    // 0x35c0e0: 0x8b202a  slt         $a0, $a0, $t3
    ctx->pc = 0x35c0e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x35c0e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x35c0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c0e8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35c0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35c0ec: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x35c0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x35c0f0: 0x164280b  movn        $a1, $t3, $a0
    ctx->pc = 0x35c0f0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 11));
    // 0x35c0f4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35c0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35c0f8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x35c0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x35c0fc: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x35c0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x35c100: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x35c100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x35c104: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x35c104u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 20)); // MMIO: 0x1000d410
    // 0x35c108: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x35c108u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x35c10c: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x35c10cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x35c110: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35c110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35c114: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x35c114u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x35c118: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35c118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35c11c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x35c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35c120: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35c120u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x1000d400
    // 0x35c124: 0xf  sync
    ctx->pc = 0x35c124u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35c128: 0x40f  sync.p
    ctx->pc = 0x35c128u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35c12c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35c12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35c130: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35c130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35c134: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x35C134u;
    {
        const bool branch_taken_0x35c134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C134u;
        // 0x35c138: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c134) {
            ctx->pc = 0x35C18Cu;
            goto label_35c18c;
        }
    }
    ctx->pc = 0x35C13Cu;
    // 0x35c13c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35c13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35c140: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x35c140u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7)); // MMIO: 0x1000e020
    // 0x35c144: 0xf  sync
    ctx->pc = 0x35c144u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35c148: 0x40f  sync.p
    ctx->pc = 0x35c148u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35c14c:
    // 0x35c14c: 0x0  nop
    ctx->pc = 0x35c14cu;
    // NOP
    // 0x35c150: 0x0  nop
    ctx->pc = 0x35c150u;
    // NOP
    // 0x35c154: 0x0  nop
    ctx->pc = 0x35c154u;
    // NOP
    // 0x35c158: 0x0  nop
    ctx->pc = 0x35c158u;
    // NOP
    // 0x35c15c: 0x0  nop
    ctx->pc = 0x35c15cu;
    // NOP
    // 0x35c160: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35C160u;
    {
        const bool branch_taken_0x35c160 = (false);
        if (branch_taken_0x35c160) {
            ctx->pc = 0x35C14Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c14c;
        }
    }
    ctx->pc = 0x35C168u;
    // 0x35c168: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35c168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35c16c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35c16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_35c170:
    // 0x35c170: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35c170u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35c174: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35c174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35c178: 0x0  nop
    ctx->pc = 0x35c178u;
    // NOP
    // 0x35c17c: 0x0  nop
    ctx->pc = 0x35c17cu;
    // NOP
    // 0x35c180: 0x0  nop
    ctx->pc = 0x35c180u;
    // NOP
    // 0x35c184: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35C184u;
    {
        const bool branch_taken_0x35c184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c184) {
            ctx->pc = 0x35C170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c170;
        }
    }
    ctx->pc = 0x35C18Cu;
label_35c18c:
    // 0x35c18c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35c190: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x35c190u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c194: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x35c194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x35c198: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x35c198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x35c19c: 0x162180b  movn        $v1, $t3, $v0
    ctx->pc = 0x35c19cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 11));
    // 0x35c1a0: 0x34a5e010  ori         $a1, $a1, 0xE010
    ctx->pc = 0x35c1a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57360);
    // 0x35c1a4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x35c1a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x35c1a8: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x35c1a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35c1ac: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x35c1acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x35c1b0: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x35c1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x35c1b4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x35c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35c1b8: 0x3484d480  ori         $a0, $a0, 0xD480
    ctx->pc = 0x35c1b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54400);
    // 0x35c1bc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x35c1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x35c1c0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35c1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35c1c4: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x35c1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x35c1c8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35c1cc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x35c1ccu;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 16)); // MMIO: 0x1000d410
    // 0x35c1d0: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x35c1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x35c1d4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x35c1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x35c1d8: 0xac6b0000  sw          $t3, 0x0($v1)
    ctx->pc = 0x35c1d8u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 11)); // MMIO: 0x1000d420
    // 0x35c1dc: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x35c1dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x35c1e0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x35c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35c1e4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x35c1e4u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x1000d400
    // 0x35c1e8: 0xf  sync
    ctx->pc = 0x35c1e8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35c1ec: 0x40f  sync.p
    ctx->pc = 0x35c1ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35c1f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x35c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35c1f4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35c1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35c1f8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x35C1F8u;
    {
        const bool branch_taken_0x35c1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C1F8u;
        // 0x35c1fc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c1f8) {
            ctx->pc = 0x35C254u;
            goto label_35c254;
        }
    }
    ctx->pc = 0x35C200u;
    // 0x35c200: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35c200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35c204: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x35c204u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7)); // MMIO: 0x1000e020
    // 0x35c208: 0xf  sync
    ctx->pc = 0x35c208u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35c20c: 0x40f  sync.p
    ctx->pc = 0x35c20cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35c210:
    // 0x35c210: 0x0  nop
    ctx->pc = 0x35c210u;
    // NOP
    // 0x35c214: 0x0  nop
    ctx->pc = 0x35c214u;
    // NOP
    // 0x35c218: 0x0  nop
    ctx->pc = 0x35c218u;
    // NOP
    // 0x35c21c: 0x0  nop
    ctx->pc = 0x35c21cu;
    // NOP
    // 0x35c220: 0x0  nop
    ctx->pc = 0x35c220u;
    // NOP
    // 0x35c224: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35C224u;
    {
        const bool branch_taken_0x35c224 = (false);
        if (branch_taken_0x35c224) {
            ctx->pc = 0x35C210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c210;
        }
    }
    ctx->pc = 0x35C22Cu;
    // 0x35c22c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35c22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35c230: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35c230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35c234: 0x0  nop
    ctx->pc = 0x35c234u;
    // NOP
label_35c238:
    // 0x35c238: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35c238u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35c23c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35c23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35c240: 0x0  nop
    ctx->pc = 0x35c240u;
    // NOP
    // 0x35c244: 0x0  nop
    ctx->pc = 0x35c244u;
    // NOP
    // 0x35c248: 0x0  nop
    ctx->pc = 0x35c248u;
    // NOP
    // 0x35c24c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35C24Cu;
    {
        const bool branch_taken_0x35c24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c24c) {
            ctx->pc = 0x35C238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c238;
        }
    }
    ctx->pc = 0x35C254u;
label_35c254:
    // 0x35c254: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35c254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35c258: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x35c258u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c25c: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x35c25cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x35c260: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x35c260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x35c264: 0x162180b  movn        $v1, $t3, $v0
    ctx->pc = 0x35c264u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 11));
    // 0x35c268: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x35c268u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c26c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x35c26cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x35c270: 0x6b1021  addu        $v0, $v1, $t3
    ctx->pc = 0x35c270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x35c274: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x35c274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35c278: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x35c278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35c27c: 0x654825  or          $t1, $v1, $a1
    ctx->pc = 0x35c27cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x35c280: 0x19600217  blez        $t3, . + 4 + (0x217 << 2)
    ctx->pc = 0x35C280u;
    {
        const bool branch_taken_0x35c280 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x35C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C280u;
        // 0x35c284: 0x454025  or          $t0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c280) {
            ctx->pc = 0x35CAE0u;
            goto label_35cae0;
        }
    }
    ctx->pc = 0x35C288u;
    // 0x35c288: 0x3c0c0001  lui         $t4, 0x1
    ctx->pc = 0x35c288u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)1 << 16));
    // 0x35c28c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x35c28cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x35c290: 0x1960005b  blez        $t3, . + 4 + (0x5B << 2)
    ctx->pc = 0x35C290u;
    {
        const bool branch_taken_0x35c290 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x35C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C290u;
        // 0x35c294: 0x31620007  andi        $v0, $t3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c290) {
            ctx->pc = 0x35C400u;
            goto label_35c400;
        }
    }
    ctx->pc = 0x35C298u;
    // 0x35c298: 0x104000b4  beqz        $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x35C298u;
    {
        const bool branch_taken_0x35c298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C298u;
        // 0x35c29c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c298) {
            ctx->pc = 0x35C56Cu;
            goto label_35c56c;
        }
    }
    ctx->pc = 0x35C2A0u;
    // 0x35c2a0: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x35C2A0u;
    {
        const bool branch_taken_0x35c2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C2A0u;
        // 0x35c2a4: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c2a0) {
            ctx->pc = 0x35C408u;
            goto label_35c408;
        }
    }
    ctx->pc = 0x35C2A8u;
    // 0x35c2a8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35c2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35c2ac: 0xe4203f20  swc1        $f0, 0x3F20($at)
    ctx->pc = 0x35c2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F20u, bits); }
    // 0x35c2b0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x35c2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c2b4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35c2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35c2b8: 0xe4213f24  swc1        $f1, 0x3F24($at)
    ctx->pc = 0x35c2b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F24u, bits); }
    // 0x35c2bc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x35c2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c2c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35c2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35c2c4: 0xe4203f28  swc1        $f0, 0x3F28($at)
    ctx->pc = 0x35c2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F28u, bits); }
    // 0x35c2c8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x35c2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c2cc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35c2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35c2d0: 0xe4213f2c  swc1        $f1, 0x3F2C($at)
    ctx->pc = 0x35c2d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F2Cu, bits); }
label_35c2d4:
    // 0x35c2d4: 0x42000039  di
    ctx->pc = 0x35c2d4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35c2d8: 0x40f  sync.p
    ctx->pc = 0x35c2d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35c2dc: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35c2e0: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x35c2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x35c2e4: 0x0  nop
    ctx->pc = 0x35c2e4u;
    // NOP
    // 0x35c2e8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35C2E8u;
    {
        const bool branch_taken_0x35c2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c2e8) {
            ctx->pc = 0x35C2D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c2d4;
        }
    }
    ctx->pc = 0x35C2F0u;
    // 0x35c2f0: 0xd9c10000  lqc2        $vf1, 0x0($t6)
    ctx->pc = 0x35c2f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x35c2f4: 0xd9340000  lqc2        $vf20, 0x0($t1)
    ctx->pc = 0x35c2f4u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x35c2f8: 0xd93b0010  lqc2        $vf27, 0x10($t1)
    ctx->pc = 0x35c2f8u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x35c2fc: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x35c2fcu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35c300: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x35c300u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35c304: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x35c304u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35c308: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x35c308u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35c30c: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x35c30cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35c310: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x35c310u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c314: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x35c314u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35c318: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x35c318u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35c31c: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x35c31cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35c320: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x35c320u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c324: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x35c324u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35c328: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x35c328u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c32c: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x35c32cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35c330: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x35c330u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35c334: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x35c334u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35c338: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x35c338u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35c33c: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x35c33cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35c340: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x35c340u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35c344: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x35c344u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35c348: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x35c348u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c34c: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x35c34cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35c350: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x35c350u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35c354: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x35c354u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35c358: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x35c358u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35c35c: 0x4bc74098  vmulx.xyz   $vf2, $vf8, $vf7x
    ctx->pc = 0x35c35cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c360: 0x4bc780da  vmulz.xyz   $vf3, $vf16, $vf7z
    ctx->pc = 0x35c360u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35c364: 0x4bc7491a  vmulz.xyz   $vf4, $vf9, $vf7z
    ctx->pc = 0x35c364u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35c368: 0x4bc78958  vmulx.xyz   $vf5, $vf17, $vf7x
    ctx->pc = 0x35c368u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35c36c: 0x4be314ac  vsub.xyzw   $vf18, $vf2, $vf3
    ctx->pc = 0x35c36cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35c370: 0x4be524e8  vadd.xyzw   $vf19, $vf4, $vf5
    ctx->pc = 0x35c370u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35c374: 0x4bc74099  vmuly.xyz   $vf2, $vf8, $vf7y
    ctx->pc = 0x35c374u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c378: 0x4bc780db  vmulw.xyz   $vf3, $vf16, $vf7w
    ctx->pc = 0x35c378u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35c37c: 0x4bc7491b  vmulw.xyz   $vf4, $vf9, $vf7w
    ctx->pc = 0x35c37cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35c380: 0x4bc78959  vmuly.xyz   $vf5, $vf17, $vf7y
    ctx->pc = 0x35c380u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35c384: 0x4be3166c  vsub.xyzw   $vf25, $vf2, $vf3
    ctx->pc = 0x35c384u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = PS2_VBLEND(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x35c388: 0x4be526a8  vadd.xyzw   $vf26, $vf4, $vf5
    ctx->pc = 0x35c388u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x35c38c: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x35c38cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35c390: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x35c390u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35c394: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x35c394u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35c398: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x35c398u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35c39c: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x35c39cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35c3a0: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x35c3a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35c3a4: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x35c3a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35c3a8: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x35c3a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35c3ac: 0x4bf9df2c  vsub.xyzw   $vf28, $vf27, $vf25
    ctx->pc = 0x35c3acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35c3b0: 0x4bf9df68  vadd.xyzw   $vf29, $vf27, $vf25
    ctx->pc = 0x35c3b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35c3b4: 0x4bf9dfa8  vadd.xyzw   $vf30, $vf27, $vf25
    ctx->pc = 0x35c3b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35c3b8: 0x4bf9dfec  vsub.xyzw   $vf31, $vf27, $vf25
    ctx->pc = 0x35c3b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35c3bc: 0x4bfae72c  vsub.xyzw   $vf28, $vf28, $vf26
    ctx->pc = 0x35c3bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35c3c0: 0x4bfaef6c  vsub.xyzw   $vf29, $vf29, $vf26
    ctx->pc = 0x35c3c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35c3c4: 0x4bfaf7a8  vadd.xyzw   $vf30, $vf30, $vf26
    ctx->pc = 0x35c3c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35c3c8: 0x4bfaffe8  vadd.xyzw   $vf31, $vf31, $vf26
    ctx->pc = 0x35c3c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35c3cc: 0xf9150000  sqc2        $vf21, 0x0($t0)
    ctx->pc = 0x35c3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35c3d0: 0xf9160010  sqc2        $vf22, 0x10($t0)
    ctx->pc = 0x35c3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35c3d4: 0xf9170020  sqc2        $vf23, 0x20($t0)
    ctx->pc = 0x35c3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35c3d8: 0xf9180030  sqc2        $vf24, 0x30($t0)
    ctx->pc = 0x35c3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35c3dc: 0xf91c0040  sqc2        $vf28, 0x40($t0)
    ctx->pc = 0x35c3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x35c3e0: 0xf91d0050  sqc2        $vf29, 0x50($t0)
    ctx->pc = 0x35c3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x35c3e4: 0xf91e0060  sqc2        $vf30, 0x60($t0)
    ctx->pc = 0x35c3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x35c3e8: 0xf91f0070  sqc2        $vf31, 0x70($t0)
    ctx->pc = 0x35c3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x35c3ec: 0x42000038  ei
    ctx->pc = 0x35c3ecu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35c3f0: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x35c3f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x35c3f4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x35c3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x35c3f8: 0x25080080  addiu       $t0, $t0, 0x80
    ctx->pc = 0x35c3f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x35c3fc: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x35c3fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_35c400:
    // 0x35c400: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x35c400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c404: 0x0  nop
    ctx->pc = 0x35c404u;
    // NOP
label_35c408:
    // 0x35c408: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35c408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35c40c: 0xe4203f20  swc1        $f0, 0x3F20($at)
    ctx->pc = 0x35c40cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F20u, bits); }
    // 0x35c410: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x35c410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c414: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35c414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35c418: 0xe4213f24  swc1        $f1, 0x3F24($at)
    ctx->pc = 0x35c418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F24u, bits); }
    // 0x35c41c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x35c41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c420: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35c420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35c424: 0xe4203f28  swc1        $f0, 0x3F28($at)
    ctx->pc = 0x35c424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F28u, bits); }
    // 0x35c428: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x35c428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c42c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35c42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35c430: 0xe4213f2c  swc1        $f1, 0x3F2C($at)
    ctx->pc = 0x35c430u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F2Cu, bits); }
label_35c434:
    // 0x35c434: 0x42000039  di
    ctx->pc = 0x35c434u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35c438: 0x40f  sync.p
    ctx->pc = 0x35c438u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35c43c: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35c440: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x35c440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x35c444: 0x0  nop
    ctx->pc = 0x35c444u;
    // NOP
    // 0x35c448: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35C448u;
    {
        const bool branch_taken_0x35c448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c448) {
            ctx->pc = 0x35C434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c434;
        }
    }
    ctx->pc = 0x35C450u;
    // 0x35c450: 0xd9c10000  lqc2        $vf1, 0x0($t6)
    ctx->pc = 0x35c450u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x35c454: 0xd9340000  lqc2        $vf20, 0x0($t1)
    ctx->pc = 0x35c454u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x35c458: 0xd93b0010  lqc2        $vf27, 0x10($t1)
    ctx->pc = 0x35c458u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x35c45c: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x35c45cu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35c460: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x35c460u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35c464: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x35c464u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35c468: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x35c468u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35c46c: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x35c46cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35c470: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x35c470u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c474: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x35c474u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35c478: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x35c478u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35c47c: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x35c47cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35c480: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x35c480u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c484: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x35c484u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35c488: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x35c488u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c48c: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x35c48cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35c490: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x35c490u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35c494: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x35c494u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35c498: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x35c498u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35c49c: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x35c49cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35c4a0: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x35c4a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35c4a4: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x35c4a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35c4a8: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x35c4a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c4ac: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x35c4acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35c4b0: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x35c4b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35c4b4: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x35c4b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35c4b8: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x35c4b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35c4bc: 0x4bc74098  vmulx.xyz   $vf2, $vf8, $vf7x
    ctx->pc = 0x35c4bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c4c0: 0x4bc780da  vmulz.xyz   $vf3, $vf16, $vf7z
    ctx->pc = 0x35c4c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35c4c4: 0x4bc7491a  vmulz.xyz   $vf4, $vf9, $vf7z
    ctx->pc = 0x35c4c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35c4c8: 0x4bc78958  vmulx.xyz   $vf5, $vf17, $vf7x
    ctx->pc = 0x35c4c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35c4cc: 0x4be314ac  vsub.xyzw   $vf18, $vf2, $vf3
    ctx->pc = 0x35c4ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35c4d0: 0x4be524e8  vadd.xyzw   $vf19, $vf4, $vf5
    ctx->pc = 0x35c4d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35c4d4: 0x4bc74099  vmuly.xyz   $vf2, $vf8, $vf7y
    ctx->pc = 0x35c4d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c4d8: 0x4bc780db  vmulw.xyz   $vf3, $vf16, $vf7w
    ctx->pc = 0x35c4d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35c4dc: 0x4bc7491b  vmulw.xyz   $vf4, $vf9, $vf7w
    ctx->pc = 0x35c4dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35c4e0: 0x4bc78959  vmuly.xyz   $vf5, $vf17, $vf7y
    ctx->pc = 0x35c4e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35c4e4: 0x4be3166c  vsub.xyzw   $vf25, $vf2, $vf3
    ctx->pc = 0x35c4e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = PS2_VBLEND(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x35c4e8: 0x4be526a8  vadd.xyzw   $vf26, $vf4, $vf5
    ctx->pc = 0x35c4e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x35c4ec: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x35c4ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35c4f0: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x35c4f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35c4f4: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x35c4f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35c4f8: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x35c4f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35c4fc: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x35c4fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35c500: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x35c500u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35c504: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x35c504u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35c508: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x35c508u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35c50c: 0x4bf9df2c  vsub.xyzw   $vf28, $vf27, $vf25
    ctx->pc = 0x35c50cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35c510: 0x4bf9df68  vadd.xyzw   $vf29, $vf27, $vf25
    ctx->pc = 0x35c510u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35c514: 0x4bf9dfa8  vadd.xyzw   $vf30, $vf27, $vf25
    ctx->pc = 0x35c514u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35c518: 0x4bf9dfec  vsub.xyzw   $vf31, $vf27, $vf25
    ctx->pc = 0x35c518u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35c51c: 0x4bfae72c  vsub.xyzw   $vf28, $vf28, $vf26
    ctx->pc = 0x35c51cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35c520: 0x4bfaef6c  vsub.xyzw   $vf29, $vf29, $vf26
    ctx->pc = 0x35c520u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35c524: 0x4bfaf7a8  vadd.xyzw   $vf30, $vf30, $vf26
    ctx->pc = 0x35c524u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35c528: 0x4bfaffe8  vadd.xyzw   $vf31, $vf31, $vf26
    ctx->pc = 0x35c528u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35c52c: 0xf9150000  sqc2        $vf21, 0x0($t0)
    ctx->pc = 0x35c52cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35c530: 0xf9160010  sqc2        $vf22, 0x10($t0)
    ctx->pc = 0x35c530u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35c534: 0xf9170020  sqc2        $vf23, 0x20($t0)
    ctx->pc = 0x35c534u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35c538: 0xf9180030  sqc2        $vf24, 0x30($t0)
    ctx->pc = 0x35c538u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35c53c: 0xf91c0040  sqc2        $vf28, 0x40($t0)
    ctx->pc = 0x35c53cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x35c540: 0xf91d0050  sqc2        $vf29, 0x50($t0)
    ctx->pc = 0x35c540u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x35c544: 0xf91e0060  sqc2        $vf30, 0x60($t0)
    ctx->pc = 0x35c544u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x35c548: 0xf91f0070  sqc2        $vf31, 0x70($t0)
    ctx->pc = 0x35c548u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x35c54c: 0x42000038  ei
    ctx->pc = 0x35c54cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35c550: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x35c550u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x35c554: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x35c554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x35c558: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x35c558u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x35c55c: 0x26b102a  slt         $v0, $s3, $t3
    ctx->pc = 0x35c55cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x35c560: 0x1040015f  beqz        $v0, . + 4 + (0x15F << 2)
    ctx->pc = 0x35C560u;
    {
        const bool branch_taken_0x35c560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C560u;
        // 0x35c564: 0x25080080  addiu       $t0, $t0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c560) {
            ctx->pc = 0x35CAE0u;
            goto label_35cae0;
        }
    }
    ctx->pc = 0x35C568u;
    // 0x35c568: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x35c568u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_35c56c:
    // 0x35c56c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x35c56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c570: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x35c570u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c574: 0x0  nop
    ctx->pc = 0x35c574u;
    // NOP
label_35c578:
    // 0x35c578: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x35c578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c57c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35c57cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35c580: 0xe4203f20  swc1        $f0, 0x3F20($at)
    ctx->pc = 0x35c580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F20u, bits); }
    // 0x35c584: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x35c584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c588: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35c588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35c58c: 0xe4213f24  swc1        $f1, 0x3F24($at)
    ctx->pc = 0x35c58cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F24u, bits); }
    // 0x35c590: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x35c590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c594: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35c594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35c598: 0xe4203f28  swc1        $f0, 0x3F28($at)
    ctx->pc = 0x35c598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F28u, bits); }
    // 0x35c59c: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x35c59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c5a0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35c5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35c5a4: 0xe4213f2c  swc1        $f1, 0x3F2C($at)
    ctx->pc = 0x35c5a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F2Cu, bits); }
label_35c5a8:
    // 0x35c5a8: 0x42000039  di
    ctx->pc = 0x35c5a8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35c5ac: 0x40f  sync.p
    ctx->pc = 0x35c5acu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35c5b0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35c5b4: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x35c5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x35c5b8: 0x0  nop
    ctx->pc = 0x35c5b8u;
    // NOP
    // 0x35c5bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35C5BCu;
    {
        const bool branch_taken_0x35c5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c5bc) {
            ctx->pc = 0x35C5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c5a8;
        }
    }
    ctx->pc = 0x35C5C4u;
    // 0x35c5c4: 0xd9c10000  lqc2        $vf1, 0x0($t6)
    ctx->pc = 0x35c5c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x35c5c8: 0xd9340000  lqc2        $vf20, 0x0($t1)
    ctx->pc = 0x35c5c8u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x35c5cc: 0xd93b0010  lqc2        $vf27, 0x10($t1)
    ctx->pc = 0x35c5ccu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x35c5d0: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x35c5d0u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35c5d4: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x35c5d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35c5d8: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x35c5d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35c5dc: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x35c5dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35c5e0: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x35c5e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35c5e4: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x35c5e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c5e8: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x35c5e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35c5ec: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x35c5ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35c5f0: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x35c5f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35c5f4: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x35c5f4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c5f8: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x35c5f8u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35c5fc: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x35c5fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c600: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x35c600u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35c604: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x35c604u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35c608: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x35c608u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35c60c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x35c60cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35c610: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x35c610u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35c614: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x35c614u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35c618: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x35c618u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35c61c: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x35c61cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c620: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x35c620u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35c624: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x35c624u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35c628: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x35c628u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35c62c: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x35c62cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35c630: 0x4bc74098  vmulx.xyz   $vf2, $vf8, $vf7x
    ctx->pc = 0x35c630u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c634: 0x4bc780da  vmulz.xyz   $vf3, $vf16, $vf7z
    ctx->pc = 0x35c634u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35c638: 0x4bc7491a  vmulz.xyz   $vf4, $vf9, $vf7z
    ctx->pc = 0x35c638u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35c63c: 0x4bc78958  vmulx.xyz   $vf5, $vf17, $vf7x
    ctx->pc = 0x35c63cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35c640: 0x4be314ac  vsub.xyzw   $vf18, $vf2, $vf3
    ctx->pc = 0x35c640u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35c644: 0x4be524e8  vadd.xyzw   $vf19, $vf4, $vf5
    ctx->pc = 0x35c644u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35c648: 0x4bc74099  vmuly.xyz   $vf2, $vf8, $vf7y
    ctx->pc = 0x35c648u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c64c: 0x4bc780db  vmulw.xyz   $vf3, $vf16, $vf7w
    ctx->pc = 0x35c64cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35c650: 0x4bc7491b  vmulw.xyz   $vf4, $vf9, $vf7w
    ctx->pc = 0x35c650u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35c654: 0x4bc78959  vmuly.xyz   $vf5, $vf17, $vf7y
    ctx->pc = 0x35c654u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35c658: 0x4be3166c  vsub.xyzw   $vf25, $vf2, $vf3
    ctx->pc = 0x35c658u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = PS2_VBLEND(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x35c65c: 0x4be526a8  vadd.xyzw   $vf26, $vf4, $vf5
    ctx->pc = 0x35c65cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x35c660: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x35c660u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35c664: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x35c664u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35c668: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x35c668u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35c66c: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x35c66cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35c670: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x35c670u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35c674: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x35c674u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35c678: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x35c678u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35c67c: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x35c67cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35c680: 0x4bf9df2c  vsub.xyzw   $vf28, $vf27, $vf25
    ctx->pc = 0x35c680u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35c684: 0x4bf9df68  vadd.xyzw   $vf29, $vf27, $vf25
    ctx->pc = 0x35c684u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35c688: 0x4bf9dfa8  vadd.xyzw   $vf30, $vf27, $vf25
    ctx->pc = 0x35c688u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35c68c: 0x4bf9dfec  vsub.xyzw   $vf31, $vf27, $vf25
    ctx->pc = 0x35c68cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35c690: 0x4bfae72c  vsub.xyzw   $vf28, $vf28, $vf26
    ctx->pc = 0x35c690u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35c694: 0x4bfaef6c  vsub.xyzw   $vf29, $vf29, $vf26
    ctx->pc = 0x35c694u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35c698: 0x4bfaf7a8  vadd.xyzw   $vf30, $vf30, $vf26
    ctx->pc = 0x35c698u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35c69c: 0x4bfaffe8  vadd.xyzw   $vf31, $vf31, $vf26
    ctx->pc = 0x35c69cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35c6a0: 0xf9150000  sqc2        $vf21, 0x0($t0)
    ctx->pc = 0x35c6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35c6a4: 0xf9160010  sqc2        $vf22, 0x10($t0)
    ctx->pc = 0x35c6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35c6a8: 0xf9170020  sqc2        $vf23, 0x20($t0)
    ctx->pc = 0x35c6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35c6ac: 0xf9180030  sqc2        $vf24, 0x30($t0)
    ctx->pc = 0x35c6acu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35c6b0: 0xf91c0040  sqc2        $vf28, 0x40($t0)
    ctx->pc = 0x35c6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x35c6b4: 0xf91d0050  sqc2        $vf29, 0x50($t0)
    ctx->pc = 0x35c6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x35c6b8: 0xf91e0060  sqc2        $vf30, 0x60($t0)
    ctx->pc = 0x35c6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x35c6bc: 0xf91f0070  sqc2        $vf31, 0x70($t0)
    ctx->pc = 0x35c6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x35c6c0: 0x42000038  ei
    ctx->pc = 0x35c6c0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35c6c4: 0x25240020  addiu       $a0, $t1, 0x20
    ctx->pc = 0x35c6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x35c6c8: 0x25030080  addiu       $v1, $t0, 0x80
    ctx->pc = 0x35c6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x35c6cc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x35c6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c6d0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35c6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35c6d4: 0xe4203f20  swc1        $f0, 0x3F20($at)
    ctx->pc = 0x35c6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F20u, bits); }
    // 0x35c6d8: 0xc541000c  lwc1        $f1, 0xC($t2)
    ctx->pc = 0x35c6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c6dc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35c6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35c6e0: 0xe4213f24  swc1        $f1, 0x3F24($at)
    ctx->pc = 0x35c6e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F24u, bits); }
    // 0x35c6e4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x35c6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c6e8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35c6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35c6ec: 0xe4203f28  swc1        $f0, 0x3F28($at)
    ctx->pc = 0x35c6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F28u, bits); }
    // 0x35c6f0: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x35c6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c6f4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35c6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35c6f8: 0xe4213f2c  swc1        $f1, 0x3F2C($at)
    ctx->pc = 0x35c6f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F2Cu, bits); }
label_35c6fc:
    // 0x35c6fc: 0x42000039  di
    ctx->pc = 0x35c6fcu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35c700: 0x40f  sync.p
    ctx->pc = 0x35c700u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35c704: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35c704u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35c708: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x35c708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x35c70c: 0x0  nop
    ctx->pc = 0x35c70cu;
    // NOP
    // 0x35c710: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35C710u;
    {
        const bool branch_taken_0x35c710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c710) {
            ctx->pc = 0x35C6FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c6fc;
        }
    }
    ctx->pc = 0x35C718u;
    // 0x35c718: 0xd9c10000  lqc2        $vf1, 0x0($t6)
    ctx->pc = 0x35c718u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x35c71c: 0xd8940000  lqc2        $vf20, 0x0($a0)
    ctx->pc = 0x35c71cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35c720: 0xd89b0010  lqc2        $vf27, 0x10($a0)
    ctx->pc = 0x35c720u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x35c724: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x35c724u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35c728: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x35c728u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35c72c: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x35c72cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35c730: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x35c730u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35c734: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x35c734u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35c738: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x35c738u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c73c: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x35c73cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35c740: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x35c740u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35c744: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x35c744u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35c748: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x35c748u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c74c: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x35c74cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35c750: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x35c750u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c754: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x35c754u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35c758: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x35c758u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35c75c: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x35c75cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35c760: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x35c760u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35c764: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x35c764u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35c768: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x35c768u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35c76c: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x35c76cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35c770: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x35c770u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c774: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x35c774u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35c778: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x35c778u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35c77c: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x35c77cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35c780: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x35c780u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35c784: 0x4bc74098  vmulx.xyz   $vf2, $vf8, $vf7x
    ctx->pc = 0x35c784u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c788: 0x4bc780da  vmulz.xyz   $vf3, $vf16, $vf7z
    ctx->pc = 0x35c788u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35c78c: 0x4bc7491a  vmulz.xyz   $vf4, $vf9, $vf7z
    ctx->pc = 0x35c78cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35c790: 0x4bc78958  vmulx.xyz   $vf5, $vf17, $vf7x
    ctx->pc = 0x35c790u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35c794: 0x4be314ac  vsub.xyzw   $vf18, $vf2, $vf3
    ctx->pc = 0x35c794u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35c798: 0x4be524e8  vadd.xyzw   $vf19, $vf4, $vf5
    ctx->pc = 0x35c798u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35c79c: 0x4bc74099  vmuly.xyz   $vf2, $vf8, $vf7y
    ctx->pc = 0x35c79cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c7a0: 0x4bc780db  vmulw.xyz   $vf3, $vf16, $vf7w
    ctx->pc = 0x35c7a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35c7a4: 0x4bc7491b  vmulw.xyz   $vf4, $vf9, $vf7w
    ctx->pc = 0x35c7a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35c7a8: 0x4bc78959  vmuly.xyz   $vf5, $vf17, $vf7y
    ctx->pc = 0x35c7a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35c7ac: 0x4be3166c  vsub.xyzw   $vf25, $vf2, $vf3
    ctx->pc = 0x35c7acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = PS2_VBLEND(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x35c7b0: 0x4be526a8  vadd.xyzw   $vf26, $vf4, $vf5
    ctx->pc = 0x35c7b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x35c7b4: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x35c7b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35c7b8: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x35c7b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35c7bc: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x35c7bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35c7c0: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x35c7c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35c7c4: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x35c7c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35c7c8: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x35c7c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35c7cc: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x35c7ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35c7d0: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x35c7d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35c7d4: 0x4bf9df2c  vsub.xyzw   $vf28, $vf27, $vf25
    ctx->pc = 0x35c7d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35c7d8: 0x4bf9df68  vadd.xyzw   $vf29, $vf27, $vf25
    ctx->pc = 0x35c7d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35c7dc: 0x4bf9dfa8  vadd.xyzw   $vf30, $vf27, $vf25
    ctx->pc = 0x35c7dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35c7e0: 0x4bf9dfec  vsub.xyzw   $vf31, $vf27, $vf25
    ctx->pc = 0x35c7e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35c7e4: 0x4bfae72c  vsub.xyzw   $vf28, $vf28, $vf26
    ctx->pc = 0x35c7e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35c7e8: 0x4bfaef6c  vsub.xyzw   $vf29, $vf29, $vf26
    ctx->pc = 0x35c7e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35c7ec: 0x4bfaf7a8  vadd.xyzw   $vf30, $vf30, $vf26
    ctx->pc = 0x35c7ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35c7f0: 0x4bfaffe8  vadd.xyzw   $vf31, $vf31, $vf26
    ctx->pc = 0x35c7f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35c7f4: 0xf8750000  sqc2        $vf21, 0x0($v1)
    ctx->pc = 0x35c7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35c7f8: 0xf8760010  sqc2        $vf22, 0x10($v1)
    ctx->pc = 0x35c7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35c7fc: 0xf8770020  sqc2        $vf23, 0x20($v1)
    ctx->pc = 0x35c7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35c800: 0xf8780030  sqc2        $vf24, 0x30($v1)
    ctx->pc = 0x35c800u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35c804: 0xf87c0040  sqc2        $vf28, 0x40($v1)
    ctx->pc = 0x35c804u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x35c808: 0xf87d0050  sqc2        $vf29, 0x50($v1)
    ctx->pc = 0x35c808u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x35c80c: 0xf87e0060  sqc2        $vf30, 0x60($v1)
    ctx->pc = 0x35c80cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x35c810: 0xf87f0070  sqc2        $vf31, 0x70($v1)
    ctx->pc = 0x35c810u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x35c814: 0x42000038  ei
    ctx->pc = 0x35c814u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35c818: 0x25240040  addiu       $a0, $t1, 0x40
    ctx->pc = 0x35c818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x35c81c: 0x25030100  addiu       $v1, $t0, 0x100
    ctx->pc = 0x35c81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 256));
    // 0x35c820: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x35c820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c824: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35c824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35c828: 0xe4203f20  swc1        $f0, 0x3F20($at)
    ctx->pc = 0x35c828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F20u, bits); }
    // 0x35c82c: 0xc5410014  lwc1        $f1, 0x14($t2)
    ctx->pc = 0x35c82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c830: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35c830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35c834: 0xe4213f24  swc1        $f1, 0x3F24($at)
    ctx->pc = 0x35c834u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F24u, bits); }
    // 0x35c838: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x35c838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c83c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35c83cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35c840: 0xe4203f28  swc1        $f0, 0x3F28($at)
    ctx->pc = 0x35c840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F28u, bits); }
    // 0x35c844: 0xc4e10014  lwc1        $f1, 0x14($a3)
    ctx->pc = 0x35c844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c848: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35c848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35c84c: 0xe4213f2c  swc1        $f1, 0x3F2C($at)
    ctx->pc = 0x35c84cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F2Cu, bits); }
label_35c850:
    // 0x35c850: 0x42000039  di
    ctx->pc = 0x35c850u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35c854: 0x40f  sync.p
    ctx->pc = 0x35c854u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35c858: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35c858u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35c85c: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x35c85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x35c860: 0x0  nop
    ctx->pc = 0x35c860u;
    // NOP
    // 0x35c864: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35C864u;
    {
        const bool branch_taken_0x35c864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c864) {
            ctx->pc = 0x35C850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c850;
        }
    }
    ctx->pc = 0x35C86Cu;
    // 0x35c86c: 0xd9c10000  lqc2        $vf1, 0x0($t6)
    ctx->pc = 0x35c86cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x35c870: 0xd8940000  lqc2        $vf20, 0x0($a0)
    ctx->pc = 0x35c870u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35c874: 0xd89b0010  lqc2        $vf27, 0x10($a0)
    ctx->pc = 0x35c874u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x35c878: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x35c878u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35c87c: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x35c87cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35c880: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x35c880u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35c884: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x35c884u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35c888: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x35c888u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35c88c: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x35c88cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c890: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x35c890u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35c894: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x35c894u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35c898: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x35c898u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35c89c: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x35c89cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c8a0: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x35c8a0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35c8a4: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x35c8a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c8a8: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x35c8a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35c8ac: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x35c8acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35c8b0: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x35c8b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35c8b4: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x35c8b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35c8b8: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x35c8b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35c8bc: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x35c8bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35c8c0: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x35c8c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35c8c4: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x35c8c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c8c8: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x35c8c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35c8cc: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x35c8ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35c8d0: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x35c8d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35c8d4: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x35c8d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35c8d8: 0x4bc74098  vmulx.xyz   $vf2, $vf8, $vf7x
    ctx->pc = 0x35c8d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c8dc: 0x4bc780da  vmulz.xyz   $vf3, $vf16, $vf7z
    ctx->pc = 0x35c8dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35c8e0: 0x4bc7491a  vmulz.xyz   $vf4, $vf9, $vf7z
    ctx->pc = 0x35c8e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35c8e4: 0x4bc78958  vmulx.xyz   $vf5, $vf17, $vf7x
    ctx->pc = 0x35c8e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35c8e8: 0x4be314ac  vsub.xyzw   $vf18, $vf2, $vf3
    ctx->pc = 0x35c8e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35c8ec: 0x4be524e8  vadd.xyzw   $vf19, $vf4, $vf5
    ctx->pc = 0x35c8ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35c8f0: 0x4bc74099  vmuly.xyz   $vf2, $vf8, $vf7y
    ctx->pc = 0x35c8f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c8f4: 0x4bc780db  vmulw.xyz   $vf3, $vf16, $vf7w
    ctx->pc = 0x35c8f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35c8f8: 0x4bc7491b  vmulw.xyz   $vf4, $vf9, $vf7w
    ctx->pc = 0x35c8f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35c8fc: 0x4bc78959  vmuly.xyz   $vf5, $vf17, $vf7y
    ctx->pc = 0x35c8fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35c900: 0x4be3166c  vsub.xyzw   $vf25, $vf2, $vf3
    ctx->pc = 0x35c900u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = PS2_VBLEND(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x35c904: 0x4be526a8  vadd.xyzw   $vf26, $vf4, $vf5
    ctx->pc = 0x35c904u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x35c908: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x35c908u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35c90c: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x35c90cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35c910: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x35c910u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35c914: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x35c914u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35c918: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x35c918u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35c91c: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x35c91cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35c920: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x35c920u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35c924: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x35c924u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35c928: 0x4bf9df2c  vsub.xyzw   $vf28, $vf27, $vf25
    ctx->pc = 0x35c928u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35c92c: 0x4bf9df68  vadd.xyzw   $vf29, $vf27, $vf25
    ctx->pc = 0x35c92cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35c930: 0x4bf9dfa8  vadd.xyzw   $vf30, $vf27, $vf25
    ctx->pc = 0x35c930u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35c934: 0x4bf9dfec  vsub.xyzw   $vf31, $vf27, $vf25
    ctx->pc = 0x35c934u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35c938: 0x4bfae72c  vsub.xyzw   $vf28, $vf28, $vf26
    ctx->pc = 0x35c938u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35c93c: 0x4bfaef6c  vsub.xyzw   $vf29, $vf29, $vf26
    ctx->pc = 0x35c93cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35c940: 0x4bfaf7a8  vadd.xyzw   $vf30, $vf30, $vf26
    ctx->pc = 0x35c940u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35c944: 0x4bfaffe8  vadd.xyzw   $vf31, $vf31, $vf26
    ctx->pc = 0x35c944u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35c948: 0xf8750000  sqc2        $vf21, 0x0($v1)
    ctx->pc = 0x35c948u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35c94c: 0xf8760010  sqc2        $vf22, 0x10($v1)
    ctx->pc = 0x35c94cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35c950: 0xf8770020  sqc2        $vf23, 0x20($v1)
    ctx->pc = 0x35c950u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35c954: 0xf8780030  sqc2        $vf24, 0x30($v1)
    ctx->pc = 0x35c954u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35c958: 0xf87c0040  sqc2        $vf28, 0x40($v1)
    ctx->pc = 0x35c958u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x35c95c: 0xf87d0050  sqc2        $vf29, 0x50($v1)
    ctx->pc = 0x35c95cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x35c960: 0xf87e0060  sqc2        $vf30, 0x60($v1)
    ctx->pc = 0x35c960u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x35c964: 0xf87f0070  sqc2        $vf31, 0x70($v1)
    ctx->pc = 0x35c964u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x35c968: 0x42000038  ei
    ctx->pc = 0x35c968u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35c96c: 0x25240060  addiu       $a0, $t1, 0x60
    ctx->pc = 0x35c96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
    // 0x35c970: 0x25030180  addiu       $v1, $t0, 0x180
    ctx->pc = 0x35c970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 384));
    // 0x35c974: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x35c974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c978: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35c978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35c97c: 0xe4203f20  swc1        $f0, 0x3F20($at)
    ctx->pc = 0x35c97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F20u, bits); }
    // 0x35c980: 0xc541001c  lwc1        $f1, 0x1C($t2)
    ctx->pc = 0x35c980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c984: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35c984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35c988: 0xe4213f24  swc1        $f1, 0x3F24($at)
    ctx->pc = 0x35c988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F24u, bits); }
    // 0x35c98c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x35c98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c990: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35c990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35c994: 0xe4203f28  swc1        $f0, 0x3F28($at)
    ctx->pc = 0x35c994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F28u, bits); }
    // 0x35c998: 0xc4e1001c  lwc1        $f1, 0x1C($a3)
    ctx->pc = 0x35c998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c99c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35c99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35c9a0: 0xe4213f2c  swc1        $f1, 0x3F2C($at)
    ctx->pc = 0x35c9a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F2Cu, bits); }
label_35c9a4:
    // 0x35c9a4: 0x42000039  di
    ctx->pc = 0x35c9a4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35c9a8: 0x40f  sync.p
    ctx->pc = 0x35c9a8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35c9ac: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35c9b0: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x35c9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x35c9b4: 0x0  nop
    ctx->pc = 0x35c9b4u;
    // NOP
    // 0x35c9b8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35C9B8u;
    {
        const bool branch_taken_0x35c9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c9b8) {
            ctx->pc = 0x35C9A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c9a4;
        }
    }
    ctx->pc = 0x35C9C0u;
    // 0x35c9c0: 0xd9c10000  lqc2        $vf1, 0x0($t6)
    ctx->pc = 0x35c9c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x35c9c4: 0xd8940000  lqc2        $vf20, 0x0($a0)
    ctx->pc = 0x35c9c4u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35c9c8: 0xd89b0010  lqc2        $vf27, 0x10($a0)
    ctx->pc = 0x35c9c8u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x35c9cc: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x35c9ccu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35c9d0: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x35c9d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35c9d4: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x35c9d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35c9d8: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x35c9d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35c9dc: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x35c9dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35c9e0: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x35c9e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c9e4: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x35c9e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35c9e8: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x35c9e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35c9ec: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x35c9ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35c9f0: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x35c9f0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c9f4: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x35c9f4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35c9f8: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x35c9f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c9fc: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x35c9fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35ca00: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x35ca00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35ca04: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x35ca04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35ca08: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x35ca08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35ca0c: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x35ca0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35ca10: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x35ca10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35ca14: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x35ca14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35ca18: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x35ca18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35ca1c: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x35ca1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35ca20: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x35ca20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35ca24: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x35ca24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35ca28: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x35ca28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ca2c: 0x4bc74098  vmulx.xyz   $vf2, $vf8, $vf7x
    ctx->pc = 0x35ca2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35ca30: 0x4bc780da  vmulz.xyz   $vf3, $vf16, $vf7z
    ctx->pc = 0x35ca30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35ca34: 0x4bc7491a  vmulz.xyz   $vf4, $vf9, $vf7z
    ctx->pc = 0x35ca34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35ca38: 0x4bc78958  vmulx.xyz   $vf5, $vf17, $vf7x
    ctx->pc = 0x35ca38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35ca3c: 0x4be314ac  vsub.xyzw   $vf18, $vf2, $vf3
    ctx->pc = 0x35ca3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35ca40: 0x4be524e8  vadd.xyzw   $vf19, $vf4, $vf5
    ctx->pc = 0x35ca40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35ca44: 0x4bc74099  vmuly.xyz   $vf2, $vf8, $vf7y
    ctx->pc = 0x35ca44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35ca48: 0x4bc780db  vmulw.xyz   $vf3, $vf16, $vf7w
    ctx->pc = 0x35ca48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35ca4c: 0x4bc7491b  vmulw.xyz   $vf4, $vf9, $vf7w
    ctx->pc = 0x35ca4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35ca50: 0x4bc78959  vmuly.xyz   $vf5, $vf17, $vf7y
    ctx->pc = 0x35ca50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35ca54: 0x4be3166c  vsub.xyzw   $vf25, $vf2, $vf3
    ctx->pc = 0x35ca54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = PS2_VBLEND(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x35ca58: 0x4be526a8  vadd.xyzw   $vf26, $vf4, $vf5
    ctx->pc = 0x35ca58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x35ca5c: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x35ca5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35ca60: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x35ca60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35ca64: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x35ca64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35ca68: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x35ca68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35ca6c: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x35ca6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35ca70: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x35ca70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35ca74: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x35ca74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35ca78: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x35ca78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35ca7c: 0x4bf9df2c  vsub.xyzw   $vf28, $vf27, $vf25
    ctx->pc = 0x35ca7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35ca80: 0x4bf9df68  vadd.xyzw   $vf29, $vf27, $vf25
    ctx->pc = 0x35ca80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35ca84: 0x4bf9dfa8  vadd.xyzw   $vf30, $vf27, $vf25
    ctx->pc = 0x35ca84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35ca88: 0x4bf9dfec  vsub.xyzw   $vf31, $vf27, $vf25
    ctx->pc = 0x35ca88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35ca8c: 0x4bfae72c  vsub.xyzw   $vf28, $vf28, $vf26
    ctx->pc = 0x35ca8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35ca90: 0x4bfaef6c  vsub.xyzw   $vf29, $vf29, $vf26
    ctx->pc = 0x35ca90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35ca94: 0x4bfaf7a8  vadd.xyzw   $vf30, $vf30, $vf26
    ctx->pc = 0x35ca94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35ca98: 0x4bfaffe8  vadd.xyzw   $vf31, $vf31, $vf26
    ctx->pc = 0x35ca98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35ca9c: 0xf8750000  sqc2        $vf21, 0x0($v1)
    ctx->pc = 0x35ca9cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35caa0: 0xf8760010  sqc2        $vf22, 0x10($v1)
    ctx->pc = 0x35caa0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35caa4: 0xf8770020  sqc2        $vf23, 0x20($v1)
    ctx->pc = 0x35caa4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35caa8: 0xf8780030  sqc2        $vf24, 0x30($v1)
    ctx->pc = 0x35caa8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35caac: 0xf87c0040  sqc2        $vf28, 0x40($v1)
    ctx->pc = 0x35caacu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x35cab0: 0xf87d0050  sqc2        $vf29, 0x50($v1)
    ctx->pc = 0x35cab0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x35cab4: 0xf87e0060  sqc2        $vf30, 0x60($v1)
    ctx->pc = 0x35cab4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x35cab8: 0xf87f0070  sqc2        $vf31, 0x70($v1)
    ctx->pc = 0x35cab8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x35cabc: 0x42000038  ei
    ctx->pc = 0x35cabcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35cac0: 0x25290080  addiu       $t1, $t1, 0x80
    ctx->pc = 0x35cac0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 128));
    // 0x35cac4: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x35cac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x35cac8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x35cac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x35cacc: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x35caccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x35cad0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x35cad0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x35cad4: 0x26b102a  slt         $v0, $s3, $t3
    ctx->pc = 0x35cad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x35cad8: 0x1440fea7  bnez        $v0, . + 4 + (-0x159 << 2)
    ctx->pc = 0x35CAD8u;
    {
        const bool branch_taken_0x35cad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35CADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CAD8u;
        // 0x35cadc: 0x25080200  addiu       $t0, $t0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cad8) {
            ctx->pc = 0x35C578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c578;
        }
    }
    ctx->pc = 0x35CAE0u;
label_35cae0:
    // 0x35cae0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35cae4: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x35cae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x35cae8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35cae8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x35caec: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x35caecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x35caf0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x35CAF0u;
    {
        const bool branch_taken_0x35caf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CAF0u;
        // 0x35caf4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35caf0) {
            ctx->pc = 0x35CB28u;
            goto label_35cb28;
        }
    }
    ctx->pc = 0x35CAF8u;
    // 0x35caf8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x35caf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35cafc: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35cafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35cb00: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35cb00u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x35cb04: 0xf  sync
    ctx->pc = 0x35cb04u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35cb08: 0x40f  sync.p
    ctx->pc = 0x35cb08u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35cb0c:
    // 0x35cb0c: 0x0  nop
    ctx->pc = 0x35cb0cu;
    // NOP
    // 0x35cb10: 0x0  nop
    ctx->pc = 0x35cb10u;
    // NOP
    // 0x35cb14: 0x0  nop
    ctx->pc = 0x35cb14u;
    // NOP
    // 0x35cb18: 0x0  nop
    ctx->pc = 0x35cb18u;
    // NOP
    // 0x35cb1c: 0x0  nop
    ctx->pc = 0x35cb1cu;
    // NOP
    // 0x35cb20: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35CB20u;
    {
        const bool branch_taken_0x35cb20 = (false);
        if (branch_taken_0x35cb20) {
            ctx->pc = 0x35CB0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35cb0c;
        }
    }
    ctx->pc = 0x35CB28u;
label_35cb28:
    // 0x35cb28: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35cb2c: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x35cb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x35cb30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35cb30u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x1000d400
    // 0x35cb34: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x35cb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x35cb38: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x35CB38u;
    {
        const bool branch_taken_0x35cb38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CB38u;
        // 0x35cb3c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cb38) {
            ctx->pc = 0x35CB94u;
            goto label_35cb94;
        }
    }
    ctx->pc = 0x35CB40u;
    // 0x35cb40: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x35cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35cb44: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35cb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35cb48: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35cb48u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x35cb4c: 0xf  sync
    ctx->pc = 0x35cb4cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35cb50: 0x40f  sync.p
    ctx->pc = 0x35cb50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35cb54:
    // 0x35cb54: 0x0  nop
    ctx->pc = 0x35cb54u;
    // NOP
    // 0x35cb58: 0x0  nop
    ctx->pc = 0x35cb58u;
    // NOP
    // 0x35cb5c: 0x0  nop
    ctx->pc = 0x35cb5cu;
    // NOP
    // 0x35cb60: 0x0  nop
    ctx->pc = 0x35cb60u;
    // NOP
    // 0x35cb64: 0x0  nop
    ctx->pc = 0x35cb64u;
    // NOP
    // 0x35cb68: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35CB68u;
    {
        const bool branch_taken_0x35cb68 = (false);
        if (branch_taken_0x35cb68) {
            ctx->pc = 0x35CB54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35cb54;
        }
    }
    ctx->pc = 0x35CB70u;
    // 0x35cb70: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35cb74: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35cb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_35cb78:
    // 0x35cb78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35cb78u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35cb7c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35cb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35cb80: 0x0  nop
    ctx->pc = 0x35cb80u;
    // NOP
    // 0x35cb84: 0x0  nop
    ctx->pc = 0x35cb84u;
    // NOP
    // 0x35cb88: 0x0  nop
    ctx->pc = 0x35cb88u;
    // NOP
    // 0x35cb8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35CB8Cu;
    {
        const bool branch_taken_0x35cb8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35cb8c) {
            ctx->pc = 0x35CB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35cb78;
        }
    }
    ctx->pc = 0x35CB94u;
label_35cb94:
    // 0x35cb94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35cb98: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x35cb98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x35cb9c: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x35cb9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x35cba0: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x35cba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35cba4: 0x162300b  movn        $a2, $t3, $v0
    ctx->pc = 0x35cba4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 11));
    // 0x35cba8: 0x34a5e010  ori         $a1, $a1, 0xE010
    ctx->pc = 0x35cba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57360);
    // 0x35cbac: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x35cbacu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x35cbb0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x35cbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x35cbb4: 0xcb1821  addu        $v1, $a2, $t3
    ctx->pc = 0x35cbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x35cbb8: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x35cbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x35cbbc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x35cbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35cbc0: 0x3484d080  ori         $a0, $a0, 0xD080
    ctx->pc = 0x35cbc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53376);
    // 0x35cbc4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35cbc8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x35cbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x35cbcc: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x35cbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x35cbd0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35cbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35cbd4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x35cbd4u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 18)); // MMIO: 0x1000d010
    // 0x35cbd8: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x35cbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x35cbdc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35cbe0: 0xac6d0000  sw          $t5, 0x0($v1)
    ctx->pc = 0x35cbe0u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 13)); // MMIO: 0x1000d020
    // 0x35cbe4: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x35cbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x35cbe8: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x35cbe8u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 7)); // MMIO: 0x1000d000
    // 0x35cbec: 0xf  sync
    ctx->pc = 0x35cbecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35cbf0: 0x40f  sync.p
    ctx->pc = 0x35cbf0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35cbf4: 0x20f8021  addu        $s0, $s0, $t7
    ctx->pc = 0x35cbf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    // 0x35cbf8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x35cbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x35cbfc: 0x2559021  addu        $s2, $s2, $s5
    ctx->pc = 0x35cbfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x35cc00: 0x286a021  addu        $s4, $s4, $a2
    ctx->pc = 0x35cc00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x35cc04: 0x0  nop
    ctx->pc = 0x35cc04u;
    // NOP
label_35cc08:
    // 0x35cc08: 0x1a20020b  blez        $s1, . + 4 + (0x20B << 2)
    ctx->pc = 0x35CC08u;
    {
        const bool branch_taken_0x35cc08 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x35CC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CC08u;
        // 0x35cc0c: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cc08) {
            ctx->pc = 0x35D438u;
            goto label_35d438;
        }
    }
    ctx->pc = 0x35CC10u;
    // 0x35cc10: 0x111023  negu        $v0, $s1
    ctx->pc = 0x35cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x35cc14: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x35cc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35cc18: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x35cc18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cc1c: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x35cc1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35cc20: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x35cc20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x35cc24: 0x108000aa  beqz        $a0, . + 4 + (0xAA << 2)
    ctx->pc = 0x35CC24u;
    {
        const bool branch_taken_0x35cc24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CC24u;
        // 0x35cc28: 0x280182d  daddu       $v1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cc24) {
            ctx->pc = 0x35CED0u;
            goto label_35ced0;
        }
    }
    ctx->pc = 0x35CC2Cu;
    // 0x35cc2c: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x35cc2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x35cc30: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x35CC30u;
    {
        const bool branch_taken_0x35cc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CC30u;
        // 0x35cc34: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cc30) {
            ctx->pc = 0x35CDF4u;
            goto label_35cdf4;
        }
    }
    ctx->pc = 0x35CC38u;
    // 0x35cc38: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x35CC38u;
    {
        const bool branch_taken_0x35cc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cc38) {
            ctx->pc = 0x35CC3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35CC38u;
            // 0x35cc3c: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x35CD20u;
            goto label_35cd20;
        }
    }
    ctx->pc = 0x35CC40u;
    // 0x35cc40: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x35cc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35cc44: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x35cc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x35cc48: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x35cc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35cc4c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x35cc4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x35cc50: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x35cc50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35cc54: 0xda140000  lqc2        $vf20, 0x0($s0)
    ctx->pc = 0x35cc54u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35cc58: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x35cc58u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35cc5c: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x35cc5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35cc60: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x35cc60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35cc64: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x35cc64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35cc68: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x35cc68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35cc6c: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x35cc6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35cc70: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x35cc70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35cc74: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x35cc74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35cc78: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x35cc78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35cc7c: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x35cc7cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35cc80: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x35cc80u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35cc84: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x35cc84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35cc88: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x35cc88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35cc8c: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x35cc8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35cc90: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x35cc90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35cc94: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x35cc94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35cc98: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x35cc98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35cc9c: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x35cc9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35cca0: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x35cca0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35cca4: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x35cca4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35cca8: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x35cca8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35ccac: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x35ccacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35ccb0: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x35ccb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35ccb4: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x35ccb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ccb8: 0x4bc74098  vmulx.xyz   $vf2, $vf8, $vf7x
    ctx->pc = 0x35ccb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35ccbc: 0x4bc780da  vmulz.xyz   $vf3, $vf16, $vf7z
    ctx->pc = 0x35ccbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35ccc0: 0x4bc7491a  vmulz.xyz   $vf4, $vf9, $vf7z
    ctx->pc = 0x35ccc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35ccc4: 0x4bc78958  vmulx.xyz   $vf5, $vf17, $vf7x
    ctx->pc = 0x35ccc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35ccc8: 0x4be314ac  vsub.xyzw   $vf18, $vf2, $vf3
    ctx->pc = 0x35ccc8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35cccc: 0x4be524e8  vadd.xyzw   $vf19, $vf4, $vf5
    ctx->pc = 0x35ccccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35ccd0: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x35ccd0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35ccd4: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x35ccd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35ccd8: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x35ccd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35ccdc: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x35ccdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35cce0: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x35cce0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35cce4: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x35cce4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35cce8: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x35cce8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35ccec: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x35ccecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35ccf0: 0xfa550000  sqc2        $vf21, 0x0($s2)
    ctx->pc = 0x35ccf0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35ccf4: 0xfa560010  sqc2        $vf22, 0x10($s2)
    ctx->pc = 0x35ccf4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35ccf8: 0xfa570020  sqc2        $vf23, 0x20($s2)
    ctx->pc = 0x35ccf8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35ccfc: 0xfa580030  sqc2        $vf24, 0x30($s2)
    ctx->pc = 0x35ccfcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35cd00: 0x42000038  ei
    ctx->pc = 0x35cd00u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35cd04: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x35cd04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35cd08: 0x21e8021  addu        $s0, $s0, $fp
    ctx->pc = 0x35cd08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x35cd0c: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x35cd0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x35cd10: 0x2871821  addu        $v1, $s4, $a3
    ctx->pc = 0x35cd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x35cd14: 0x2633ffff  addiu       $s3, $s1, -0x1
    ctx->pc = 0x35cd14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x35cd18: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x35cd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35cd1c: 0x0  nop
    ctx->pc = 0x35cd1cu;
    // NOP
label_35cd20:
    // 0x35cd20: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x35cd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x35cd24: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x35cd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35cd28: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x35cd28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x35cd2c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x35cd2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35cd30: 0xda140000  lqc2        $vf20, 0x0($s0)
    ctx->pc = 0x35cd30u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35cd34: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x35cd34u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35cd38: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x35cd38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35cd3c: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x35cd3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35cd40: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x35cd40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35cd44: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x35cd44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35cd48: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x35cd48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35cd4c: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x35cd4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35cd50: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x35cd50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35cd54: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x35cd54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35cd58: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x35cd58u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35cd5c: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x35cd5cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35cd60: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x35cd60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35cd64: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x35cd64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35cd68: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x35cd68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35cd6c: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x35cd6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35cd70: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x35cd70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35cd74: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x35cd74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35cd78: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x35cd78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35cd7c: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x35cd7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35cd80: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x35cd80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35cd84: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x35cd84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35cd88: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x35cd88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35cd8c: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x35cd8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35cd90: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x35cd90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35cd94: 0x4bc74098  vmulx.xyz   $vf2, $vf8, $vf7x
    ctx->pc = 0x35cd94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35cd98: 0x4bc780da  vmulz.xyz   $vf3, $vf16, $vf7z
    ctx->pc = 0x35cd98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35cd9c: 0x4bc7491a  vmulz.xyz   $vf4, $vf9, $vf7z
    ctx->pc = 0x35cd9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35cda0: 0x4bc78958  vmulx.xyz   $vf5, $vf17, $vf7x
    ctx->pc = 0x35cda0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35cda4: 0x4be314ac  vsub.xyzw   $vf18, $vf2, $vf3
    ctx->pc = 0x35cda4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35cda8: 0x4be524e8  vadd.xyzw   $vf19, $vf4, $vf5
    ctx->pc = 0x35cda8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35cdac: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x35cdacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35cdb0: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x35cdb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35cdb4: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x35cdb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35cdb8: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x35cdb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35cdbc: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x35cdbcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35cdc0: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x35cdc0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35cdc4: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x35cdc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35cdc8: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x35cdc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35cdcc: 0xfa550000  sqc2        $vf21, 0x0($s2)
    ctx->pc = 0x35cdccu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35cdd0: 0xfa560010  sqc2        $vf22, 0x10($s2)
    ctx->pc = 0x35cdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35cdd4: 0xfa570020  sqc2        $vf23, 0x20($s2)
    ctx->pc = 0x35cdd4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35cdd8: 0xfa580030  sqc2        $vf24, 0x30($s2)
    ctx->pc = 0x35cdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35cddc: 0x42000038  ei
    ctx->pc = 0x35cddcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35cde0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x35cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35cde4: 0x21e8021  addu        $s0, $s0, $fp
    ctx->pc = 0x35cde4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x35cde8: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x35cde8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x35cdec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35cdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35cdf0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x35cdf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_35cdf4:
    // 0x35cdf4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x35cdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35cdf8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x35cdf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x35cdfc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x35cdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35ce00: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x35ce00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x35ce04: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x35ce04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35ce08: 0xda140000  lqc2        $vf20, 0x0($s0)
    ctx->pc = 0x35ce08u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35ce0c: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x35ce0cu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ce10: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x35ce10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35ce14: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x35ce14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ce18: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x35ce18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35ce1c: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x35ce1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35ce20: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x35ce20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35ce24: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x35ce24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35ce28: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x35ce28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35ce2c: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x35ce2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35ce30: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x35ce30u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35ce34: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x35ce34u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ce38: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x35ce38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35ce3c: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x35ce3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35ce40: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x35ce40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35ce44: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x35ce44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35ce48: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x35ce48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35ce4c: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x35ce4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35ce50: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x35ce50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35ce54: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x35ce54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35ce58: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x35ce58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35ce5c: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x35ce5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35ce60: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x35ce60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35ce64: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x35ce64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35ce68: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x35ce68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ce6c: 0x4bc74098  vmulx.xyz   $vf2, $vf8, $vf7x
    ctx->pc = 0x35ce6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35ce70: 0x4bc780da  vmulz.xyz   $vf3, $vf16, $vf7z
    ctx->pc = 0x35ce70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35ce74: 0x4bc7491a  vmulz.xyz   $vf4, $vf9, $vf7z
    ctx->pc = 0x35ce74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35ce78: 0x4bc78958  vmulx.xyz   $vf5, $vf17, $vf7x
    ctx->pc = 0x35ce78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35ce7c: 0x4be314ac  vsub.xyzw   $vf18, $vf2, $vf3
    ctx->pc = 0x35ce7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35ce80: 0x4be524e8  vadd.xyzw   $vf19, $vf4, $vf5
    ctx->pc = 0x35ce80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35ce84: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x35ce84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35ce88: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x35ce88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35ce8c: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x35ce8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35ce90: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x35ce90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35ce94: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x35ce94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35ce98: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x35ce98u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35ce9c: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x35ce9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35cea0: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x35cea0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35cea4: 0xfa550000  sqc2        $vf21, 0x0($s2)
    ctx->pc = 0x35cea4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35cea8: 0xfa560010  sqc2        $vf22, 0x10($s2)
    ctx->pc = 0x35cea8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35ceac: 0xfa570020  sqc2        $vf23, 0x20($s2)
    ctx->pc = 0x35ceacu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35ceb0: 0xfa580030  sqc2        $vf24, 0x30($s2)
    ctx->pc = 0x35ceb0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35ceb4: 0x42000038  ei
    ctx->pc = 0x35ceb4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35ceb8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x35ceb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35cebc: 0x21e8021  addu        $s0, $s0, $fp
    ctx->pc = 0x35cebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x35cec0: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x35cec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x35cec4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x35cec4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x35cec8: 0x1260015b  beqz        $s3, . + 4 + (0x15B << 2)
    ctx->pc = 0x35CEC8u;
    {
        const bool branch_taken_0x35cec8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CEC8u;
        // 0x35cecc: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cec8) {
            ctx->pc = 0x35D438u;
            goto label_35d438;
        }
    }
    ctx->pc = 0x35CED0u;
label_35ced0:
    // 0x35ced0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x35ced0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ced4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x35ced4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x35ced8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x35ced8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35cedc: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x35cedcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x35cee0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x35cee0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35cee4: 0xda140000  lqc2        $vf20, 0x0($s0)
    ctx->pc = 0x35cee4u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35cee8: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x35cee8u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ceec: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x35ceecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35cef0: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x35cef0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35cef4: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x35cef4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35cef8: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x35cef8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35cefc: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x35cefcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35cf00: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x35cf00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35cf04: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x35cf04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35cf08: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x35cf08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35cf0c: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x35cf0cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35cf10: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x35cf10u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35cf14: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x35cf14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35cf18: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x35cf18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35cf1c: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x35cf1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35cf20: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x35cf20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35cf24: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x35cf24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35cf28: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x35cf28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35cf2c: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x35cf2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35cf30: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x35cf30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35cf34: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x35cf34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35cf38: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x35cf38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35cf3c: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x35cf3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35cf40: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x35cf40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35cf44: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x35cf44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35cf48: 0x4bc74098  vmulx.xyz   $vf2, $vf8, $vf7x
    ctx->pc = 0x35cf48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35cf4c: 0x4bc780da  vmulz.xyz   $vf3, $vf16, $vf7z
    ctx->pc = 0x35cf4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35cf50: 0x4bc7491a  vmulz.xyz   $vf4, $vf9, $vf7z
    ctx->pc = 0x35cf50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35cf54: 0x4bc78958  vmulx.xyz   $vf5, $vf17, $vf7x
    ctx->pc = 0x35cf54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35cf58: 0x4be314ac  vsub.xyzw   $vf18, $vf2, $vf3
    ctx->pc = 0x35cf58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35cf5c: 0x4be524e8  vadd.xyzw   $vf19, $vf4, $vf5
    ctx->pc = 0x35cf5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35cf60: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x35cf60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35cf64: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x35cf64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35cf68: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x35cf68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35cf6c: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x35cf6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35cf70: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x35cf70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35cf74: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x35cf74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35cf78: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x35cf78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35cf7c: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x35cf7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35cf80: 0xfa550000  sqc2        $vf21, 0x0($s2)
    ctx->pc = 0x35cf80u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35cf84: 0xfa560010  sqc2        $vf22, 0x10($s2)
    ctx->pc = 0x35cf84u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35cf88: 0xfa570020  sqc2        $vf23, 0x20($s2)
    ctx->pc = 0x35cf88u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35cf8c: 0xfa580030  sqc2        $vf24, 0x30($s2)
    ctx->pc = 0x35cf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35cf90: 0x42000038  ei
    ctx->pc = 0x35cf90u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35cf94: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x35cf94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35cf98: 0x21e8021  addu        $s0, $s0, $fp
    ctx->pc = 0x35cf98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x35cf9c: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x35cf9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x35cfa0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x35cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x35cfa4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x35cfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35cfa8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x35cfa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x35cfac: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x35cfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35cfb0: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x35cfb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x35cfb4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x35cfb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35cfb8: 0xda140000  lqc2        $vf20, 0x0($s0)
    ctx->pc = 0x35cfb8u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35cfbc: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x35cfbcu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35cfc0: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x35cfc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35cfc4: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x35cfc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35cfc8: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x35cfc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35cfcc: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x35cfccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35cfd0: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x35cfd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35cfd4: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x35cfd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35cfd8: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x35cfd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35cfdc: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x35cfdcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35cfe0: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x35cfe0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35cfe4: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x35cfe4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35cfe8: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x35cfe8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35cfec: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x35cfecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35cff0: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x35cff0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35cff4: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x35cff4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35cff8: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x35cff8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35cffc: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x35cffcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35d000: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x35d000u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35d004: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x35d004u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35d008: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x35d008u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35d00c: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x35d00cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35d010: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x35d010u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35d014: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x35d014u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35d018: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x35d018u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35d01c: 0x4bc74098  vmulx.xyz   $vf2, $vf8, $vf7x
    ctx->pc = 0x35d01cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35d020: 0x4bc780da  vmulz.xyz   $vf3, $vf16, $vf7z
    ctx->pc = 0x35d020u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35d024: 0x4bc7491a  vmulz.xyz   $vf4, $vf9, $vf7z
    ctx->pc = 0x35d024u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35d028: 0x4bc78958  vmulx.xyz   $vf5, $vf17, $vf7x
    ctx->pc = 0x35d028u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35d02c: 0x4be314ac  vsub.xyzw   $vf18, $vf2, $vf3
    ctx->pc = 0x35d02cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35d030: 0x4be524e8  vadd.xyzw   $vf19, $vf4, $vf5
    ctx->pc = 0x35d030u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35d034: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x35d034u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35d038: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x35d038u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35d03c: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x35d03cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35d040: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x35d040u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35d044: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x35d044u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35d048: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x35d048u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35d04c: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x35d04cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35d050: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x35d050u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35d054: 0xfa550000  sqc2        $vf21, 0x0($s2)
    ctx->pc = 0x35d054u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35d058: 0xfa560010  sqc2        $vf22, 0x10($s2)
    ctx->pc = 0x35d058u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35d05c: 0xfa570020  sqc2        $vf23, 0x20($s2)
    ctx->pc = 0x35d05cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35d060: 0xfa580030  sqc2        $vf24, 0x30($s2)
    ctx->pc = 0x35d060u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35d064: 0x42000038  ei
    ctx->pc = 0x35d064u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35d068: 0x21e8021  addu        $s0, $s0, $fp
    ctx->pc = 0x35d068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x35d06c: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x35d06cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x35d070: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x35d070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x35d074: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x35d074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d078: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x35d078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x35d07c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x35d07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35d080: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x35d080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x35d084: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x35d084u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35d088: 0xda140000  lqc2        $vf20, 0x0($s0)
    ctx->pc = 0x35d088u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35d08c: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x35d08cu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35d090: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x35d090u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35d094: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x35d094u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35d098: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x35d098u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35d09c: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x35d09cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35d0a0: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x35d0a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35d0a4: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x35d0a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35d0a8: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x35d0a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35d0ac: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x35d0acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35d0b0: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x35d0b0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35d0b4: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x35d0b4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35d0b8: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x35d0b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35d0bc: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x35d0bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35d0c0: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x35d0c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35d0c4: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x35d0c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35d0c8: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x35d0c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35d0cc: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x35d0ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35d0d0: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x35d0d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35d0d4: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x35d0d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35d0d8: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x35d0d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35d0dc: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x35d0dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35d0e0: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x35d0e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35d0e4: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x35d0e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35d0e8: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x35d0e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35d0ec: 0x4bc74098  vmulx.xyz   $vf2, $vf8, $vf7x
    ctx->pc = 0x35d0ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35d0f0: 0x4bc780da  vmulz.xyz   $vf3, $vf16, $vf7z
    ctx->pc = 0x35d0f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35d0f4: 0x4bc7491a  vmulz.xyz   $vf4, $vf9, $vf7z
    ctx->pc = 0x35d0f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35d0f8: 0x4bc78958  vmulx.xyz   $vf5, $vf17, $vf7x
    ctx->pc = 0x35d0f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35d0fc: 0x4be314ac  vsub.xyzw   $vf18, $vf2, $vf3
    ctx->pc = 0x35d0fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35d100: 0x4be524e8  vadd.xyzw   $vf19, $vf4, $vf5
    ctx->pc = 0x35d100u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35d104: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x35d104u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35d108: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x35d108u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35d10c: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x35d10cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35d110: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x35d110u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35d114: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x35d114u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35d118: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x35d118u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35d11c: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x35d11cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35d120: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x35d120u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35d124: 0xfa550000  sqc2        $vf21, 0x0($s2)
    ctx->pc = 0x35d124u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35d128: 0xfa560010  sqc2        $vf22, 0x10($s2)
    ctx->pc = 0x35d128u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35d12c: 0xfa570020  sqc2        $vf23, 0x20($s2)
    ctx->pc = 0x35d12cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35d130: 0xfa580030  sqc2        $vf24, 0x30($s2)
    ctx->pc = 0x35d130u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35d134: 0x42000038  ei
    ctx->pc = 0x35d134u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35d138: 0x21e8021  addu        $s0, $s0, $fp
    ctx->pc = 0x35d138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x35d13c: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x35d13cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x35d140: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x35d140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x35d144: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x35d144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d148: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x35d148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x35d14c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x35d14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35d150: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x35d150u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x35d154: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x35d154u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35d158: 0xda140000  lqc2        $vf20, 0x0($s0)
    ctx->pc = 0x35d158u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35d15c: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x35d15cu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35d160: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x35d160u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35d164: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x35d164u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35d168: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x35d168u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35d16c: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x35d16cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35d170: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x35d170u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35d174: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x35d174u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35d178: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x35d178u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35d17c: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x35d17cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35d180: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x35d180u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35d184: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x35d184u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35d188: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x35d188u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35d18c: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x35d18cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35d190: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x35d190u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35d194: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x35d194u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35d198: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x35d198u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35d19c: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x35d19cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35d1a0: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x35d1a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35d1a4: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x35d1a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35d1a8: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x35d1a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35d1ac: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x35d1acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35d1b0: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x35d1b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35d1b4: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x35d1b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35d1b8: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x35d1b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35d1bc: 0x4bc74098  vmulx.xyz   $vf2, $vf8, $vf7x
    ctx->pc = 0x35d1bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35d1c0: 0x4bc780da  vmulz.xyz   $vf3, $vf16, $vf7z
    ctx->pc = 0x35d1c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35d1c4: 0x4bc7491a  vmulz.xyz   $vf4, $vf9, $vf7z
    ctx->pc = 0x35d1c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35d1c8: 0x4bc78958  vmulx.xyz   $vf5, $vf17, $vf7x
    ctx->pc = 0x35d1c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35d1cc: 0x4be314ac  vsub.xyzw   $vf18, $vf2, $vf3
    ctx->pc = 0x35d1ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35d1d0: 0x4be524e8  vadd.xyzw   $vf19, $vf4, $vf5
    ctx->pc = 0x35d1d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35d1d4: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x35d1d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35d1d8: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x35d1d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35d1dc: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x35d1dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35d1e0: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x35d1e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35d1e4: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x35d1e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35d1e8: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x35d1e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35d1ec: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x35d1ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35d1f0: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x35d1f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35d1f4: 0xfa550000  sqc2        $vf21, 0x0($s2)
    ctx->pc = 0x35d1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35d1f8: 0xfa560010  sqc2        $vf22, 0x10($s2)
    ctx->pc = 0x35d1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35d1fc: 0xfa570020  sqc2        $vf23, 0x20($s2)
    ctx->pc = 0x35d1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35d200: 0xfa580030  sqc2        $vf24, 0x30($s2)
    ctx->pc = 0x35d200u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35d204: 0x42000038  ei
    ctx->pc = 0x35d204u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35d208: 0x21e8021  addu        $s0, $s0, $fp
    ctx->pc = 0x35d208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x35d20c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x35d20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x35d210: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x35d210u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x35d214: 0x1660ff2e  bnez        $s3, . + 4 + (-0xD2 << 2)
    ctx->pc = 0x35D214u;
    {
        const bool branch_taken_0x35d214 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D214u;
        // 0x35d218: 0x2469021  addu        $s2, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d214) {
            ctx->pc = 0x35CED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ced0;
        }
    }
    ctx->pc = 0x35D21Cu;
    // 0x35d21c: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x35D21Cu;
    {
        const bool branch_taken_0x35d21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D21Cu;
        // 0x35d220: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d21c) {
            ctx->pc = 0x35D43Cu;
            goto label_35d43c;
        }
    }
    ctx->pc = 0x35D224u;
    // 0x35d224: 0x0  nop
    ctx->pc = 0x35d224u;
    // NOP
label_35d228:
    // 0x35d228: 0x1a200083  blez        $s1, . + 4 + (0x83 << 2)
    ctx->pc = 0x35D228u;
    {
        const bool branch_taken_0x35d228 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x35D22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D228u;
        // 0x35d22c: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d228) {
            ctx->pc = 0x35D438u;
            goto label_35d438;
        }
    }
    ctx->pc = 0x35D230u;
    // 0x35d230: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x35d230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d234: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x35d234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d238: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x35d238u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d23c: 0x0  nop
    ctx->pc = 0x35d23cu;
    // NOP
label_35d240:
    // 0x35d240: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x35D240u;
    SET_GPR_U32(ctx, 31, 0x35D248u);
    ctx->pc = 0x35D244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D240u;
    // 0x35d244: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x35D240u, 0x35D248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D248u;
label_35d248:
    // 0x35d248: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x35d248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35d24c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x35d24cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x35d250: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x35d250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35d254: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x35D254u;
    SET_GPR_U32(ctx, 31, 0x35D25Cu);
    ctx->pc = 0x35D258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D254u;
    // 0x35d258: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x35D254u, 0x35D25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D25Cu;
label_35d25c:
    // 0x35d25c: 0xc6a50000  lwc1        $f5, 0x0($s5)
    ctx->pc = 0x35d25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x35d260: 0x4600a107  neg.s       $f4, $f20
    ctx->pc = 0x35d260u;
    ctx->f[4] = FPU_NEG_S(ctx->f[20]);
    // 0x35d264: 0xc6c90000  lwc1        $f9, 0x0($s6)
    ctx->pc = 0x35d264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x35d268: 0xc6a70008  lwc1        $f7, 0x8($s5)
    ctx->pc = 0x35d268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x35d26c: 0x46050042  mul.s       $f1, $f0, $f5
    ctx->pc = 0x35d26cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x35d270: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x35d270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35d274: 0x46092302  mul.s       $f12, $f4, $f9
    ctx->pc = 0x35d274u;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x35d278: 0xc6c20008  lwc1        $f2, 0x8($s6)
    ctx->pc = 0x35d278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35d27c: 0x4605a142  mul.s       $f5, $f20, $f5
    ctx->pc = 0x35d27cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[20], ctx->f[5]);
    // 0x35d280: 0xc6c80004  lwc1        $f8, 0x4($s6)
    ctx->pc = 0x35d280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x35d284: 0x4607a182  mul.s       $f6, $f20, $f7
    ctx->pc = 0x35d284u;
    ctx->f[6] = FPU_MUL_S(ctx->f[20], ctx->f[7]);
    // 0x35d288: 0x460202c2  mul.s       $f11, $f0, $f2
    ctx->pc = 0x35d288u;
    ctx->f[11] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x35d28c: 0x4603a502  mul.s       $f20, $f20, $f3
    ctx->pc = 0x35d28cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x35d290: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x35d290u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x35d294: 0x46090242  mul.s       $f9, $f0, $f9
    ctx->pc = 0x35d294u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x35d298: 0x46080282  mul.s       $f10, $f0, $f8
    ctx->pc = 0x35d298u;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x35d29c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x35d29cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x35d2a0: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x35d2a0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x35d2a4: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x35d2a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x35d2a8: 0x460c0840  add.s       $f1, $f1, $f12
    ctx->pc = 0x35d2a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x35d2ac: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x35d2acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x35d2b0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x35d2b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x35d2b4: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x35d2b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x35d2b8: 0x46092940  add.s       $f5, $f5, $f9
    ctx->pc = 0x35d2b8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[9]);
    // 0x35d2bc: 0x460aa500  add.s       $f20, $f20, $f10
    ctx->pc = 0x35d2bcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[10]);
    // 0x35d2c0: 0x460b3180  add.s       $f6, $f6, $f11
    ctx->pc = 0x35d2c0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[11]);
    // 0x35d2c4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x35d2c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x35d2c8: 0x46162942  mul.s       $f5, $f5, $f22
    ctx->pc = 0x35d2c8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[22]);
    // 0x35d2cc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x35d2ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x35d2d0: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x35d2d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x35d2d4: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x35d2d4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x35d2d8: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x35d2d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x35d2dc: 0x46163182  mul.s       $f6, $f6, $f22
    ctx->pc = 0x35d2dcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[22]);
    // 0x35d2e0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x35d2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x35d2e4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x35d2e4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x35d2e8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x35d2e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x35d2ec: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x35d2ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x35d2f0: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x35d2f0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x35d2f4: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x35d2f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x35d2f8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x35d2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d2fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35d2fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x35d300: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x35d300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x35d304: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x35d304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35d308: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x35d308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d30c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x35d30cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x35d310: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x35d310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35d314: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x35d314u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x35d318: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x35d318u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x35d31c: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x35d31cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x35d320: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x35d320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d324: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x35d324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35d328: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x35d328u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x35d32c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x35d32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35d330: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x35d330u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x35d334: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x35d334u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x35d338: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x35d338u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x35d33c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x35d33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35d340: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x35d340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35d344: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x35d344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d348: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x35d348u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x35d34c: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x35d34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x35d350: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x35d350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x35d354: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35d354u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x35d358: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x35d358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x35d35c: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x35d35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35d360: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x35d360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35d364: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x35d364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d368: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x35d368u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x35d36c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35d36cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x35d370: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x35d370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x35d374: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x35d374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35d378: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x35d378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35d37c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x35d37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d380: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x35d380u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x35d384: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35d384u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x35d388: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x35d388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x35d38c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x35d38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35d390: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x35d390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x35d394: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x35d394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35d398: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x35d398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d39c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x35d39cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x35d3a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35d3a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x35d3a4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x35d3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x35d3a8: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x35d3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35d3ac: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x35d3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35d3b0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x35d3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d3b4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x35d3b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x35d3b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35d3b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x35d3bc: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x35d3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x35d3c0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x35d3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35d3c4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x35d3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35d3c8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x35d3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d3cc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x35d3ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x35d3d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35d3d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x35d3d4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x35d3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x35d3d8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x35d3d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x35d3dc: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x35d3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35d3e0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x35d3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d3e4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x35d3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35d3e8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x35d3e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x35d3ec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x35d3ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x35d3f0: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x35d3f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x35d3f4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x35d3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35d3f8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x35d3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d3fc: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x35d3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35d400: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x35d400u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x35d404: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x35d404u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x35d408: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x35d408u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x35d40c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x35d40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35d410: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x35d410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d414: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x35d414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35d418: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x35d418u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x35d41c: 0x23e8821  addu        $s1, $s1, $fp
    ctx->pc = 0x35d41cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x35d420: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x35d420u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x35d424: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x35d424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x35d428: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x35d428u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x35d42c: 0x1660ff84  bnez        $s3, . + 4 + (-0x7C << 2)
    ctx->pc = 0x35D42Cu;
    {
        const bool branch_taken_0x35d42c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D42Cu;
        // 0x35d430: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d42c) {
            ctx->pc = 0x35D240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d240;
        }
    }
    ctx->pc = 0x35D434u;
    // 0x35d434: 0x0  nop
    ctx->pc = 0x35d434u;
    // NOP
label_35d438:
    // 0x35d438: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x35d438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_35d43c:
    // 0x35d43c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x35d43cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x35d440: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x35d440u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x35d444: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x35d444u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x35d448: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x35d448u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x35d44c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x35d44cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35d450: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x35d450u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x35d454: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x35d454u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35d458: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x35d458u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35d45c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x35d45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35d460: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x35d460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x35d464: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x35d464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x35d468: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x35d468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35d46c: 0x3e00008  jr          $ra
    ctx->pc = 0x35D46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D46Cu;
        // 0x35d470: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D474u;
    // 0x35d474: 0x0  nop
    ctx->pc = 0x35d474u;
    // NOP
    ctx->pc = 0x35d478u;
}
