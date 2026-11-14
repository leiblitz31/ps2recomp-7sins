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

// Function: sub_0019C5D0
// Address: 0x19c5d0 - 0x19c8e0
void sub_0019C5D0_0x19c5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C5D0_0x19c5d0");
#endif

    switch (ctx->pc) {
        case 0x19c5f8u: goto label_19c5f8;
        case 0x19c634u: goto label_19c634;
        case 0x19c6fcu: goto label_19c6fc;
        case 0x19c710u: goto label_19c710;
        case 0x19c76cu: goto label_19c76c;
        case 0x19c790u: goto label_19c790;
        case 0x19c7b0u: goto label_19c7b0;
        case 0x19c7f0u: goto label_19c7f0;
        case 0x19c87cu: goto label_19c87c;
        case 0x19c8c4u: goto label_19c8c4;
        default: break;
    }

    ctx->pc = 0x19c5d0u;

    // 0x19c5d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x19c5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19c5d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19c5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19c5d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19c5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19c5dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19c5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19c5e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19c5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19c5e4: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x19c5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x19c5e8: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x19c5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x19c5ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19c5ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c5f0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x19C5F0u;
    {
        const bool branch_taken_0x19c5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c5f0) {
            ctx->pc = 0x19C638u;
            goto label_19c638;
        }
    }
    ctx->pc = 0x19C5F8u;
label_19c5f8:
    // 0x19c5f8: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x19c5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x19c5fc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x19c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19c600: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19c600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19c604: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x19c604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x19c608: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19c608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c60c: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19C60Cu;
    {
        const bool branch_taken_0x19c60c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19c60c) {
            ctx->pc = 0x19C634u;
            goto label_19c634;
        }
    }
    ctx->pc = 0x19C614u;
    // 0x19c614: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x19c614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x19c618: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x19c618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19c61c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c620: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x19c620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x19c624: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x19c624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19c628: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c62c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19C62Cu;
    SET_GPR_U32(ctx, 31, 0x19C634u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19C62Cu, 0x19C634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C634u;
label_19c634:
    // 0x19c634: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19c634u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_19c638:
    // 0x19c638: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x19c638u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x19c63c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x19C63Cu;
    {
        const bool branch_taken_0x19c63c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c63c) {
            ctx->pc = 0x19C5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c5f8;
        }
    }
    ctx->pc = 0x19C644u;
    // 0x19c644: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x19c644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19c648: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x19c648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19c64c: 0x1060009d  beqz        $v1, . + 4 + (0x9D << 2)
    ctx->pc = 0x19C64Cu;
    {
        const bool branch_taken_0x19c64c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c64c) {
            ctx->pc = 0x19C8C4u;
            goto label_19c8c4;
        }
    }
    ctx->pc = 0x19C654u;
    // 0x19c654: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x19c654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19c658: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x19c658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19c65c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x19c65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19c660: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x19c660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19c664: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19c664u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19c668: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19c668u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19c66c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x19c66cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x19c670: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19c670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19c674: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x19c674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x19c678: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C678u;
    {
        const bool branch_taken_0x19c678 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x19c678) {
            ctx->pc = 0x19C68Cu;
            goto label_19c68c;
        }
    }
    ctx->pc = 0x19C680u;
    // 0x19c680: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C680u;
    {
        const bool branch_taken_0x19c680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c680) {
            ctx->pc = 0x19C68Cu;
            goto label_19c68c;
        }
    }
    ctx->pc = 0x19C688u;
    // 0x19c688: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x19c688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_19c68c:
    // 0x19c68c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x19c68cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19c690: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x19c690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19c694: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19c694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19c698: 0x8c700010  lw          $s0, 0x10($v1)
    ctx->pc = 0x19c698u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x19c69c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x19c69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19c6a0: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x19c6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19c6a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19c6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19c6a8: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x19C6A8u;
    {
        const bool branch_taken_0x19c6a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19c6a8) {
            ctx->pc = 0x19C6DCu;
            goto label_19c6dc;
        }
    }
    ctx->pc = 0x19C6B0u;
    // 0x19c6b0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x19c6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19c6b4: 0x90630029  lbu         $v1, 0x29($v1)
    ctx->pc = 0x19c6b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 41)));
    // 0x19c6b8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19C6B8u;
    {
        const bool branch_taken_0x19c6b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c6b8) {
            ctx->pc = 0x19C6D0u;
            goto label_19c6d0;
        }
    }
    ctx->pc = 0x19C6C0u;
    // 0x19c6c0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x19c6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19c6c4: 0x8c72001c  lw          $s2, 0x1C($v1)
    ctx->pc = 0x19c6c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x19c6c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19C6C8u;
    {
        const bool branch_taken_0x19c6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c6c8) {
            ctx->pc = 0x19C6D8u;
            goto label_19c6d8;
        }
    }
    ctx->pc = 0x19C6D0u;
label_19c6d0:
    // 0x19c6d0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x19c6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19c6d4: 0x8c720018  lw          $s2, 0x18($v1)
    ctx->pc = 0x19c6d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_19c6d8:
    // 0x19c6d8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x19c6d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19c6dc:
    // 0x19c6dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19c6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c6e0: 0x12030078  beq         $s0, $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x19C6E0u;
    {
        const bool branch_taken_0x19c6e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x19c6e0) {
            ctx->pc = 0x19C8C4u;
            goto label_19c8c4;
        }
    }
    ctx->pc = 0x19C6E8u;
    // 0x19c6e8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x19c6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19c6ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19c6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c6f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19c6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c6f4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19C6F4u;
    SET_GPR_U32(ctx, 31, 0x19C6FCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19C6F4u, 0x19C6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C6FCu;
label_19c6fc:
    // 0x19c6fc: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x19c6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19c700: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19c700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c704: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x19c704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x19c708: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x19C708u;
    SET_GPR_U32(ctx, 31, 0x19C710u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x19C708u, 0x19C710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C710u;
label_19c710:
    // 0x19c710: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x19c710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x19c714: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19c714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19c718: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x19c718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19c71c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19c71cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19c720: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x19c720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x19c724: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x19c724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x19c728: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19c728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19c72c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x19c72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19c730: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19c730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19c734: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x19c734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x19c738: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x19c738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19c73c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19c73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19c740: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x19c740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19c744: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x19c744u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19c748: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x19c748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19c74c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x19c74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19c750: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x19c750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19c754: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x19c754u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19c758: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x19c758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19c75c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19c75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c760: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c764: 0xc08c208  jal         func_230820
    ctx->pc = 0x19C764u;
    SET_GPR_U32(ctx, 31, 0x19C76Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x19C764u, 0x19C76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C76Cu;
label_19c76c:
    // 0x19c76c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x19c76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19c770: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x19c770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19c774: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x19c774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19c778: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19c778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19c77c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x19c77cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19c780: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x19c780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x19c784: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19c784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19c788: 0xc0c39e2  jal         func_30E788
    ctx->pc = 0x19C788u;
    SET_GPR_U32(ctx, 31, 0x19C790u);
    ctx->pc = 0x30E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E788u, 0x19C788u, 0x19C790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C790u;
label_19c790:
    // 0x19c790: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x19c790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x19c794: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x19c794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19c798: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19c798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c79c: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x19c79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x19c7a0: 0xc7ac005c  lwc1        $f12, 0x5C($sp)
    ctx->pc = 0x19c7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19c7a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19c7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c7a8: 0xc08c64c  jal         func_231930
    ctx->pc = 0x19C7A8u;
    SET_GPR_U32(ctx, 31, 0x19C7B0u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x19C7A8u, 0x19C7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C7B0u;
label_19c7b0:
    // 0x19c7b0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x19c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19c7b4: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x19c7b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x19c7b8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19C7B8u;
    {
        const bool branch_taken_0x19c7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c7b8) {
            ctx->pc = 0x19C7F8u;
            goto label_19c7f8;
        }
    }
    ctx->pc = 0x19C7C0u;
    // 0x19c7c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19c7c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19c7c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19c7c8: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x19c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x19c7cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19c7ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19c7d0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x19c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x19c7d4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x19c7d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x19c7d8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x19c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x19c7dc: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x19c7dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x19c7e0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x19c7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19c7e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19c7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c7e8: 0xc08c4d0  jal         func_231340
    ctx->pc = 0x19C7E8u;
    SET_GPR_U32(ctx, 31, 0x19C7F0u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x19C7E8u, 0x19C7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C7F0u;
label_19c7f0:
    // 0x19c7f0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x19C7F0u;
    {
        const bool branch_taken_0x19c7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c7f0) {
            ctx->pc = 0x19C8C4u;
            goto label_19c8c4;
        }
    }
    ctx->pc = 0x19C7F8u;
label_19c7f8:
    // 0x19c7f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19c7fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c7fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c800: 0x0  nop
    ctx->pc = 0x19c800u;
    // NOP
    // 0x19c804: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x19c804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x19c808: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x19c808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19c80c: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x19c80cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
    // 0x19c810: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x19C810u;
    {
        const bool branch_taken_0x19c810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c810) {
            ctx->pc = 0x19C898u;
            goto label_19c898;
        }
    }
    ctx->pc = 0x19C818u;
    // 0x19c818: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x19c818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19c81c: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x19c81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19c820: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19c820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19c824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c828: 0x0  nop
    ctx->pc = 0x19c828u;
    // NOP
    // 0x19c82c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19c82cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19c830: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x19C830u;
    {
        const bool branch_taken_0x19c830 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19c830) {
            ctx->pc = 0x19C84Cu;
            goto label_19c84c;
        }
    }
    ctx->pc = 0x19C838u;
    // 0x19c838: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19c838u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c83c: 0x0  nop
    ctx->pc = 0x19c83cu;
    // NOP
    // 0x19c840: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x19c840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x19c844: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x19C844u;
    {
        const bool branch_taken_0x19c844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c844) {
            ctx->pc = 0x19C890u;
            goto label_19c890;
        }
    }
    ctx->pc = 0x19C84Cu;
label_19c84c:
    // 0x19c84c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x19c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19c850: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x19c850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19c854: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19c854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19c858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c85c: 0x0  nop
    ctx->pc = 0x19c85cu;
    // NOP
    // 0x19c860: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x19c860u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19c864: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x19c864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
    // 0x19c868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c86c: 0x0  nop
    ctx->pc = 0x19c86cu;
    // NOP
    // 0x19c870: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x19c870u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19c874: 0xc0c39dc  jal         func_30E770
    ctx->pc = 0x19C874u;
    SET_GPR_U32(ctx, 31, 0x19C87Cu);
    ctx->pc = 0x30E770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E770u, 0x19C874u, 0x19C87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C87Cu;
label_19c87c:
    // 0x19c87c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19c880: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19c880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19c884: 0x0  nop
    ctx->pc = 0x19c884u;
    // NOP
    // 0x19c888: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19c888u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19c88c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x19c88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_19c890:
    // 0x19c890: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x19c890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19c894: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x19c894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_19c898:
    // 0x19c898: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19c898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19c89c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19c89cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19c8a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19c8a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19c8a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19c8a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19c8ac: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x19c8acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x19c8b0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x19c8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19c8b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19c8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c8b8: 0xc7af0058  lwc1        $f15, 0x58($sp)
    ctx->pc = 0x19c8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x19c8bc: 0xc08c4d0  jal         func_231340
    ctx->pc = 0x19C8BCu;
    SET_GPR_U32(ctx, 31, 0x19C8C4u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x19C8BCu, 0x19C8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C8C4u;
label_19c8c4:
    // 0x19c8c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19c8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19c8c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19c8c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c8cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c8ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c8d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c8d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c8d4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x19c8d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x19c8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x19C8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C8E0u;
}
