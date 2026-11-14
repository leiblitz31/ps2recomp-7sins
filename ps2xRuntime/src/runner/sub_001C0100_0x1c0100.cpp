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

// Function: sub_001C0100
// Address: 0x1c0100 - 0x1c0300
void sub_001C0100_0x1c0100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0100_0x1c0100");
#endif

    switch (ctx->pc) {
        case 0x1c0194u: goto label_1c0194;
        case 0x1c01a0u: goto label_1c01a0;
        case 0x1c01d0u: goto label_1c01d0;
        case 0x1c01e0u: goto label_1c01e0;
        case 0x1c029cu: goto label_1c029c;
        default: break;
    }

    ctx->pc = 0x1c0100u;

    // 0x1c0100: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1c0100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1c0104: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1c0104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1c0108: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1c0108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1c010c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1c010cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1c0110: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c0110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c0114: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c0114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c0118: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c0118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c011c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c011cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c0120: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c0120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c0124: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c0124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c0128: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x1c0128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x1c012c: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x1c012cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x1c0130: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x1c0130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x1c0134: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x1c0134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
    // 0x1c0138: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c0138u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c013c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1c013cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c0140: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0140u;
    {
        const bool branch_taken_0x1c0140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0140) {
            ctx->pc = 0x1C015Cu;
            goto label_1c015c;
        }
    }
    ctx->pc = 0x1C0148u;
    // 0x1c0148: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1c0148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c014c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C014Cu;
    {
        const bool branch_taken_0x1c014c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c014c) {
            ctx->pc = 0x1C015Cu;
            goto label_1c015c;
        }
    }
    ctx->pc = 0x1C0154u;
    // 0x1c0154: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0158: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x1c0158u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c015c:
    // 0x1c015c: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C015Cu;
    {
        const bool branch_taken_0x1c015c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c015c) {
            ctx->pc = 0x1C0174u;
            goto label_1c0174;
        }
    }
    ctx->pc = 0x1C0164u;
    // 0x1c0164: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0168: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x1c0168u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c016c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C016Cu;
    {
        const bool branch_taken_0x1c016c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c016c) {
            ctx->pc = 0x1C0178u;
            goto label_1c0178;
        }
    }
    ctx->pc = 0x1C0174u;
label_1c0174:
    // 0x1c0174: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c0174u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0178:
    // 0x1c0178: 0x329600ff  andi        $s6, $s4, 0xFF
    ctx->pc = 0x1c0178u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1c017c: 0x12c00052  beqz        $s6, . + 4 + (0x52 << 2)
    ctx->pc = 0x1C017Cu;
    {
        const bool branch_taken_0x1c017c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c017c) {
            ctx->pc = 0x1C02C8u;
            goto label_1c02c8;
        }
    }
    ctx->pc = 0x1C0184u;
    // 0x1c0184: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1c0184u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0188: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c0188u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c018c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1C018Cu;
    {
        const bool branch_taken_0x1c018c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c018c) {
            ctx->pc = 0x1C02BCu;
            goto label_1c02bc;
        }
    }
    ctx->pc = 0x1C0194u;
label_1c0194:
    // 0x1c0194: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c0194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0198: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1C0198u;
    {
        const bool branch_taken_0x1c0198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0198) {
            ctx->pc = 0x1C02ACu;
            goto label_1c02ac;
        }
    }
    ctx->pc = 0x1C01A0u;
label_1c01a0:
    // 0x1c01a0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1c01a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1c01a4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1c01a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c01a8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1c01a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c01ac: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1c01acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c01b0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c01b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c01b4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1c01b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c01b8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c01b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c01bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c01bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c01c0: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1c01c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c01c4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c01c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c01c8: 0xc06e5c8  jal         func_1B9720
    ctx->pc = 0x1C01C8u;
    SET_GPR_U32(ctx, 31, 0x1C01D0u);
    ctx->pc = 0x1B9720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9720u, 0x1C01C8u, 0x1C01D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01D0u;
label_1c01d0:
    // 0x1c01d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c01d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c01d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01d8: 0xc06edac  jal         func_1BB6B0
    ctx->pc = 0x1C01D8u;
    SET_GPR_U32(ctx, 31, 0x1C01E0u);
    ctx->pc = 0x1BB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB6B0u, 0x1C01D8u, 0x1C01E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01E0u;
label_1c01e0:
    // 0x1c01e0: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x1c01e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1c01e4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1c01e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c01e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c01e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c01ec: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1c01ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1c01f0: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1c01f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c01f4: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x1c01f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1c01f8: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1c01f8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1c01fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c01fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0200: 0x14830029  bne         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1C0200u;
    {
        const bool branch_taken_0x1c0200 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c0200) {
            ctx->pc = 0x1C02A8u;
            goto label_1c02a8;
        }
    }
    ctx->pc = 0x1C0208u;
    // 0x1c0208: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1c0208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1c020c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c0210: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c0210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0214: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c0214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c0218: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1c0218u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c021c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1c021cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c0220: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1c0220u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1c0224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0228: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0228u;
    {
        const bool branch_taken_0x1c0228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0228) {
            ctx->pc = 0x1C023Cu;
            goto label_1c023c;
        }
    }
    ctx->pc = 0x1C0230u;
    // 0x1c0230: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1c0230u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0234: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0234u;
    {
        const bool branch_taken_0x1c0234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0234) {
            ctx->pc = 0x1C0240u;
            goto label_1c0240;
        }
    }
    ctx->pc = 0x1C023Cu;
label_1c023c:
    // 0x1c023c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c023cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0240:
    // 0x1c0240: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x1c0240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x1c0244: 0x11163c  dsll32      $v0, $s1, 24
    ctx->pc = 0x1c0244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 24));
    // 0x1c0248: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1c0248u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1c024c: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x1c024cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c0250: 0x12163c  dsll32      $v0, $s2, 24
    ctx->pc = 0x1c0250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 24));
    // 0x1c0254: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1c0254u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1c0258: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x1c0258u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c025c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1c025cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c0260: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1c0260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c0264: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1c0264u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1c0268: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x1c0268u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c026c: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x1c026cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c0270: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x1c0270u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c0274: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x1c0274u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x1c0278: 0x82020008  lb          $v0, 0x8($s0)
    ctx->pc = 0x1c0278u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c027c: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x1c027cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c0280: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x1c0280u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x1c0284: 0x82020009  lb          $v0, 0x9($s0)
    ctx->pc = 0x1c0284u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x1c0288: 0x23e3c  dsll32      $a3, $v0, 24
    ctx->pc = 0x1c0288u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c028c: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x1c028cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x1c0290: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1c0290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c0294: 0xc0701bc  jal         func_1C06F0
    ctx->pc = 0x1C0294u;
    SET_GPR_U32(ctx, 31, 0x1C029Cu);
    ctx->pc = 0x1C06F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C06F0u, 0x1C0294u, 0x1C029Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C029Cu;
label_1c029c:
    // 0x1c029c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1c029cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c02a0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1c02a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1c02a4: 0xa203000a  sb          $v1, 0xA($s0)
    ctx->pc = 0x1c02a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 3));
label_1c02a8:
    // 0x1c02a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c02a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c02ac:
    // 0x1c02ac: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x1c02acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c02b0: 0x1460ffbb  bnez        $v1, . + 4 + (-0x45 << 2)
    ctx->pc = 0x1C02B0u;
    {
        const bool branch_taken_0x1c02b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c02b0) {
            ctx->pc = 0x1C01A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c01a0;
        }
    }
    ctx->pc = 0x1C02B8u;
    // 0x1c02b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c02b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c02bc:
    // 0x1c02bc: 0x2e430004  sltiu       $v1, $s2, 0x4
    ctx->pc = 0x1c02bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c02c0: 0x1460ffb4  bnez        $v1, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1C02C0u;
    {
        const bool branch_taken_0x1c02c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c02c0) {
            ctx->pc = 0x1C0194u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0194;
        }
    }
    ctx->pc = 0x1C02C8u;
label_1c02c8:
    // 0x1c02c8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1c02c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c02cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1c02ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c02d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1c02d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c02d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c02d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c02d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c02d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c02dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c02dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c02e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c02e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c02e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c02e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c02e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c02e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c02ec: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1c02ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1c02f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C02F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C02F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C02F8u;
    // 0x1c02f8: 0x0  nop
    ctx->pc = 0x1c02f8u;
    // NOP
    // 0x1c02fc: 0x0  nop
    ctx->pc = 0x1c02fcu;
    // NOP
    ctx->pc = 0x1c0300u;
}
